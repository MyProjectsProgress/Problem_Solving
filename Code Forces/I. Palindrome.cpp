#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string input, status = "YES", output;
    int mainLength;

    cin>>input;

    mainLength = input.size();

    while( input.back() == '0' ) input.pop_back();
    for(int i = input.length()-1 ; i>=0; i--){
        output.push_back(input[i]);
    }

    if (mainLength == output.size()){
    for(int i = input.length()-1 ; i>=0; i--){
    if (input[i] != output[i]) {
        status = "NO";
        break;
        }
    }
    }
    else status = "NO";

    cout<<output<<endl<<status;
}
