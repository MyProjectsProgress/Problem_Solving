#include <bits/stdc++.h>

using namespace std;

int main(){

    string s1,s2;
    cin>>s1;

    for(int i=s1.size()-1; i>=0; i--)
    {
        s2 += s1[i];
    }

    for(int j = 0; j<s1.size(); j++)
    {
        if (s2[j] != s1[j]) { cout<<"NO"; return 0;}
    }

    cout<<"YES";

    return 0;
}
