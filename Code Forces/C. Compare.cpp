// trying functions here for the string functions problem
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int l,r;
    char temp;
    cin>>l,r;

    for (int i = 0; i < l-r+1; i++)
    for (int j = l; j < l-r; j++)
      if (s[j] > s[j + 1]){ temp = s[j]; s[j] = s[j + 1]; s[j + 1] = temp;}

    cout<<s;
    return 0;
}

/*
#include <bits/stdc++.h>

using namespace std;

int main(){

    string s1,s2;
    int minL;
    cin>>s1>>s2;

    minL = min(s1.length(), s2.length());

    for(int i=0; i<minL; i++) {
        if(s1[i] < s2[i]) { cout<<s1; return 0; }
        else if (s1[i] > s2[i]) { cout<<s2; return 0; }
    }
    if (s1.size() < s2.size()) cout<<s1;
    else cout<<s2;

    return 0;
}
*/
