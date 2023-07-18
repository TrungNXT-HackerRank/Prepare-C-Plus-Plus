#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

template <class T>
class AddElements
{

public:
    T element1;

public:
    AddElements (T arg1) {
        element1 = arg1;
    }

    T add(T element2) {
        return element1 + element2;
    }

    T concatenate(string element2) {
        return element1 + element2;
    }
};

int start_up()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int main()
{
    int static r = start_up();
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        string type;
        cin >> type;
        if (type == "float")
        {
            double element1, element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat(element1);
            cout << myfloat.add(element2) << endl;
        }
        else if (type == "int")
        {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint(element1);
            cout << myint.add(element2) << endl;
        }
        else if (type == "string")
        {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring(element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}
