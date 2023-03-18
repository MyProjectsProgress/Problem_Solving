#include <bits/stdc++.h>

using namespace std;

const int s = 500;

void swapping(int arr[s][s], int n, int x, int y)
{
    for(int j=0; j<n; j++)
    {
        int temp    = arr[x-1][j];
        arr[x-1][j] = arr[y-1][j];
        arr[y-1][j] = temp;
    }

    for(int j=0; j<n; j++)
    {
        int temp    = arr[j][x-1];
        arr[j][x-1] = arr[j][y-1];
        arr[j][y-1] = temp;
    }
}

int main(){

    int n,x,y;
    cin>>n;
    int arr[s][s];
    cin>>x>>y;

    for(int i=0; i<n; i++)
    {
       for(int j=0; j<n; j++)
       {
            int x; cin>>x; arr[i][j] = x;
       }
    }

    swapping(arr,n,x,y);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
