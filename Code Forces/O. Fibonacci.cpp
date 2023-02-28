#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    long long sum{0};

    vector<long long> arr;
    arr.push_back(0);
    arr.push_back(1);

    cin>>n;

    for(int i=2; i<n; i++){
        arr.push_back(arr[i-1]+arr[i-2]);
    }

    cout<<arr[n-1];
    return 0;
}
