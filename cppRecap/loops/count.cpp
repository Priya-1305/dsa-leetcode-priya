#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;

    if (n == 0) {
        ans = 1;
    } else {
        while (n > 0) {
            n = n / 10;  // Remove the last digit
            ans++;
        }
    }

    cout << "Number of digits: " << ans;
    return 0;
}
