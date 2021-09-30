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
const int mx = 1e5 + 123;

vii adj[mx];

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "Adjacent nodes of node " << i << " : \n";
        for (auto u : adj[i])
        {
            cout << "Node : " << u.first << " "
                 << "Weight : " << u.second << endl;
        }
        cout << endl;
    }

    return 0;
}
