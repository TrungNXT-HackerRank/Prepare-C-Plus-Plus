#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Person{
protected:
    string name;
    int age;
public:
    Person() {};
    virtual void getdata() {};
    virtual void putdata() {};
};

class Professor: public Person{
private:
    static int cur_id;
    int publications;
public:
    Professor():Person() {};

    void getdata() {
        cin >> this->name >> this->age >> this->publications;
    }

    void putdata() {
        cur_id += 1;
        cout << this->name << " " <<  this->age << " " << this->publications << " " << this->cur_id << endl;
    }
};

class Student: public Person{
private:
    static int cur_id;
    int marks[6];
public:
    Student():Person() {};

    void getdata() {
        cin >> this->name >> this->age;
        for (int i =0; i<6; i++) {
            cin >> this->marks[i];
        }
    }

    int sumMarks() {
        int sum = 0;

        for (int i : this->marks) {
            sum += i;
        }

        return sum;
    }

    void putdata() {
        int sum = this->sumMarks();
        this->cur_id += 1;
        cout << this->name << " " << this->age << " " << sum << " " << this->cur_id << endl;
    }
};

int Professor::cur_id = 0;
int Student::cur_id = 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}