#include <bits/stdc++.h>

using namespace std;

int main (){
    int n,sum1{0},sum2{1},sum{0};
    cin>>n;
    cout<<0<<" ";
    for(int i =1; i<n; i++){
        sum1 = sum2;
        sum2 = sum;
        sum= sum1 + sum2;
        cout<<sum<<" ";
    }
    return 0;
}

