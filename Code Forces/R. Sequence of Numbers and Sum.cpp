#include <bits/stdc++.h>

using namespace std;

int main (){
    int x,y,sum{0},i=0;
    int minarr[10000];
    int maxarr[10000];

    while(true){
    cin>>x>>y;
    if (x<=0 || y<=0) break;
    int maxi = max(x,y);
    int mini = min(x,y);
    minarr[i] = mini;
    maxarr[i] = maxi;
    i++;
    }

    for(int i = mini; i<=maxi; i++){
        sum += i;
        cout<<i<<" ";
    }
    cout<<"sum = "<<sum<<endl;
    sum = 0;

}
