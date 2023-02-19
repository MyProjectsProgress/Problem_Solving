#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,mini=1000000,index{0};
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){ int x; cin>>x; arr[i] = x; }

    for(int i = 0; i<n; i++) if(arr[i]<=mini) { mini = arr[i]; }

    for(int i = 0; i<n; i++) if(arr[i] == mini) { index = i+1; break; }

    cout<<mini<<" "<<index;

    return 0;
}
