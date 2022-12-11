#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fact = 1;

int factorial(int n){
    if (n == 1) return 1;
    else return n * factorial(n-1);

}

int main ()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>x;
        arr[i] = x;
    }
    for(int i = 0; i<n; i++){
        cout<<factorial(arr[i])<<endl;
    }

    return 0;
}
