#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if     ((x2 > y1) & (y2 > y1)) cout<<-1;
    else if((y2 < x1) & (x2 < x1)) cout<<-1;
    else if((y1 > x2) & (y2 > y1)) cout<<x2<<" "<<y1;
    else if((y1 > x2) & (y2 < y1)) cout<<x2<<" "<<y2;
    else if((x1 < y2) & (y2 < y1)) cout<<x1<<" "<<y2;
    else if((x1 < y2) & (y2 > y1)) cout<<x1<<" "<<y1;
    else if((x1 < y2) & (y2 > y1)) cout<<x1<<" "<<y1;
    else if((x2 < y1) & (y1 == y2))cout<<x2<<" "<<y2;
    else if(x1 == y2 ) cout<<x1<<" "<<y2;
    else if(x2 == y1 ) cout<<x2<<" "<<y1;

    return 0;
}


