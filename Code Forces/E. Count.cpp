#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    long long sum {0};
    cin>>s;

    for(int i=0; i<s.length(); i++) sum += s[i] - '0';

    cout<<sum;

    return 0;
}
