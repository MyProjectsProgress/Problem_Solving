#include <bits/stdc++.h>

using namespace std;

int main (){
    int n,flag{1},i,j,k;
    cin>>n;

    for(i = 1; i<=n; i++){

        for(j=n-i; j>0; j--)cout<<" ";

        for(k=1; k<=flag; k++)cout<<"*";

        if(i != n) cout<<endl;

        flag+=2;
    }

    return 0;
}

