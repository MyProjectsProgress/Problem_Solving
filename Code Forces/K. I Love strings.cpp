#include <bits/stdc++.h>

using namespace std;

int main(){

    string s1,s2,res="";
    int n,size1,size2,minSize;
    vector<string> result;
    cin>>n;

    while(n--)
    {
        cin>>s1>>s2;

        size1   = s1.size();
        size2   = s2.size();
        minSize = min(size1,size2);
        res="";

        for(int i = 0; i<minSize; i++) { res+=s1[i]; res+=s2[i]; }

        if(size1>size2) for(int i = minSize; i<s1.size(); i++) res+=s1[i];
        else            for(int i = minSize; i<s2.size(); i++) res+=s2[i];

        result.push_back(res);
    }
    for(int i = 0; i<result.size(); i++) cout<<result[i]<<endl;
    return 0;
}
