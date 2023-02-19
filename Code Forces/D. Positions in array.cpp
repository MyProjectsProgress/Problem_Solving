#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){ int x; cin>>x;arr[i] = x; }

    for(int i = 0; i<n; i++) { if(arr[i]<=10) cout<<"A["<<i<<"]"<<" = "<<arr[i]<<endl;}

    return 0;
}
