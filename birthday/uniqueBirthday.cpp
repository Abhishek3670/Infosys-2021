#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int count = 0;
    vector<int> t(k);
    for (int i = 1; i <= n; i++)
    {
        t.push_back(i);
        int temp = n;
        while (temp > 0)
        {
            if (temp % i == 0)
            {
                cout << i << " , " << temp << endl;
                t.push_back(temp);
                temp--;
                count++;
                t.pop_back();
            }
            else
                temp--;
        }
    }
    cout << count;
}