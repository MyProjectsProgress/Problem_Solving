#include <bits/stdc++.h>

using namespace std;
// 5
// 4 1 3 10 8

int getMax(int n, int arr[]){
    int maxNum = arr[0];
    int maxIndex = 0;
    for(int i = 1; i<n; i++) if(arr[i] > maxNum) { maxNum = arr[i]; maxIndex = i; }
    return maxIndex;
}

int getMin(int n, int arr[]){
    int minNum = arr[0];
    int minIndex = 0;
    for(int i = 1; i<n; i++) if(arr[i] < minNum) { minNum = arr[i]; minIndex = i; }
    return minIndex;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){ int x; cin>>x; arr[i]=x; }

    int maxIndex = getMax(n, arr);
    int minIndex = getMin(n, arr);

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    for(int i = 0; i<n; i++){ cout<<arr[i]<<" "; }


    return 0;
}
