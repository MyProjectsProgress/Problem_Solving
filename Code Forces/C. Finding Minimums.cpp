#include <bits/stdc++.h>

using namespace std;

int main(){
    float n,k;
    long long endd{0}, start{0}, mini {1000000000000},x;
    int i,s;

    cin>>n>>k;
    int arr[int(n)];

    for(i =0; i<n; i++){
        cin>>x;
        arr[i] = x;
    }

    if(k!=1){ s = ceil(n/k); endd = k;}
    else    { s = 1; endd = n;}

    for(int j=1; j<=s; j++){
    for(i=start; i<endd; i++){
        if (i<n) if (arr[i]<mini) mini = arr[i];
    }
    cout<<mini<<" ";
    start = i;
    endd +=ceil(n/k);
    mini = 1000000;
    }
    return 0;
}
