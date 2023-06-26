#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, t;
    bool flag = true;

    cin>>t;

    while(t--)
    {
        cin>>n;

        if      ( n==1 )       { cout<<"NO"<<endl; flag = false; }
        else if ( n == 2 )     { flag = true; }
        else if ( n % 2 == 0 ) { cout<<"NO"<<endl; flag = false; }
        else
        {
            int s = sqrt(n);
            for (int i=2; i<=s; i++)
            {
                if (n%i == 0) { cout<<"NO"<<endl; flag = false; break; }
            }
        }
        if (flag) cout<<"YES"<<endl;
        flag = true;
    }

    return 0;
}
