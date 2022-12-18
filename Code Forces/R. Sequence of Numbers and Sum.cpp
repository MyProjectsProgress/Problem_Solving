#include <bits/stdc++.h>

using namespace std;

int main (){
    int x,y,sum{0},i{0};
    bool flag = true;
    vector<int> minarr;
    vector<int> maxarr;

    while(flag == true){
        cin>>x>>y;
        if (x<=0 || y<=0) flag = false;
        else{
        minarr.push_back(min(x,y));
        maxarr.push_back(max(x,y));
        }
    }

    for(int i = 0; i<minarr.size(); i++){
        for(int j = minarr[i]; j<=maxarr[i]; j++){
        sum += j;
        cout<<j<<" ";
        }
        cout<<"sum ="<<sum;
        if(i<minarr.size()-1) cout<<endl;
        sum = 0;
    }

    return 0;
}
