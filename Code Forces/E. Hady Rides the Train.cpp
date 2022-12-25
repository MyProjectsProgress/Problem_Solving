#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,column;
    cin>>n;
    long long row = n/4;

    if(row % 2 == 0) column = n%4;
    else             column = 3-(n%4);

    cout<< row << " " << column;

    return 0;
}
