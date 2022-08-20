#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

// #define N 100001
// #define Q 100001

using namespace std;

vector<vector <int>> vec;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;
  
    for (int i=0; i<n; i++) {
        int k;
        cin >> k;
        vector<int> v;
        for (int j=0; j<k; j++) {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        vec.push_back(v);
    }

    for (int i = 0; i<q; i++) {
        int c, v;
        cin >> c >> v;
        cout << vec[c][v];
        cout << endl; 
    }

    return 0;
}