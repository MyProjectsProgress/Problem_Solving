#include <bits/stdc++.h>

using namespace std;

int main (){
    int start,endd,counter{0};
    cin>>start>>endd;

    for(int i = 0; i<=start; i++)
    for(int a = 0; a<=start; a++)
    if( endd-i-a >= 0 && endd-i-a <= start ) counter++;
    cout<<counter;
}
    /*
    Time Limit Exceeded
    for(int a = 0; a<=k; a++)
    for(int b = 0; b<=k; b++)
    for(int c = 0; c<=k; c++)
    {
        if(a+b+c==s) counter++;
    }
    cout<<counter;
    */


