#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] == 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {

            cnt++;
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
