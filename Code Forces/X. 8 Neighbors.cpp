#include <bits/stdc++.h>

using namespace std;

//(i - 1, j - 1);(i, j - 1);(i + 1, j - 1);(i - 1, j);(i, j);(i + 1, j);(i - 1, j + 1);(i, j + 1);(i + 1, j + 1);

int main(){

    int n,m,x,y;
    cin>>n>>m;
    char arr[n][m];

    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
    { char x; cin>>x; arr[i][j] = x; }

    cin>>x,y;



    return 0;
}
