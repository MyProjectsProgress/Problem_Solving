#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // 1. initialize
    vector<int> v0;
    vector<int> v1(5, 1);
    // 2. make a copy
    vector<int> v2(v1.begin(), v1.end());
    vector<int> v3(v2);

    cout<<v1[0]<<endl;
    cout<<v2[3]<<endl;
    cout<<v3[0]<<endl;
}
