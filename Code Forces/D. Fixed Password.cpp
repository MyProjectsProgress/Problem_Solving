#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int pass;
    bool flag = true;
    while(flag){
        cin>>pass;
        if(pass == 1999) {
            cout<<"Correct";
            return 0;
        }
        else cout<<"Wrong"<<endl;
    }
    return 0;
}
