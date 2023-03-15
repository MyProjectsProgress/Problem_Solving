#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    int counter {1};

    if(s == "" || s == " " || "." || "!" || "?" || "," || "..") { cout<<0; return 0; }

    for(int i=0; i<s.length(); i++) {
        if(s[i] == ' ')
            if(s[i+1] != '.' && s[i+1] != '!' && s[i+1] != '?' && s[i+1] != ',')
                counter++;
    }

    cout<<counter;

    return 0;

}
