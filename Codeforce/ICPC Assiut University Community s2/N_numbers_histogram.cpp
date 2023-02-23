#include <iostream>
using namespace std;

int main()
{
    char symbol;
    cin >> symbol;
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        for (int i = 0; i < a; i++)
        {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}
