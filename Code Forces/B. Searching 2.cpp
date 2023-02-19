#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,number;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        arr[i] = x;
    }

    cin>>number;

    for(int i = 0; i<n; i++) if(arr[i] == number) { cout<<i; return 0;}

    cout<<-1;

    return 0;
}
