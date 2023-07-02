#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios_base::sync_with_stdio(false);
    cin.tie(0); 

    int q;
    cin >> q;
    map<string, int> m;

    for (int i=0; i<q; i++) {
        int type;
        cin >> type;
        string x;
        int y;
        if (type == 1) {
            cin >> x >> y;
            auto it = m.find(x);
            if(it != m.end())
                it->second += y; 
            else 
                m.insert(make_pair(x, y));
        } else if (type == 2) {
            cin >> x;
            m.erase(x);
        } else if (type == 3) {
            cin >> x;
            auto it = m.find(x);
            if(it != m.end()) {
                cout << it->second << endl;
            } else 
                cout << "0" << endl;
        }
    }
      
    return 0;
}
