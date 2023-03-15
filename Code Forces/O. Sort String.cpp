#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int arr[26] = {0};
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        char ch;
        cin>>ch;
        arr[(int)ch - 97]++;
    }

    for (int i = 0; i <= 25; i++)
    {
        while(arr[i] > 0)
        {
            cout<<(char)(i+97);
            arr[i]--;
        }
    }

    return 0;
}
