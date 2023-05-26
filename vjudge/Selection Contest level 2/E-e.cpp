#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int temp;
    temp = arr[0] - arr[6];
    cout << temp << endl;
    return 0;
}