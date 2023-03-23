#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int arr[n];

        for(int i=0; i<n; i++){ int x; cin>>x; arr[i]=x; cout<<x<<" "; }

        int i=0, z=0, ma;

		while(true){

			if(z == n - 1){ break; }

			if(i == z){ ma = max(arr[i],arr[i+1]); }
            else { ma = max(ma,arr[i+1]);}

			cout<<ma<<" ";

			i++;

			if(i == n - 1){ z++; i=z; }
		}
		cout<<endl;
    }
    return 0;
}
