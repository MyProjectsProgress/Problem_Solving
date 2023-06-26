#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,q;
    bool flag = false;
    cin>>n>>q;
    int arr[n];
    long long sum {0};
    vector<long long> sums;
    vector<long long> result;
    vector<long long> right;

    for(int i=0; i<n; i++) { int x; cin>>x; arr[i] = x; }

    for(int i=0; i<n; i++) { sum+=arr[i]; sums.push_back(sum); }

    while(q--){
        int l,r;
        cin>>l>>r;
        result.push_back(sums[r-1] - sums[l-1] + arr[l-1]);
    }

    for(int i=0; i<result.size(); i++) { cout<<result[i]<<endl; }

    return 0;
}
