#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m, counter{0},pointer{-1}, temp{-1};
    cin>>n>>m;
    int arrBig[n];
    int arrSmall[m];

    for(int i=0; i<n; i++) { int x; cin>>x; arrBig[i] = x; }
    for(int i=0; i<m; i++) { int x; cin>>x; arrSmall[i] = x; }

    for(int i=0; i<m; i++)
    for(int j=0; j<n; j++)
    {
        if(arrSmall[i] == arrBig[j])
        {
            counter++;
            arrBig[j] = -1;
            break;
        }
        else arrBig[j] = -1;
        //cout<<arrBig[j]<<endl;
    }

    if (counter == m) cout<<"YES";
    else cout<<"NO";




    return 0;
}
