#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    double x;
    cin>>x;
    double y1 = x;
    int y2 = x;
    if(y1 - y2 > 0) cout<<"float "<<y2<<" "<<y1-y2;
    else cout<<"int "<<y2;
    return 0;
}


