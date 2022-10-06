#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c,result,compare;
    cin>>a>>b>>c;
    result = a*b/c;
    compare = round(result);
    if ((result - compare) != 0 ) cout<<"double";
    else{
        if (result > 2147483647) cout<<"long long";
        else cout<<"int";
    }
    return 0;
}
