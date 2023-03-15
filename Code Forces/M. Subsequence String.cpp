#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,sub="hello";
    int index{0},counter{0};
    cin>>s;

    for (int i = 0; i < sub.size(); i++)
    for (int j = index+1; j < s.size(); j++)
        if (s[j] == sub[i]){ index = j; counter++; break; }

    if(counter == 5) cout<<"YES";
    else cout<<"NO";

    return 0;
}
