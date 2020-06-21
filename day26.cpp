#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    cin >>a;// actualDay;   
    cin >>b;// actualMonth; 
    cin >>c;// actualYear;  
    cin >>d;// expectedDay;
    cin >>e;// expectedMonth;
    cin >>f;// expectedYear;

    int fine = 0;
    if(f == c)
    {
        if( e< b)
        {
            
            fine = (b - e) * 500;
        }
        else if( (e ==b) 
                && (d < a) ){
            
            fine = (a - d) * 15;
        }
        
    }
    else if(f < c){
        
        fine = 10000;
    
    }
    cout<<fine<<endl;
}

