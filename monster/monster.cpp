#include <iostream>
#include <map>
using namespace std;
int game(map<int, int> &m, int e)
{
    map<int, int>::iterator itr;
    int count = 0;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        if (itr->first <= e)
        {
            e += itr->second;
            count++;
        }
        else
        {
            continue;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int e;
    cin >> e;
    int ans;
    map<int, int> mapp;

    int power[n];
    int bonus[n];
    for (int i = 0; i < n; i++)
        cin >> power[i];

    for (int i = 0; i < n; i++)
        cin >> bonus[i];

    for (int i = 0; i < n; i++)
        mapp[power[i]] = bonus[i];

    ans = game(mapp, e);
    cout << ans;
}
