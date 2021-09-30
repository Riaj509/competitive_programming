#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vi;
typedef map<ll, ll> mi;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;
typedef set<ll> st;
typedef set<char> sc;

const ll INF = LLONG_MAX;

#define pb push_back
#define pf push_front
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
#define pi acos(-1)
const int mx = 1e3 + 123;
vector<pair<ll, ll>> adj[mx];
ll dis[mx];
bool vis[mx];

ll n, m;

void dijkstra(ll x)
{
    for (ll i = 0; i < n; i++)
        dis[i] = INF;
    priority_queue<pair<ll, ll>> q;
    dis[x] = 0;
    q.push({x, 0});

    while (!q.empty())
    {
        ll v = q.top().F;
        q.pop();
        if (vis[v] == 0)
        {
            vis[v] = 1;
            for (auto u : adj[v])
            {
                ll a = u.F;
                ll b = u.S;
                if (dis[v] + b < dis[a])
                {
                    dis[a] = dis[v] + b;
                    q.push({a, -dis[a]});
                }
            }
        }
    }
    for (int i = 1; i <= m; i++)
        cout << x << " ==> " << i << " = " << dis[i] << "\n";
}

int main()
{
    ll src, c, v, u;
    cin >> m >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> u >> v >> c;
        adj[u].pb({v, c});
        adj[v].pb({u, c});
    }
    cin >> src;
    dijkstra(src);

    return 0;
}
