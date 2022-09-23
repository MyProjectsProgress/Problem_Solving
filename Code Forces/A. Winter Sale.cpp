#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    float discount, price;
    cin>>discount>>price;
    cout<< (price*100)/(100-discount);
    return 0;
}
