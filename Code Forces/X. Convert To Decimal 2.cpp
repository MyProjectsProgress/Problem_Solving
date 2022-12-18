#include <bits/stdc++.h>

using namespace std;

string toBinary(int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int main (){
    int n,sum{0},num;
    cin>>n;
    int arr[n];

    for(int k=0; k<n; k++){
        cin>>num;
        arr[k]=num;
    }

    for(int k = 0; k<n; k++){

    string x = toBinary(arr[k]);
    vector<int> vec;

    for(int i=0; i<x.length(); i++){
        if(x[i] == '1') vec.push_back(1);
    }

    for(int i = 0; i<vec.size(); i++){
        sum+=pow(2,i);
    }

    cout<<sum;
    if(k<n-1) cout<<endl;
    sum=0;
    }

    return 0;
}

