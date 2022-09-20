#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int ageInDays,days, years, months;
    cin>>ageInDays;
    years = ageInDays/365;
    months = (ageInDays - years*365)/30;
    days = (ageInDays - years*365 - months * 30);
    cout<<years<<" years"<<endl<<months<<" months"<<endl<<days<<" days";
    return 0;
}
