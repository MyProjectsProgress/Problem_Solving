#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //3 2 5 4
    double a, b, c, d;
    cin>>a>>b>>c>>d;
    double mult1 = a ,mult2 = c;
    mult1 = b*log(a);
    mult2 = d*log(c);
    if(mult1>mult2) cout<<"YES";
    else cout<<"NO";
    return 0;
}


