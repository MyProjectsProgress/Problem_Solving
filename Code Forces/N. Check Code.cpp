#include <bits/stdc++.h>

using namespace std;
// [ 1 6 3 7 ]
int main(){
    string word;
    int a,b,dashIndex{0};
    bool flag = true;
    cin>>a>>b>>word;

    for(int i=0; i<word.length(); i++) { if(word[i] == '-') dashIndex = i; }

    for(int i=0; i<word.length(); i++) {
        if(word[i] == '-') continue;
        if(word[i] < '0' || word[i] > '9') flag = false;
    }

    if(flag && dashIndex == a) cout<<"Yes";
    else cout<<"No";

    return 0;
}
