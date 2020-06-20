#include<bits/stdc++.h> 
using namespace std; 
  
bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1)  return false; 
  
    // Check from 2 to n-1 
    int sq=sqrt(n);
    for (int i=2; i<=sq; i++) 
        if (n%i == 0) 
            return false; 
  
    return true; 
} 
  
// Driver Program to test above function 
int main() 
{ 
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool b=isPrime(n);
        if(b)
        cout<<"Prime"<<endl;
        else
        cout<<"Not prime"<<endl;

    } 
} 
