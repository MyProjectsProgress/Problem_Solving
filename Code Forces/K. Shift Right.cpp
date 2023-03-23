#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,x,temp;

    cin>>n>>x;
    int arr[n];

    for(int i=0; i<n; i++){ int s; cin>>s; arr[i]=s; }

    for(int i=1; i<=x%n; i++)
    {
        temp = arr[n-1];
        for(int j=0; j<n-1; j++)
        {
            swap(arr[j],arr[j+1]);
        }
        arr[0] = temp;
    }

    for(int i=0; i<n; i++) { cout<<arr[i]<<" "; }

    return 0;
}
