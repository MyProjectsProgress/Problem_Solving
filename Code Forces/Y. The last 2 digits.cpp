#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int mult;
    x1 = x1%100;
    y1 = y1%100;
    x2 = x2%100;
    y2 = y2%100;
    mult = (x1*x2*y1*y2)%100;
    if (mult < 10) cout<<0<<mult;
    else cout<<mult;

    return 0;
}


