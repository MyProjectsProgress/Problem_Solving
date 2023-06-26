#include <bits/stdc++.h>

using namespace std;

int megzawy_search(int index, int find_me, int arr[], int left, int right) {

    if(arr[index] == find_me) return index;

    else if (arr[index] < index) return megzawy_search(int((left + index)/2), find_me, arr, left, index);

    else if (arr[index] > index) return megzawy_search(int((right + index)/2), find_me, arr, index, right);


}

int main(){

    int n,q;
    bool flag = false;
    cin>>n>>q;
    int arr[n];
    vector<long long> result;

    for(int i=0; i<n; i++) { int x; cin>>x; arr[i] = x; }

    int length = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + length);

    while(q--){
        int find_me;
        cin>>find_me;
        int index = megzawy_search(int(n/2), find_me, arr, 0 , n-1);
        result.push_back(index);
    }

    for(int i=0; i<result.size(); i++) { cout<<result[i]<<endl; }

    return 0;
}
