#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int temp = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = (i+1); j <= n; j++)
        {
          int result = i&j;
           if((result > temp)&&(result < k))
           {
               temp = result;
           }
        }
    }
    cout<< temp<<endl;
    }
}

