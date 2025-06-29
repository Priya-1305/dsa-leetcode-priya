#include <bits/stdc++.h>
using namespace std;

void reverseArr(int l, int r, int arr[]) {
    if (l >= r) return;  // base condition
    swap(arr[l], arr[r]);
    reverseArr(l + 1, r - 1, arr);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArr(0, n - 1, arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
