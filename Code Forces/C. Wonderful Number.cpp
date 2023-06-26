#include <bits/stdc++.h>

using namespace std;

unsigned long long to_binary(unsigned long long n)
{
    unsigned long long converted {0}, digit {1};
    int rem;

    while (n>0)
    {
      if (n%2) converted += digit;
      n /= 2;
      digit *= 10;
    }

    converted += n;

    return converted;
}

bool palindrome (unsigned long long x)
{
    string s = to_string(x);
    for(int i=0,j=s.size()-1; i<s.size()/2; i++,j--)
    {
        if (s[i] != s[j]) return 0;
    }
    return 1;
}

string is_wonderful(unsigned long long n)
{
    if ( n%2 == 1)
    {
        unsigned long long x;

        x = to_binary(n);

        if(palindrome(x)) return "YES";

        else return "NO";
    }

    else return "NO";
}

int main(){

    unsigned long long n;

    cin>>n;

    cout<<is_wonderful(n);

    return 0;
}
