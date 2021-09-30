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

#define inf 99999;

const int mx = 1e3 + 123;
int adj[mx][mx];

/// adjMat[i][j] means there is a edge between i and j node.

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> adj[i][j];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "Adjacent nodes of node " << i << " : ";
        for (int j = 1; j <= n; j++)
        {
            if (adj[i][j] >= 1)
                cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
