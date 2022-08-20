#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    vector<int> vec;
    cin >> n;
    for (int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }

    int q;
    cin >> q;
    for (int i=0; i<q; i++) {
        int y;
        cin >> y;
        auto it = lower_bound(vec.begin(), vec.end(), y);
        int res = it-vec.begin();
        if (vec[res] == y) {
            cout << "Yes" << " " << res+1 << endl;
        } else {
            cout << "No" << " " << res+1 << endl;
        }
    }   
    return 0;
}
