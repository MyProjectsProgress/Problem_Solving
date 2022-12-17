#include <bits/stdc++.h>

using namespace std;

int main (){
    int input,j;
    cin>>input;
    for(int i=0; i<input; i++){
    for(j=0; j<=i; j++){
        cout<<"*";
    }
    if (j != input) cout<<endl;
    }
}
