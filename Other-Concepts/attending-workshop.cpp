//
// Created by trungnxt on 07/11/2025.
//

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshop
{
    int start_time_;
    int duration_;
    int end_time_;
};

struct Available_Workshops
{
    int n;
    vector<Workshop> workshops;
    Available_Workshops() {};
};

Available_Workshops* initialize(int* start_time, int* duration, int n)
{
    auto aw =  new Available_Workshops();
    aw->n = n;
    for (int i=0; i < n; i++)
    {
        Workshop x;
        x.start_time_ = start_time[i];
        x.duration_ = duration[i];
        x.end_time_ = start_time[i] + duration[i];
        aw->workshops.push_back(x);
    }
    return aw;
}

bool operator< (Workshop const& a, Workshop const& b)
{
    return a.end_time_<b.end_time_;
}

int CalculateMaxWorkshops(Available_Workshops* ptr)
{
    int schedule = 0;
    int currentEndtime = 0;
    sort(ptr->workshops.begin(), ptr->workshops.end());
    // int currentEndtime = ptr->workshops[0].end_time_;
    for (Workshop w: ptr->workshops)
    {
        if (!(w.start_time_ < currentEndtime))
        {
            schedule++;
            currentEndtime = w.end_time_;
        }
    }
    return schedule;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
