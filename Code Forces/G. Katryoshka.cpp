#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long eye,mouth,body,res{0};
    long long counter {0};
    cin>>eye>>mouth>>body;

    if(eye == 0 || body == 0) cout<<0;

    else{
        if((mouth >= eye && mouth >= body) || (mouth >= body && mouth < eye) || (mouth < body && mouth >= eye)) { res = min(eye,body); cout<<res; }

        else if(mouth < body && mouth < eye)
        {
            res = mouth;
            eye -= mouth;
            body -= mouth;
            res += min(eye/2, body);
            cout<<res;
        }
    }

    return 0;
}
//------------------------------------------------------------------
/*
    bool flag1 = true, flag2 = true;
    long long eye,mouth,body;
    long long sum = 0;
    cin>>eye>>mouth>>body;
    // Time limit exceed code.
    if(eye == 0 || body == 0) {
        cout<<0;
        return 0;
    }
    else {
        while(flag1){
            if((mouth != 0) & (eye != 0) & (body != 0)){
                sum++;
                eye--;
                mouth--;
                body--;
            }
            else flag1 = false;
        }
        if((eye == 0) || (body == 0)) {
        cout<<sum;
        return 0;
        }
        else {
            while(flag2){
                if((eye <= 1) || (body <= 0)){
                    flag2 = false;
                }
                else{
                    sum++;
                    eye = eye - 2;
                    body--;
                }
            }
            cout<<sum;
            return 0;
        }
    }
}
*/
