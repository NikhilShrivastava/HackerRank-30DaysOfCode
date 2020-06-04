#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    int rem=0,s=0,t=0;
    cin >> n;
     while(n>0)
        {
        rem=n%2;
        n=n/2;
        if(rem==1)
         {   s++;
           if(s>=t)

            t=s;

        }
        else{

            s=0;
        }   
    }
    cout<<t<<endl;

    return 0;
}

