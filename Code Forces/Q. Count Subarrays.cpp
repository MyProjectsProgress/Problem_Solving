#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,t,counter;
    cin>>t;
    vector <int> vect;

    while(t--)
    {
        cin>>n;
        int arr[n];
        counter = n-1;

        for(int i=0; i<n; i++){ int x; cin>>x; arr[i]=x; }

        int i = 0, z = 0, ma = 0;

        while(true)
        {
            if (z = n-1) { break; }

            if (i == 0 ) { ma = max(arr[i],arr[i+1]); }
            else { ma = max(ma, arr[i+1]; }

            cout<<ma<<" ";

            if (i == n-1) { z++; i=z; }

        }
        cout<<endl;
    }

    return 0;
}
