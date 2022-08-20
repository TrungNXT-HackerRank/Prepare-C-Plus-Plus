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
    
    int x, a, b;
    cin >> x >> a >> b;
    vec.erase(vec.begin()+x-1);
    vec.erase(vec.begin()+a-1,vec.begin()+b-1);

    cout << vec.size() << endl;
    for (int i=0; i<vec.size(); i++) {
        cout << vec[i] << " ";
    }
    return 0;
}
