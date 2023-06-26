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

    long long sum{0}, summation, t, threshold;

    cin>>t;

    while(t--)
    {
        cin>>threshold>>summation;
        if ( ((threshold * (threshold + 1)) / 2) < summation) cout<<-1<endl;
        else{
            vector<int> result;
            for(int i=threshold; i>=1; i--)
            {
                if(sum + i <= summation){
                    sum+=i;
                    result.push_back(i);
                }
                if(sum == summation) break;
            }
            for(int i=0; i<result.size(); i++) cout<<result[i]<<" ";
            cout<<endl;
        }
    }



    return 0;
}

