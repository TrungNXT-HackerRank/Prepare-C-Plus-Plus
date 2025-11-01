//
// Created by trungnxt on 30/10/2025.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix
{
public:
    Matrix() = default;

    vector<vector<int>> a;

    auto operator+(const Matrix& b) const -> Matrix
    {
        Matrix result;
        size_t numRows = a.size();
        size_t numCols = a[0].size();



        for (size_t i=0; i<numRows; i++)
        {
            vector<int> x;
            for (size_t j=0; j<numCols; j++)
            {
                int sum = a[i][j] + b.a[i][j];
                x.push_back(sum);
            }
            result.a.push_back(x);
        }
        return result;
    }
};

int main () {
    int cases,k;
    cin >> cases;
    for(k=0;k<cases;k++) {
        Matrix x;
        Matrix y;
        Matrix result;
        int n,m,i,j;
        cin >> n >> m;
        for(i=0;i<n;i++) {
            vector<int> b;
            int num;
            for(j=0;j<m;j++) {
                cin >> num;
                b.push_back(num);
            }
            x.a.push_back(b);
        }
        for(i=0;i<n;i++) {
            vector<int> b;
            int num;
            for(j=0;j<m;j++) {
                cin >> num;
                b.push_back(num);
            }
            y.a.push_back(b);
        }
        result = x+y;
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                cout << result.a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
