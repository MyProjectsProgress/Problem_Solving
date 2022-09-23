#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char x;
    cin>>x;
    if (int(x)>=97 & int(x)<=121) cout<<char(int(x)+1);
    else cout<<'a';
    return 0;
}
