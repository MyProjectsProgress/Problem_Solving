#include <bits/stdc++.h>

using namespace std;

void mean (long double arr[], int n)
{
    long double sum {0};

    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }

    cout.precision(7);
    cout<<sum/n;
}


int main(){

    int n;
    cin>>n;
    long double arr[n];

    for (int i = 0; i < n; i++) { double x; cin>>x; arr[i] = x; }

    mean(arr,n);

    return 0;
}
