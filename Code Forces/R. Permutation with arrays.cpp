#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, counter{0};
    cin>>n;
    int arr1[n];
    int arr2[n];

    for(int i=0; i<n; i++) { int x; cin>>x; arr1[i] = x; }
    for(int i=0; i<n; i++) { int x; cin>>x; arr2[i] = x; }

    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++) {
        if(arr1[i] == arr2[j]){
            arr1[i] = -1;
            arr2[j] = -2;
            counter++;
        }
    }

    if (counter == n) cout<<"yes";
    else cout<<"no";

    return 0;
}
