#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){ int x; cin>>x; arr[i] = x; }

    int first = arr[0], last = arr[n-1];

    for(int i = n-1, j = 0; i>=0; i--, j++) {

        if(arr[i] != arr[j]){cout<<"NO"; return 0;}
        if(i == j) break;
    }

    cout<<"YES";

    return 0;
}
