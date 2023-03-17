#include <bits/stdc++.h>

using namespace std;

void print(int n, char x)
{
    for(int i=1; i<=n; i++) cout<<x<<" ";
}


int main(){

    int t,n;
    char x;
    cin>>t;

    while(t--)
    {
        cin>>n>>x;
        print(n,x);
        cout<<endl;
    }
    return 0;
}
