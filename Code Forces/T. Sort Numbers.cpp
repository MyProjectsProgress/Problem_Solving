#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3],arr2[3],x,temp;
    for(int i=0; i<3; i++){
        cin>>x;
        arr[i] = x;
        arr2[i] = x;
    }
    for(int i=0; i<3; i++){
    for(int k=0; k<2; k++){
        if (arr[k+1] < arr[k]){
            temp = arr[k];
            arr[k] = arr[k+1];
            arr[k+1] = temp;
        }
    }
    }
    for(int i=0; i<3; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    for(int i=0; i<3; i++){
        cout<<arr2[i]<<endl;
    }
    return 0;
}
