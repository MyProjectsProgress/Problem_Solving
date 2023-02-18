#include <iostream>

using namespace std;

const int n=7;

int arr[n][n];
int vis[n];

void dfs(int x) {
    vis[x] = true;
    cout << x;
    for (int i = 1; i <= n; i++) {
        if (!vis[i] && arr[][]) {
            dfs(i);
        }
    }
}

int main()
{
    return 0;
}