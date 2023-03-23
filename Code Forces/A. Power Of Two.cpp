#include <bits/stdc++.h>

using namespace std;

int main(){

    long double n;
    cin>>n;

    if(ceil(log2(n)) == floor(log2(n))) { cout<<"YES"; return 0; }

    cout<<"NO";

    return 0;
}
