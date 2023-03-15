#include <bits/stdc++.h>

using namespace std;

string is(int n);
unsigned long long binary(unsigned long long n);
bool palindrome (unsigned long long x);

int main(){

    unsigned long long n;
    cin>>n;

    cout<<is(n);

    return 0;
}

unsigned long long binary(unsigned long long n)
{
    unsigned long long x, converted {0}, digit {1};
    int rem;

    cin>>x;

    while (x>0)
    {
      if (x%2) converted += digit;
      x /= 2;
      digit *= 10;
    }

    converted += x;

    return converted;
}

bool palindrome (unsigned long long x)
{
    string s = (string) x;
    for(int i=0; i<s.size(); i++) cout<<s[i]<<" ";
    return 1;
}

string is(unsigned long long n)
{
    if ( n%2 == 1)
    {
        unsigned long long x;
        x = binary(n);

        if(palindrome(x)) return "YES";

        else return "NO";
    }

    else return "NO";
}
