#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int n;
    bool flag = true;
    vector<string> result;

    cin>>n;

    while(n--){

    cin>>s;
    flag = true;

    for(int i=0; i<s.length()-2; i++)
        if( (s[i]=='0' && s[i+1] == '1' && s[i+2] == '0') || (s[i]=='1' && s[i+1] == '0' && s[i+2] == '1') )
        {
            result.push_back("Good");
            flag = false;
            break;
        }
    if (flag) { result.push_back("Bad"); }
    }

    for(int i=0; i<result.size(); i++) cout<<result[i]<<endl;

    return 0;
}
