#include <bits/stdc++.h>

using namespace std;

int main (){
    int input,j;
    cin>>input;
    for(int i=input; i>0; i--){
    for(j=0; j<i; j++){
        cout<<"*";
    }
    if (j != 1) cout<<endl;
    }
}
