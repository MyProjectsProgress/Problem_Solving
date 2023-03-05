#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m,counter{0};
    cin>>n>>m;
    int arr[n];
    int freq[100001] = {0};
    // vector<int> freq;

    for(int i=0; i<n; i++) { int x; cin>>x; arr[i] = x; freq[x-1]++; }

    /*
    for(int j=1; j<=m; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i] == j) counter++;
        }
        freq.push_back(counter);
        counter = 0;
    }
    */

    for(int i=0; i<m; i++) { cout<<freq[i]<<endl; }

    return 0;
}
