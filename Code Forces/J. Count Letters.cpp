#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;
    vector <int>  counter;
    vector <char> characters;


    /*char temp1;

    for(int i = 0; i<s.size(); i++)
    for(int j = 0; j<s.size()-1; j++)
    {
        if(s[j+1] < s[j])
        {
            temp1  = s[j];
            s[j]   = s[j+1];
            s[j+1] = temp1;
        }
    }*/

    sort(s.begin(),s.end());

    char x = s[0];
    counter.push_back(0);
    characters.push_back(x);
    int pointer {0};

    for(int i=0; i<s.size(); i++)
    {
        if (s[i] == x)
        {
            counter[pointer]++;
        } else
        {
            pointer++;
            counter.push_back(1);
            characters.push_back(s[i]);
            x = s[i];
        }
    }

    for(int j = 0; j<counter.size(); j++){ cout<<characters[j]<<" : "<<counter[j]<<endl; }

    return 0;
}
