#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int q;  
    cin >> q;
    set<int> s;

    for (int i=0; i<q; i++) {
        int y, x;
        cin >> y >> x;
        auto it = s.find(x);

        if (y == 1) {
            s.insert(x);
        } else if (y == 2) {
            s.erase(x);
        } else if (y == 3) {
            if (it != s.end())
                cout << "Yes" << endl;
            else 
                cout << "No" << endl;
        }
    }
    return 0;
}
