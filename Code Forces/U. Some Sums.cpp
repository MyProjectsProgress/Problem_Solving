#include <bits/stdc++.h>
#include <string>
#include <sstream>

using namespace std;

int main (){
    int n, a, b, sum{0}, internal_sum{0};
    bool flag = true;
    cin>>n>>a>>b;

    for(int i=1; i<=n; i++){

        string x = to_string(i);

        for(int j=0; j<x.length(); j++){
            stringstream ss;
            int s;
            ss << x[j];
            ss >> s;
            internal_sum+= s;
        }

        if (internal_sum <= b && internal_sum >= a) sum+=i;
        internal_sum = 0;
    }

    cout<<sum;

    return 0;
}

