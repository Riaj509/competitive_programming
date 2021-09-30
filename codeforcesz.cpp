//....................................In the name of Allah...............................//

//.................................Bismillahir Rahmanir Rahim...................................//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<ll, ll> pii;
typedef pair<double, double> pdd;
typedef vector<pii> vii;
typedef vector<pair<ll, ll>> vli;
typedef double dl;
typedef map<ll, ll> mp;
typedef unsigned long long ull;
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

bool compare(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}

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
void faltu(T a[], ll n)
{
    for (ll i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

const ll mx = 1e5 + 123;

/////////////////////////////////////Main part//////////////////////////

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m, p = 0, q = 0, r = -1, sm = 0, z = 0, k = 1, a, b, c;
        cin >> n >> m;
        string s;
        cin >> s;
        p = count(all(s), '0');
        q = count(all(s), '1');
        z = count(all(s), '?');
        p = abs(p - n);
        q = abs(q - m);
        b = s.size();
        int c = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == '0' && s[n - 1 - i] == '1')
        {
            cout << "-1\n";
            return;
        }
        else if (s[i] == '1' && s[n - 1 - i] == '0')
        {
            cout << "-1\n";
            return;
        }
        else if (s[i] == '?' && s[n - 1 - i] == '?')
        {
            c++;
        }
        else if (s[i] == '?')
        {
            if (s[n - 1 - i] == '0')
            {
                a--;
                s[i] = '0';
            }
            else
            {
                b--;
                s[i] = '1';
            }
        }
        else if (s[n - 1 - i] == '?')
        {
            if (s[i] == '0')
            {
                a--;
                s[n - 1 - i] = '0';
            }
            else
            {
                b--;
                s[n - 1 - i] = '1';
            }
        }
    }
    if (a < 0 || b < 0)
    {
        cout << "-1\n";
        return;
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == '?' && s[n - 1 - i] == '?')
        {
            if (a < 2 && b < 2)
            {
                cout << "-1\n";
                return;
            }
            else if (a >= 2)
            {
                a -= 2;
                s[i] = '0';
                s[n - 1 - i] = '0';
            }
            else
            {
                b -= 2;
                s[i] = '1';
                s[n - 1 - i] = '1';
            }
        }
    }
    if (n % 2 && s[n / 2] == '?')
    {
        if (a)
        {
            s[n / 2] = '0';
        }
        else
        {
            s[n / 2] = '1';
        }
    }
    cout << s << '\n';

        sz1
    }
    return 0;
}
