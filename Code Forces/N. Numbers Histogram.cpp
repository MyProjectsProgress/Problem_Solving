#include <bits/stdc++.h>

using namespace std;

int main (){
    char character;
    int sizee;
    int input;

    cin>>character>>sizee;

    for(int i = 0; i<sizee; i++){
        cin>>input;
        for(int j = 0; j<input; j++) cout<<character;
        cout<<endl;
    }
    return 0;
}
