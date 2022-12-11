#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int array_size,input;
    cin>>array_size;
    int numbers[array_size];

    for(int i=0; i<array_size; i++){
        cin>>input;
        numbers[i] = input;
    }

    int even_c=0,odd_c=0,pos_c=0,neg_c=0;

    for(int i=0; i<array_size; i++){
        if (numbers[i]%2 == 0) even_c++;
        else odd_c++;

        if (numbers[i]>0) pos_c++;
        else if (numbers[i]<0) neg_c++;
    }

    cout<<"Even: "<<even_c<<endl;
    cout<<"Odd: "<<odd_c<<endl;
    cout<<"Positive: "<<pos_c<<endl;
    cout<<"Negative: "<<neg_c;

    return 0;
}
