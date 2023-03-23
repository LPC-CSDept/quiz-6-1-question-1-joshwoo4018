#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************
void getinput(int &, int &);
void getinput(float &, float &);
void swapTwoValues(int &, int &);
void swapTwoValues(float &, float &);

void getinput(int &n1, int &n2) {
    cout << "Enter 2 values: " << endl;
    cin >> n1 >> n2;
} void getinput (float &f1, float &f2) {
    cout << "Enter 2 values: " << endl;
    cin >> f1 >> f2;
} void swapTwoValues(int &n1, int &n2) {
    int tap;
    tap = n1;
    n1 = n2;
    n2 = tap;
} void swapTwoValues(float &f1, float &f2) {
    float tap;
    tap = f1;
    f1 = f2;
    f2 = tap;
}