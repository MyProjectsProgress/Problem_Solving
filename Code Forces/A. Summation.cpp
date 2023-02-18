#include <bits/stdc++.h>

using namespace std;

/*
50
5 5
*/

int main(){
    long long n, sum = 0;
    cin>>n;
    int arr[n];

    while(n--){
        int x;
        cin>>x;
        sum += x;
    }

    if (sum>0) cout<<sum;
    else cout<<-sum;

    return 0;
}
