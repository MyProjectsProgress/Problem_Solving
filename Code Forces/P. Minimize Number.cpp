#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    int counter{0};
    bool flag = true;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) { int x; cin>>x; arr[i] = x; }

    while(flag) {

        for(int i=0; i<n; i++) {
            if(arr[i]%2 == 1) {
                flag = false;
                break;
            }
        }

        if (flag) counter++;

        for(int i=0; i<n; i++) {
            arr[i] = arr[i]/2;
        }

    }

    cout<<counter;

    return 0;
}
