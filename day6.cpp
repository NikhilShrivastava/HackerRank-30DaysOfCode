#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(i%2==0)
            cout<<s[i];
        }
        cout<<" ";
        for(int i=0;i<s.length();i++)
        {
            if(i&1)
            cout<<s[i];
        }
        cout<<endl;

    }
}
