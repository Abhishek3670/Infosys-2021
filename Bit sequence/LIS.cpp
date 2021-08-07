#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> LIS(int arr[], int n)
{
    vector<int> v;
    int list[n];

    list[0] = 1;
    for (int i = 1; i < n; i++)
    {
        list[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && list[i] < list[j] + 1)
                if (i == j + 1)
                    if (((arr[i] & arr[j]) * 2) < (arr[i] | arr[j]))
                    {
                        list[i] = list[j] + 1;
                        v.push_back(arr[j]);
                        v.push_back(arr[i]);
                    }
    }
    return v;
}

int main()
{
    int arr[] = {15, 6, 5, 12, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v = LIS(arr, n);
    vector<int>::iterator it;
    for (it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
}