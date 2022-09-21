#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    char a;
    cin>>x>>a>>y;
    if(a == '>'){
        if(x>y)cout<<"Right";
        else cout<<"Wrong";
    }
    else if(a == '<'){
        if(x<y)cout<<"Right";
        else cout<<"Wrong";
    }
    else {
        if(x==y)cout<<"Right";
        else cout<<"Wrong";
    }
    return 0;
}


