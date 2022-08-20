#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

void printKMax(int *arr, int N, int K) 
{   
    deque<int> dq;
    for(int i=1; i<=N; i++) {
        while (!dq.empty() && arr[dq.back()] <= arr[i])
            dq.pop_back();
        while (!dq.empty() && dq.front() < i-K+1)
            dq.pop_front();

        dq.push_back(i);

        if(i>=K)
            cout << arr[dq.front()] << " ";        
    }
    cout << endl;
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        int arr[N+1];
        for (int i = 1; i<= N; i++) {
            cin >> arr[i];
        }
        printKMax(arr, N, K);
    }
    return 0;
}