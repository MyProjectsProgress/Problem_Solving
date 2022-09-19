#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cin >> c;
    if (int(c) > 64 & int(c) < 97){
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    if (int(c) > 47 & int(c) < 65){
        cout<<"IS DIGIT";
    }
    if (int(c) > 96 & int(c) < 123){
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    return 0;
}
