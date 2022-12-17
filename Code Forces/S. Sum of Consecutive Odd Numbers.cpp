#include <bits/stdc++.h>

using namespace std;

int main (){
    int n,small,big,sum{0},i,j,counter{0};
    cin>>n;
    vector<int> low;
    vector<int> high;

    for(int i = 0; i<n; i++){
        cin>>small>>big;
        low.push_back(min(small,big));
        high.push_back(max(small,big));
    }

    for(i = 0; i<n; i++){
        for(j = low[i]; j< high[i]; j++){
            if(j%2==1) sum+=j;
        }
        if(low[i]%2==1) sum-=low[i];
        cout<<sum;
        sum =0;
        if(i != n-1) cout<<endl;
    }

    return 0;
}

