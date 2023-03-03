#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, x;
    string flag = "will take number";
    cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++) for(int j=0; j<m; j++) { int x; cin>>x; arr[i][j] = x; }

    cin>>x;

    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
    {
        if(arr[i][j] == x) flag = "will not take number";
    }

    cout<<flag;

    return 0;
}
