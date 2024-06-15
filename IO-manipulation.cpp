#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x, y;
    x = 23;
    y = 90;
    cout << oct;
    cout <<"oct: "<< x << " " << y << endl;
    cout << hex;
    cout <<"hex: "<< x << " " << y << endl;
    cout << showpos;
    cout <<"showpos: "<< x << " " << y << endl;
    cout << noshowpos;
    cout <<"noshowpos: "<< x << " " << y << endl;
    cout << showbase;
    cout <<"showbase: "<< x << " " << y << endl;
    cout << noshowbase;
    cout <<"noshowbase: "<< x << " " << y << endl;
    cout << uppercase;
    cout <<"uppercase: "<< x << " " << y << endl;
    cout << nouppercase;
    cout <<"nouppercase: "<< x << " " << y << endl;
    cout << dec;
    cout <<"dec: "<< x << " " << y << endl;
    int z = 6;
    cout << setw(5);//sets the width;
    //setfill("*"); fills with * if the width is less than 5;
    //only makes sense if setw() is used; 
    //"****6" will be returned;
    /*  A property "left" also exist in setw();
        will be like cout << left; then returns "6*****" 
    */;
    cout << z << endl;
    return 0;
}