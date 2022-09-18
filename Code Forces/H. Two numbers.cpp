#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    float a,b,c;
    cin>>a>>b;
    c = a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(c)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(c)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(c);
    return 0;

}
