#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    // Complete this function
    vector<int> output;
    stringstream ss(str);
    string st;
    int num;
    while (getline(ss, st, ','))
    {
        num = stoi(st);
        output.push_back(num);
    }
    return output;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}