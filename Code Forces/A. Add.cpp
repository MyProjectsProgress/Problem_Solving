#include <bits/stdc++.h>

using namespace std;

long long sum(int a, int b);

int main(){

    int a,b;
    cin>>a>>b;

    cout<<sum(a,b);

    return 0;
}

long long sum(int a, int b)
{
    return a+b;
}
