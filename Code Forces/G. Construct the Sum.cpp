#include <bits/stdc++.h>

using namespace std;

/*
4
5 3
7 10
6 4
2 10
*/

int main(){
    int t,n,c{0};
    long long sum{0},s;
    int res[100000];

    cin>>t;

    while(t--)
    {
        cin>>n>>s;

        if (n*(n+1)/2 < s) cout<<-1;
        else{
            for(int i=n; i>=1; i--){ // 5  4 3  2 1
                if(sum+i <= s){
                    res[c] = i;
                    c++;
                }
            }
        }

        for(int i=0; i<=c; i++) cout<<res[i]<<" ";
        cout<<endl;
        c = 0;
        sum = 0;
    }

    return 0;
}

