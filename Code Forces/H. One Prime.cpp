#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int input;
    cin>>input;
    if (input == 2){
        cout<<"YES";
        return 0;
    }else if (input % 2 == 0 ){
        cout<<"NO";
        return 0;
    }
    for(int i=2; i<input; i++){
        if(input%i==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}
