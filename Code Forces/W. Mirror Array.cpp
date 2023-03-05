#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
    { int x; cin>>x; arr[i][j] = x; }

    for(int j=0; j<n; j++)
    {
        for(int i=m-1; i>=0; i--)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
