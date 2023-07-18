/* Enter your macros here */
#define foreach(v, i) for(int i = 0; i < v.size(); i++)
#define FUNCTION(func, op) void func(int &a, int b) { a = (a op b) ? a : b; }
#define toStr(S) #S
#define io(v) cin >> v
#define INF 10000000
#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif

FUNCTION(minimum, <)
FUNCTION(maximum, >)

//int start_up()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    return 0;
//}

int main()
{
//    int static r start_up();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    foreach(v, i)
    {
        io(v)[i];
    }
    int mn = INF;
    int mx = -INF;
    foreach(v, i)
    {
        minimum(mn, v[i]);
        maximum(mx, v[i]);
    }
    int ans = mx - mn;
    cout << toStr(Result =) << ' ' << ans;
    return 0;
}