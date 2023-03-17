#include <bits/stdc++.h>

using namespace std;
// [ 1 6 3 7 ]

int getMax(int subArray[], int subSize)
{
    int maxi = subArray[0];
    for(int i=0; i<subSize; i++) if (subArray[i] > maxi) maxi = subArray[i];
    return maxi;
}

int main(){

    int n,testCases,start{0};
    cin>>testCases;

    while(testCases--)
    {
        vector<int> arrOfMax;
        cin>>n;
        int arr[n];

        for(int i=0; i<n; i++){ int x; cin>>x; arr[i]=x; arrOfMax.push_back(x); }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                int subSize = i+1;
                int subArray[subSize];
                for(int k=0; k<subSize; i++) subArray[k] = arr[k];
                int maxi;
                maxi = getMax(subArray, subSize);
                arrOfMax.push_back(maxi);
            }
        }
        for(int i=0; i<arrOfMax.size(); i++) cout<<arrOfMax[i]<<" ";
        cout<<endl;
    }
    return 0;
}
