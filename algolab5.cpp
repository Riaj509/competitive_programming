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

ll data[100];

void swap(ll *a, ll *b)
{
    ll t = *a;
    *a = *b;
    *b = t;
}
ll partition(ll array[], ll low, ll high)
{

    ll pivot = array[high];

    ll i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {

            i++;

            swap(&array[i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[high]);

    return (i + 1);
}

void quickSort(ll array[], ll low, ll high)
{
    if (low < high)
    {

        ll pi = partition(array, low, high);

        quickSort(array, low, pi - 1);

        quickSort(array, pi + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter the array size  : \n";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> data[i];
    cout << "array elements are : \n";
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";
    cout << "\n";

    quickSort(data, 0, n - 1);

    cout << "Sorted array in ascending order: \n";
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";
    cout << "\n";
}
