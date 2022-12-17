#include <bits/stdc++.h>

using namespace std;

int main (){
    int n,x,j;
    string y;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>x;
        arr[i] = x;
    }

    for(int i=0; i<n; i++){
        y = to_string(arr[i]);
        for(j = y.length()-1 ; j>=0; j--){
            cout<<y[j]<<" ";
        }
        if (i != n-1) cout<<endl;
    }
    return 0;
}
