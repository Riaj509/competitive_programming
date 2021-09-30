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
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

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

#define dbg(args...)        \
  do                        \
  {                         \
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

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T--)
  {
    ll n;
    cin >> n;
    cout << (ll)ceil(n / 2.0);
  }
}
