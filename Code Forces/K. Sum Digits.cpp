#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,sum{0};
    cin>>n;
    string number;
    cin>>number;
    int arr[n];

    for(int i = 0; i<n; i++) { sum = sum + (number[i]-'0'); cout<<number[i]<<endl; }

    //for(int i = 0; i<n; i++) sum += arr[i];

    cout<<sum;


    return 0;
}
