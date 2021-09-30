//....................................In the name of Allah...............................//

//.................................Bismillahir Rahmanir Rahim...................................//
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
#define sz1 cout << endl;
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define infll 0x7f7f7f7f7f7f7f7f
#define power_booster()           \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(a)               \
    cout.unsetf(ios::floatfield); \
    cout.precision(a);            \
    cout.setf(ios::fixed, ios::floatfield);

//////////////////////////////Debug part////////////////////////////////////

template <typename F, typename S>
ostream &operator<<(ostream &os, const pair<F, S> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "{";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "}";
}

template <typename T>
ostream &operator<<(ostream &os, const set<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename T>
ostream &operator<<(ostream &os, const multiset<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename F, typename S>
ostream &operator<<(ostream &os, const map<F, S> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << it->first << " = " << it->second;
    }
    return os << "]";
}

#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)

void faltu()
{
    cerr << endl;
}

template <typename T>
void faltu(T a[], int n)
{
    for (int i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

/////////////////////////////////////Main part//////////////////////////
bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return a.second < b.second;
}

//bitset<mx> is_prime;
const ll mx = 1e5 + 123;
ll dp[110][mx];
ll a, b, w[mx], c[mx], m;
ll solve(ll i, ll j)
{
    if (i >= a)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    double x = 0.0, y = 0.0;
    if (c[i] + j <= b)
        x = (w[i] / 2.0) + solve(i + 1, c[i] + j);
    y = solve(i + 1, j);
    return dp[i][j] = max((ll)ceil(x), (ll)ceil(y));
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        memset(dp, -1, sizeof(dp));
        memset(w, -1, sizeof(w));
        memset(c, -1, sizeof(c));

        cin >> a >> m >> b;
        for (int j = 0; j < a; j++)
            cin >> w[j] >> c[j];
        cout << (ll)ceil(solve(0, 0));
        sz1
    }
    return 0;
}