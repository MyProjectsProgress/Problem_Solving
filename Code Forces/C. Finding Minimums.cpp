#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, range, start{0}, x;
    long long mini{1000000000000};
    vector <int> minimums;

    cin>>n>>range;

    int lol = range;

    int arr[n];

    for(int i=0; i<n; i++){ cin>>x; arr[i] = x; }

    while(range <= n)
    {
        for(int i=start; i<range; i++)
        {
            if(arr[i] < mini) mini = arr[i];
        }
        minimums.push_back(mini);
        start = range;
        range = range + lol;
        mini = 1000000000000;
    }

    if (n%lol!=0)
    {
        for(int i=start; i<n; i++)
        {
            if(arr[i] < mini) mini = arr[i];
        }
        minimums.push_back(mini);
    }

    for(int i=0; i<minimums.size(); i++) cout<<minimums[i]<<" ";

    return 0;
}
