#include <iostream>

#define MAXINT 32560
#define NIL -1
#define max 50
typedef long Graph[max][max];
int befor[max], d[max];

using namespace std;

typedef struct Node *link;
struct Node{
    int v;
    link next;
};

typedef link Set;
int n, s, t;
Set V;
Graph g;

void Set_init(Set &S)
{
    S = NULL;
}

void Insert_Set(int x, Set &S)
{
    Set q;
    q = new Node;
    q->v = x;
    q->next = S;
    S = q;
}

void Delete(int x, Set &l)
{
    Set p;
    if(l != NULL)
    {
        if(x == (l->v))
        {
            p = l;
            l = l->next;
            delete p;
        }
        else
            Delete(x, l->next);
    }
}

void init(Graph &g)
{
    int i, j;
    cout << "Given number of graph: ";
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            cout << "c[" << i << "," << j << "]= ";
            cin >> g[i][j];
        }
    }
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(g[i][j] == 0)
                g[i][j] = MAXINT;
        }
    }
    Set_init(V);
    for(i = 1; i <= n; i++)
        Insert_Set(i, V);
}

void output(Graph g)
{
    cout << "Distance Matrix\n";
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if (g[i][j] == MAXINT)
                cout << char(236) << " ";
            else
                cout << g[i][j] << " ";
        }
        cout << endl;
    }
}

void Min_path(int s,int t)
{
    if(t==s) 
        cout<<s<<"=>";
    else if(befor[t]==NIL) 
        cout<<"no path from"<< s << "to" << t << "exists";
  	else 
    {
		Min_path(s,befor[t]);
  		cout<<"=>"<<t<<" ";
    }  
}

int Extract_Min(Set &Q)
{
    Set p;
    int u, minQ;
    minQ=MAXINT; 
    p=Q; 
    u=p->v;
    while(p!=NULL)
    {
        if(minQ>d[p->v])
        {
	   	    u=p->v;
	   		minQ=d[p->v];
        }
        p=p->next;
    }
    Delete(u,Q);
    return u;
}

void dijkstra(Graph G, int &s)
{
    int  v, u;
    Set p;
    for(v=1; v<=n; v++)
    {
        d[v]=MAXINT;
        befor[v]=NIL;
    }
    befor[s]=NIL;
    d[s]=0;  
    while(V!=NULL)
    {
        u=Extract_Min(V);
        p=V;
        while(p!=NULL)
        {
	        if(d[p->v]>d[u]+G[u][p->v])
	 	    {
	            d[p->v]=d[u]+G[u][p->v];
	            befor[p->v]=u;
	 	    }
	   p=p->next;
        }
   }
 }

int main()
{
   	init(g);
	output(g);
	cout<<"start vertex: "; cin>>s;
	dijkstra(g,s);
	cout<<"final vertex: "; cin>>t;
	Min_path(s,t); cout<<"\n";
	cout<<"The length of the shortest path is "<<d[t]<<"\n";
  	return 0;
}