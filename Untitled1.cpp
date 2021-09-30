//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<pii> vii;
typedef vector<pair<ll, int>> vli;
typedef double dl;
typedef map<ll, ll> mp;
typedef unsigned long long int ull;

#define pb push_back
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

int main()
{
    long long int cnt=0,f=,l=,i=0;
    string s;
    getline(cin,s,'*');
    vector<string> sk;
    f=s.find(' ');
    while(i<s.size()) {
        f=s.find(' ');
        l=s.find(' ',f+1);
        sk.pb(s.substr(l-f-1,l));
        f=l;
        i++;
    }
    for(auto u : sk) cout<<u<<" ";
}
