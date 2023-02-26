#include <bits/stdc++.h>

using namespace std;
// [ 1 6 3 7 ]
int main(){
    int n,testCases,shift{0},limit{1},maxElement;
    cin>>testCases;
    vector<int> arrOfMax;

    while(testCases--){
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++){ int x; cin>>x; arr[i]=x; arrOfMax.push_back(x); }
        for(int i=0; i<n-1; i++)
        for(int j=0; j<n-1; j++){
            vector<int> subArr;
            for(int z=shift; z<=limit; z++){
                //if(limit >= n) break;
                subArr.push_back(arr[z]);
            }
            for(int i = 0; i<subArr.size(); i++){ cout<<subArr[i]<<" "; }
            cout<<endl;
            shift++;
            limit++;
            maxElement = subArr[0];
            for(int z=0; z<subArr.size(); z++){
                if(subArr[z]>maxElement) maxElement=subArr[z];
            }
            arrOfMax.push_back(maxElement);
            subArr.clear();
        }
        limit = 1;
        shift = 0;
        // for(int i = 0; i<n; i++){ cout<<arrOfMax[i]<<" "; }
        arrOfMax.clear();
        cout<<endl;
    }
    return 0;
}
