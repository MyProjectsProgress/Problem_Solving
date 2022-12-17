#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}


int main(){
    int result {1} , n1 {1}, n2 {1};
    cin>>n1>>n2;
    result = gcd(n1,n2);
    cout<< result;
}
