#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k=0, leftSum = 0, rightSum = 0, megzawy;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++)
    {
        cin>>megzawy;
        arr[i] = megzawy;
    }

    for(int i = 0; i<n; i++)
    {
        int pivot = i;

        for(int k = pivot + 1; k<n ;k++)
        {
            rightSum = rightSum + arr[k];
        }

        cout<<"Right Sum = "<<rightSum<<endl;

        if ((rightSum == 0) && (i == 0))
        {
            cout<<"leftmost pivot index";
            return 0;
        }

        else if (i>0)
            {
                for(int k = pivot - 1; k>0 ;k--)
                {
                    leftSum = leftSum + arr[k];
                }

                if (rightSum == leftSum)
                {
                    cout<<pivot;
                    return 0;
                }
            }
        rightSum = 0;
    }

    cout<<"-1";
    return 0;

}
