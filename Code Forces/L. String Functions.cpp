#include <bits/stdc++.h>

using namespace std;

//reverse, substr, sort

int main(){

    string s;
    int n,q;

    cin>>n>>q>>s;

    while(q--){
        string x;
        cin>>x;
        if      (x == "pop_back")  { s.pop_back(); }
        else if (x == "front")     { cout<<s[0]<<endl; }
        else if (x == "back")      { cout<<s[s.size()-1]<<endl; }
        else if (x == "print")     { int pos; cin>>pos; cout<<s[x-1]; }
        else if (x == "push_back") { char x; s+=x; }
        else if (x == "sort")      {
            /*int l,r;
            cin>>l,r;
            char temp;
            for (int i = 0; i < l-r+1; i++)
            for (int j = l; j < l-r; j++)
              if (s[j] > s[j + 1]){temp = s[j]; s[j] = s[j + 1]; s[j + 1] = temp;}*/
        }
        else if (x == "reverse"){

        }
        else if (x == "substr") {

        }

    }

    return 0;
}
