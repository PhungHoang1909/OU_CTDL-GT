/*
Cho một số n, hãy đưa số dãy số siêu nguyên tố 
nhỏ hơn hoặc bằng n đã được sắp xếp tăng dần.
*/

#include<iostream>
#include<vector>
#include<queue>
#include<cmath>

using namespace std;

bool isPrime(int n)
{
    if(n < 2) {
        return false;
    }
    for (int i = 0; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        } else {
            return true;
        }
    }
}

std::vector<int> superPrimeNumber(int n)
{
    queue<int> q;
    for (int i = 2; i <= n && i < 10; i++) {
        if(isPrime(i)) {
            q.push(i);
        }
    }
    vector<int> res;
    while(!q.empty())
    {
        bool flag = false;
        for (int i = 1; i <= 9; i+=2) 
        {
            int p = q.front() * 10 + i;
            if(p > n)
            {
                flag = true;
                break;
            }
            if(isPrime(p)) {
                q.push(p);
            }
        }
        if(!flag)
        {
            res.push_back(q.front());
            q.pop();
        } else {
            while(!q.empty())
            {
                res.push_back(q.front());
                q.pop();
            }
        }
    }
    return res;
}