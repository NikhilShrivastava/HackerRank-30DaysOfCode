#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    //string c = "HackerRank is the best place to learn and practice coding!";
    int a;
    double e;
    string c;
    cin>>a;
    cout<<a+i<<endl;
    cin>>e;
    cout<<fixed<<setprecision(1)<<d+e<<endl;
    cin.ignore();  //ignores an end of line character 
getline(cin, c);
    
    s.append(c);
    
    
    cout<<s<<endl;







    return 0;
