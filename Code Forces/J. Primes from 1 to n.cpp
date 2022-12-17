#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag = false;

    cout<<2<<" ";
    for(int i=2; i<=n; i++){
        for(int j=2; j<i; j++){
            if (i%j==0){
                flag = false;
                break;
            }
            else flag = true;
        }
        if (flag) cout<<i<<" ";
    }

    return 0;
}
