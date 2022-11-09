#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

struct node {
	int vertex; //v
	float weight; //w
	node*next;
}; node*first;
typedef vector<vector<node>> graph;
graph createGraph()
{
	graph g;
	int k, n;
	cout << "nhap so dinh: ";
	cin >> n;
	g.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "nhap so dinh ke: ";
		cin >> k;
		k = k >= n ? n - 1 : k;
		g[i].resize(k);
		for (int j = 0; j < k; j++)
		{
			cin >> g[i][j].weight;
			int x; cin >> x;
			x = x >= n ? n - 1 : x;
			x = x < 0 ? 0 : x;
			g[i][j].vertex = x;
		}
	}
	return g;
}
void print(graph g)
{
	for (int i = 0; i < g.size(); i++)
	{
		cout << endl;
		for (int j = 0; j < g[i].size();j++)
		{
			cout << "[" << g[i][j].weight << ", " << g[i][j].vertex << "]";
		}
	}
}
void bfs(graph& g,int s)
{
	vector<bool>visited(g.size(),false);
	queue<int>q;
	visited[s] = true; q.push(s);
	while (!q.empty())
	{
		int curV = q.front();
		cout << endl << "visited: " << curV;
		q.pop();
		for (int i = 0; i < g[curV].size(); i++)
		{
			int adjV = g[curV][i].vertex;
			if (!visited[adjV]) {
				visited[adjV] = true;
				q.push(adjV);
			}
		}
	}
}
void dfs(graph& g, int s)
{
	vector<bool>visited(g.size(), false);
	stack<int>t;
	t.push(s);
	while (!t.empty())
	{
		int curV = t.top();
		t.pop();
		if (!visited[curV])
		{
			cout << endl << "visted: " << curV;
			visited[curV] = true;
		}
		for (int i = 0; i < g[curV].size(); i++)
		{
			int adjV = g[curV][i].vertex;
			if (!visited[adjV]) {
				t.push(adjV);
			}
		}
	}
}

int main()
{
	graph g = createGraph();
	dfs(g, 0);
	print(g);
}