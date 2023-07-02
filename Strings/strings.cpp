#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Complete the program
    string a, b;
    cin >> a;
    cin >> b;
    printf("%ld %ld\n", a.size(), b.size());
    string c = a + b;
    cout << c << "\n";
    swap(a[0], b[0]);
    string d = a + " " + b;
    cout << d << "\n";
    return 0;
}