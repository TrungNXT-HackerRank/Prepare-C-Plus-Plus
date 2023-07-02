#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;

int main()
{
    string s = "<f a1 = \"1\" a2 = \"2\" a3 = \"3\">";
    cout << s << endl;
    s.erase(remove(s.begin(), s.end(), '\"'), s.end());
    s.erase(remove(s.begin(), s.end(), '>'), s.end());
    cout << s;
    stringstream ss;
    ss.str(s);
    // ss << s;
    string t1, k1, v1;
    char ch;
    ss >> ch >> t1 >> k1 >> ch >> v1;
    while (ss)
    {
        ss >> k1 >> ch >> v1;
    }

    return 0;
}