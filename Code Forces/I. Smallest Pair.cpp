#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,test;
    long long mini_sum;
    cin>>test;
    vector<int> result;

    while(test--){

        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++){ int x; cin>>x; arr[i] = x; }

        mini_sum = arr[0] + arr[1] + 2 - 1;

        for(int i = 0; i<n; i++)
        for(int j = i+1; j<n; j++){
            long long new_sum = arr[i] + arr[j] + j+1 - (i+1) ;
            if(new_sum < mini_sum) mini_sum = new_sum;
            // cout<<"i= "<<i<<"j= "<<j<<"mini= "<<mini_sum<<endl;
        }

        cout<<mini_sum<<endl;

    }

    return 0;
}
