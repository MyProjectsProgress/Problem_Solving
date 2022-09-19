#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cin>>c;
    if (int(c) > 64 & int(c) < 97) cout<<char(int(c) + 32);
    else if (int(c) > 96 & int(c) < 123) cout<<char(int(c) - 32);
    return 0;
}
