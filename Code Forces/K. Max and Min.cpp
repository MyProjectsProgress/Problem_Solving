#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,maxx, minn;
    cin>>a>>b>>c;
    maxx = minn = a;
    if (b>=maxx) maxx=b;
    if (c>=maxx) maxx=c;

    if (b<=minn) minn=b;
    if (c<=minn) minn=c;

    cout<<minn<<" "<<maxx;
    return 0;

}
