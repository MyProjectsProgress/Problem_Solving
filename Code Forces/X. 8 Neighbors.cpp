#include <bits/stdc++.h>

using namespace std;

//(i - 1, j - 1);(i, j - 1);(i + 1, j - 1);(i - 1, j);(i, j);(i + 1, j);(i - 1, j + 1);(i, j + 1);(i + 1, j + 1);

int main(){

    int n,m,x,y;
    cin>>n>>m;
    char arr[102][102] {'s'};

    for(int i=1; i<=n; i++)
    for(int j=1; j<=m; j++)
    { char x; cin>>x; arr[i][j] = x; }

    cin>>x>>y;

    if(arr[x-1][y-1] != '.'&& arr[x][y-1] != '.' && arr[x+1][y-1] != '.' && arr[x-1][y] !='.' && arr[x+1][y]!='.'&&arr[x-1][y+1]!='.'&& arr[x][y+1] != '.'&& arr[x+1][y+1] != '.')
    cout<<"yes";
    else cout<<"no";

    return 0;
}
