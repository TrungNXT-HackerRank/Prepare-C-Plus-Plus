#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define N 1000000

using namespace std;
// int n;
// int arr[N];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int arr[n];

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    // for (int i=0; i<n/2; i++) {
    //     int tmp = arr[i];
    //     arr[i] = arr[n-i-1];
    //     arr[n-i-1] = tmp;
    // }

    for (int i = n-1; i >=0; i--)
        cout << arr[i] << " ";

    return 0;
}
