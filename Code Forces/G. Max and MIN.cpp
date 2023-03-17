#include <bits/stdc++.h>

using namespace std;

int getMax(int arr[], int n)
{
    int maxi = arr[0];
    for(int i=0; i<n; i++) if (arr[i] > maxi) maxi = arr[i];
    return maxi;
}

int getMin(int arr[], int n)
{
    int mini = arr[0];
    for(int i=0; i<n; i++) if (arr[i] < mini) mini = arr[i];
    return mini;
}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) { int x; cin>>x; arr[i]=x; }

    cout<<getMin(arr,n)<<" "<<getMax(arr,n);

    return 0;
}
