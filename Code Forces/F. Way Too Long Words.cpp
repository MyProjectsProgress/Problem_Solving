#include <bits/stdc++.h>

using namespace std;

int main(){

    string s,x;
    int n,counter;
    vector<string> result;

    cin>>n;

    while(n--){

    cin>>s;

    if(s.length() > 10){
        x = s[0] + to_string((s.length()-2)) + s[s.length()-1];
        result.push_back(x);
    }
    else result.push_back(s);
    }

    for(int i=0; i<result.size(); i++) cout<<result[i]<<endl;

    return 0;
}
