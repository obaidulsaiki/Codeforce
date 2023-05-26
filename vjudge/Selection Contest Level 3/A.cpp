#include <bits/stdc++.h>
using namespace std;
int main() {
    int k;
    cin >> k;
    int i = 1, cnt = 0, digitSum;
    while (cnt < k) {
        digitSum = 0;
        int temp = i;
        while (temp > 0) {
            digitSum += temp % 10;
            temp /= 10;
        }
        if (digitSum == 10) {
            cnt++;
        }
        if (cnt == k) {
            cout << i << endl;
            break;
        }
        i++;
    }
    return 0;
}
