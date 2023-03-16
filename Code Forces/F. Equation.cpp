#include <bits/stdc++.h>

using namespace std;

long long equation(int x, int n)
{
    long long result = 0;

    for (int i=2; i<=n; i+=2) result += pow(x,i);

    return result;
}

int main(){

    int x,n;

    cin>>x>>n;

    cout<<equation(x,n);

    return 0;
}
