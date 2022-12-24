#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, sumLeft{0}, sumRight{0};
    cin>>n;

    while(n--){
        long long l,r;
        cin>>l>>r;
        long long ma, mi;
        ma = max(l,r);
        mi = min(l,r);
        sumLeft  = l*(l+1)/2;
        sumRight = r*(r+1)/2;
        cout<<max(sumRight,sumLeft)-min(sumRight,sumLeft)+min(l,r)<<endl;
    }

    return 0;
}
/*
int main(){
    long long n, sumMax{0}, sumMin{0};
    cin>>n;

    while(n--){
        long long l,r;
        cin>>l>>r;
        long long ma, mi;
        ma = max(l,r);
        mi = min(l,r);
        sumMax  = ma*(ma+1)/2;
        sumMin  = mi*(mi+1)/2;
        cout<<sumMax-sumMin+mi<<endl;
    }

    return 0;
}
*/
