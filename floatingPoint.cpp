#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double x = 1.2300000;
    cout<< x << endl;//1.23
    double y = 123.5589321498;
    cout << y << endl;//123.559
    // default precision value is 6 for double;
    double e = 123e2;
    cout << e << endl;
    // let's use setprecision(n) function;
    cout << setprecision(10) << y << endl;//123.5589321
    cout << showpos;
    cout << y << endl;//+123.5589321
    cout << noshowpos;
    cout << y << endl;//123.5589321

    return 0;
}