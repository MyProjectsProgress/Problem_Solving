#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,mini,counter{0};
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){ int x; cin>>x; arr[i] = x; }

    mini = arr[0];

    for(int i = 0; i<n-1; i++) if(arr[i+1] < arr[i]) mini = arr[i+1];

    for(int i = 0; i<n; i++) if(arr[i] == mini) counter++;

    if (counter % 2 == 0 ) cout<<"Unlucky";
    else cout<<"Lucky";

    return 0;
}
