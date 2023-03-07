#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,q;
    cin>>n>>q;
    int arr[n];
    long long sum {0};
    vector<long long> sums;

    for(int i=0; i<n; i++) { int x; cin>>x; arr[i] = x; }

    while(q--){
        int l,r;
        cin>>l>>r;
        for(int i=l-1; i<=r-1; i++) { sum+=arr[i]; }
        sums.push_back(sum);
        sum = 0;
    }

    for(int i=0; i<sums.size(); i++) { cout<<sums[i]<<endl; }

    return 0;
}
