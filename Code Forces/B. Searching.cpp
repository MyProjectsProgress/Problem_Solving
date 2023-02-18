#include <bits/stdc++.h>

using namespace std;

int searchFunc(int arr[], int start, int endd, int number){

    int index = (start+endd)/2;
    cout<<"Start: "<<start<<" end: "<<endd<<" index: "<<index<<" arr[index]: "<<arr[0]<<endl;
    if(arr[index] == number) { return index; }
    else if (arr[index]/2 > number) searchFunc(arr,start,index,number);
    else if (arr[index]/2 < number) searchFunc(arr,index,endd,number);
}

int main(){
    long long n,number ;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        arr[i] = x;
    }

    sort(arr,arr+n);

    cin>>number;

    cout<<searchFunc(arr ,0, n-1, number);

    return 0;
}
