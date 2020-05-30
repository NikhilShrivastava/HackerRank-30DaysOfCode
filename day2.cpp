#include<bits/stdc++.h>
using namespace std;
int main()
{
    float meal_cost;
    int tip_percent,tax_percent;
    cin>>meal_cost>>tip_percent>>tax_percent;
    float meal;
    meal = round(meal_cost+(meal_cost*0.01*tip_percent)+(meal_cost*0.01*tax_percent));
    cout<<meal<<endl;

}

