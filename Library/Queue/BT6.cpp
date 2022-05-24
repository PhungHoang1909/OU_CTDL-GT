/*
Cho ma trận các số chỉ chứa giá trị 0 và 1. 
Hai phần tử được coi là cùng một cụm khi 2 phần tử này có chung cạnh và đều có giá trị bằng 1.
 Các phần tử có giá trị bằng 0 không được coi là một cụm. 
 Bạn hãy viết hàm đếm số cụm của một ma trận cho trước.
*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int cluster(vector<vector<int>> matrix)
{
    queue <int> x,y;
    int ans = 0; 
    for (int  i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if(matrix[i][j] == 1)
            {
                x.push(i);
                y.push(j);
                ans ++;
                matrix[i][j] = 0;
            }
            while (!x.empty())
            {
                int o[] = {0, 1, 0, -1};
                int p[] = {1,0, -1 ,0};
                for (int d = 0; d < 4; d++)
                {
                    if( x.front()+o[d] >= 0 && x.front()+o[d] < matrix.size() &&  y.front()+p[d] >= 0 && y.front()+p[d] < matrix[1].size() && matrix[x.front()+o[d]][y.front()+p[d]]==1 )
                    {
                        matrix[x.front()+o[d]][y.front()+p[d]] = 0;
                        x.push(x.front()+o[d]);
                        y.push(y.front()+p[d]);
                        matrix[x.front()+o[d]][y.front()+p[d]]= 0;
                    }
                }
                x.pop();
                y.pop();
                
            }
        }
    }
    return ans;
}