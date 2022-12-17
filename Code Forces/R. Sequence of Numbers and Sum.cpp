#include <bits/stdc++.h>

using namespace std;

int main (){
    int x,y,sum{0},i{0};
    vector<int> minarr;
    vector<int> maxarr;

    while(true){
    cin>>x>>y;
    if (x<=0 || y<=0) break;
    minarr.push_back(min(x,y));
    maxarr.push_back(max(x,y));
    }

    for(int i = 0; i<sizeof(minarr); i++){
        for(int j = minarr[i]; j<maxarr[i]; j++){
        sum += i;
        cout<<i<<" ";
        }
        cout<<"sum = "<<sum<<endl;
        sum = 0;
    }

    return 0;
}

//for(int i = 0; i<sizeof(minarr); i++) cout<<"min= "<<minarr[i]<<"\t"<<"max= "<<maxarr[i]<<endl;
