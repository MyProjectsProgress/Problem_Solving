#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,mini;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){ int x; cin>>x; arr[i] = x; }

    for(int i = 0; i<n-1; i++) { // n-1 as the last element is already sorted

    mini = i;

    for(int j = i; j<n; j++) { // j better be i+1 as you don't need to compare the first element with itself every time!

        if(arr[j]<arr[mini]) {
            mini=j;
        }
    }

    swap(arr[i],arr[mini]);

    }

    for(int i = 0; i<n; i++){ cout<<arr[i]<<" "; }

    return 0;
}
