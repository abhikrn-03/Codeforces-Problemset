#include <iostream>
#include <vector>
#include <algorithm>

using ll = long long;
using namespace std;

int main()
{
    ll n = 0, m = 0, k = 0, i = 0, a = 0, input = 0;
    cin >> n >> m >> k;
    vector<ll> c, p, h;
    vector<vector<ll>> s(m);
    for (i = 0; i < n; i++)
    {
        cin >> input;
        p.push_back(input);
    }
    for (i = 0; i < n; i++)
    {
        cin >> input;
        s[input - 1].push_back(p[i]);
    }
    for (i = 0; i < k; i++)
    {
        cin >> input;
        c.push_back(input);
    }
    for (i = 0; i < m; i++)
    {
        sort(s[i].begin(), s[i].end());
        h.push_back(s[i].back());
    }
    for (i = 0; i < c.size(); i++)
    {
        if (find(h.begin(), h.end(), p[c[i]-1]) == h.end())
            a++;
    }
    cout << a;
    return 0;
}
