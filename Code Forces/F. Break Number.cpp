#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, counter{0}, init{-1}, maxi;
    cin>>n;
    long long arr[n];

    for (int i = 0; i<n; i++){ long long x; cin>>x; arr[i] = x; }

    for (int i = 0; i<n; i++)
    {
    for (long long j = arr[i]; j>0; j=j/2)
    {
        if(j%2==0) counter++;
        else break;
    }
    maxi = max(counter, init);
    init = maxi;
    counter = 0;
    }
    cout<<maxi;

    return 0;
}
