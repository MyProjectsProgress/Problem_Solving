#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,mini;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){ int x; cin>>x; arr[i] = x; }

    for(int i = 0; i<n-1; i++) {

    mini = i; // arr[0] arr[1] arr[2] arr[3]

    for(int j = i; j<n; j++) {

        if(arr[j]<arr[mini]) {
            mini=j;
        }

    }
    swap(arr[i],arr[mini]);
    }

    for(int i = 0; i<n; i++){ cout<<arr[i]<<" "; }

    return 0;
}
