#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    vector<string> hrml;
    vector<string> query;
    string temp;

    cin >> n >> q;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, temp);
        hrml.push_back(temp);
    }

    for (int i = 0; i < q; i++)
    {
        getline(cin, temp);
        query.push_back(temp);
    }

    map<string, string> m;
    vector<string> tag;

    for (int i = 0; i < n; i++)
    {
        temp = hrml[i];
        temp.erase(remove(temp.begin(), temp.end(), '\"'), temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '>'), temp.end());
        // cout << temp << endl;
        if (temp.substr(0, 2) == "</")
        {
            tag.pop_back();
        }
        else
        {
            stringstream ss;
            ss.str("");
            ss << temp;
            string t1, p1, v1;
            char ch;
            ss >> ch >> t1 >> p1 >> ch >> v1;
            string temp1 = "";
            if (tag.size() > 0)
            {
                temp1 = *tag.rbegin();
                temp1 = temp1 + "." + t1;
            }
            else
                temp1 = t1;

            tag.push_back(temp1);
            m[*tag.rbegin() + "~" + p1] = v1;

            while (ss)
            {
                ss >> p1 >> ch >> v1;
                m[*tag.rbegin() + "~" + p1] = v1;
            }
        }
    }

    for (int i = 0; i < q; i++)
    {
        if (m.find(query[i]) == m.end())
            cout << "Not Found!\n";
        else
            cout << m[query[i]] << endl;
    }
    return 0;
}
