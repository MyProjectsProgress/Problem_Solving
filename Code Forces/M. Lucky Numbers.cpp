#include <bits/stdc++.h>

using namespace std;

int main (){
    int start,endd;
    int counter {0};
    char flag {'b'};
    cin>>start>>endd;

    for(int i=start; i<= endd; i++){
        string x = to_string(i);
        for(int j = 0; j<x.length(); j++){
            if (x[j] == '4' || x[j] == '7') counter++;
            else break;
        }
        if (counter == x.length()) {cout<<i<<" "; flag = 'a';}
        counter = 0;
    }
    if (flag == 'b') cout<<-1;
    return 0;
}
