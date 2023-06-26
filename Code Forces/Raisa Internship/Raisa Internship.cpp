#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

string StringChallenge(string sen)
{

    vector <int> sizes;
    vector <int> s;
    vector <int> e;

    int counter = 0;
    int start = 0;
    int endd = 0;
    string result;

    //"fun&!! time"

    for(int i=0; i<sen.length(); i++)
    {
        if((sen[i] >= 'a' && sen[i] <= 'z') || (sen[i] >= '0' && sen[i] <= '9') )
        {
            counter++;
        }
        else
        {
            endd = i;
            sizes.push_back(counter);
            s.push_back(start);
            e.push_back(endd);
            if ((sen[i] >= 'a' && sen[i] <= 'z') || (sen[i] >= '0' && sen[i] <= '9') ) start = i+1;
            endd = i-1;
            counter = 0;
        }
    }

    auto maxElement = max_element(sizes.begin(), sizes.end());
    int maxSize = *maxElement;
    int index_of_maxSize;

    cout << counter<<endl;
    cout << sizes.size();

    for(int i=0; i<sizes.size(); i++)
    {
        cout<<"Size: "<<sizes[i]<<" | "<<endl;
        cout<<"stat: "<<s[i]<<" | "<<endl;
        cout<<"end: "<<e[i]<<" | "<<endl;
        if(maxSize == sizes[i]) index_of_maxSize = i;
    }


    for(int i = s[index_of_maxSize]; i <= e[index_of_maxSize]; i++)
    {
        result+=sen[i];
    }

  return result;

}

int main(void) {

  // keep this function call here
  cout << StringChallenge("fun&!! time");
  return 0;

}
