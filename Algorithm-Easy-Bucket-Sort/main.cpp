#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1001];
    int i , j , step;
    for (i = 0 ; i <= 1001 ; i++)
    {
        a[i] = 0; 
    }
    for (i = 1 ; i <= 5 ; i++)
    {
        cin >> step;
        a[step]++;
    }
    for (i = 0 ; i <= 1000 ; i++)
    {
        for(j = 1 ; j <= a[i] ; j++)
        {
            cout << i << " ";
        }
    }
    return 0;
}
