#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Rectangle
{
protected:
    int width;
    int height;

public:
    Rectangle()
    {
        width = 1;
        height = 1;
    }

    void display()
    {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle
{
public:
    void read_input()
    {
        cin >> width >> height;
    }
    void display()
    {
        cout << width * height;
    }
};

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    RectangleArea RA;
    RA.read_input();
    RA.Rectangle::display();
    RA.display();
    return 0;
}
