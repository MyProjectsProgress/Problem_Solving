#include <bits/stdc++.h>

using namespace std;

int main(){

    string s1,s2;
    int minL;
    cin>>s1>>s2;

    minL = min(s1.length(), s2.length());

    for(int i=0; i<minL; i++) {
        cout<<s1[i];
    }

    return 0;
}
