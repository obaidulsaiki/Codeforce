#include <iostream>
using namespace std;

int main()
 {
    int n;
    cin >> n;
    int cnt = 0;
    int pnt = 0;
    int a[n];

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {

    if (a[i] % 4 == 2)
            {
                cnt++;
            }
    if (a[i] % 4 == 0)
            pnt++;

    }
    if (cnt > pnt)
       {
            cout << "NO" << endl;
       }
    else
        {
            cout << "YES" << endl;
        }
    return 0;
}
