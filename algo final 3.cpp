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
const int mx = 20;

int g[mx][mx], spanning[mx][mx], n;

int prims()
{
    int cost[mx][mx], p, q;
    int u, v, min_dis, dis[mx], from[mx];
    int visited[mx], no_of_edges, min_cost;

    //create cost[][] matrix, spanning[][]//

    for (p = 0; p < n; p++)
    {
        for (q = 0; q < n; q++)
        {
            if (g[p][q] == 0)
            {
                cost[p][q] = inf;
            }
            else
            {
                cost[p][q] = g[p][q];
                spanning[p][q] = 0;
            }
        }
    }

    // initialize visited[] , dis[] and from[]
    dis[0] = 0;
    visited[0] = 1;
    for (p = 1; p < n; p++)
    {
        dis[p] = cost[0][p];
        from[p] = 0;
        visited[p] = 0;
    }
    min_cost = 0;        //cost of spanning tree
    no_of_edges = n - 1; // no of edges to be add

    while (no_of_edges > 0)
    {
        min_dis = inf;
        for (p = 1; p < n; p++)
        {
            if (visited[p] == 0 && dis[p] < min_dis)
            {
                v = p;
                min_dis = dis[p];
            }
        }
        u = from[v];

        spanning[u][v] = dis[v];
        spanning[v][u] = dis[v];
        no_of_edges--;
        visited[v] = 1;

        for (p = 1; p < n; p++)
        {
            if (visited[p] == 0 && cost[p][v] < dis[p])
            {
                dis[p] = cost[p][v];
                from[p] = v;
            }
        }
        min_cost += cost[u][v];
    }
    return min_cost;
}

int main()
{
    int i, j, total_cost;
    cin >> n;
    cout << "Enter the adj matrix :\n";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cin >> g[i][j];
    }
    total_cost = prims();
    cout << "\n Total cost of spanning tree = " << total_cost << "\n";
    return 0;
}