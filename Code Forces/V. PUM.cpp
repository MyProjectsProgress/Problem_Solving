#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin>>n;
    int var1{-1}, var2{3};

    for(int i = 1; i<=n; i++){
    for(int j = var1+2; j<=var2; j++){
        cout<<j<<" ";
    }
    cout<<"PUM";
    if(i < n) cout<<endl;
    var1 = var2;
    var2+=4;
    }

    return 0;
}

