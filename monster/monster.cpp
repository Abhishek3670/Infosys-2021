#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int e;
    cin >> e;
    int ans = 0;
    map<int, int> mapp;
    map<int, int>::iterator itr;
    int power[n];
    int bonus[n];
    for (int i = 0; i < n; i++)
        cin >> power[i];

    for (int i = 0; i < n; i++)
        cin >> bonus[i];

    for (int i = 0; i < n; i++)
        mapp[power[i]] = bonus[i];

    for (itr = mapp.begin(); itr != mapp.end(); itr++)
    {
        if (itr->first <= e)
        {
            e += itr->second;
            ans++;
        }
        else
        {
            continue;
        }
    }

    cout << ans;
}
