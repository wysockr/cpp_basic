#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;

void plusOneNo(int a);
void plusOneReferencja(int &a);
void plusOneWskaznik(int *a);


int main() {
    cout << "Hello, Changed World! " << endl;
    int a = 11;
    cout << "Przed zm   " << a << endl;
    plusOneNo(a);
    cout << "Zmiana NO  " << a << endl;
    plusOneReferencja(a);
    cout << "Zmiana REF " << a << endl;
    plusOneWskaznik(&a);
    cout << "Zmiana WSK " << a << endl;

    string s = "Helloł";
    cout << "s: " << s << endl;
    string *ps = &s;
    cout << "p: " << *ps << endl;

    s.append(" World! - s.append");
    cout << "s: " << s << endl;
    cout << "p: " << *ps << endl;

    *ps = "*ps Changed";
    cout << "s: " << s << endl;
    cout << "p: " << *ps << endl;


    int staticArray[3] = {1, 2, 3};
//    int *dynamicArray;
//    dynamicArray = new int[3];
//    dynamicArray[0] = 11;
//    dynamicArray[1] = 22;
//    dynamicArray[2] = 33;
    int *dynamicArray = new int[3] {110, 220, 330};

    vector<int> vectorArray = {111, 222, 333};
    array <int, 3> arrayArray = {1111, 2222, 3333};


    cout << "*dA" <<endl << *dynamicArray << endl;
    cout << *(dynamicArray + 1) << endl;
    cout << *(dynamicArray + 2) << endl <<endl;

    cout << "dA" <<endl << dynamicArray[0] << endl;
    cout << dynamicArray[1] << endl;
    cout << dynamicArray[2] << endl <<endl;

    cout << "sA" <<endl << staticArray[0] << endl;
    cout  << staticArray[1] << endl;
    cout  << staticArray[2] << endl <<endl;

    cout << "vA" <<endl << vectorArray[0] << endl;
    cout  << vectorArray[1] << endl;
    cout  << vectorArray[2] << endl <<endl;

    cout << "aA" <<endl << arrayArray[0] << endl;
    cout << arrayArray[1] << endl;
    cout << arrayArray[2] << endl;

    delete dynamicArray;

    return 0;
}


void plusOneNo(int a) {
    a++;
}

void plusOneReferencja(int &a) {
    a++;
}

void plusOneWskaznik(int *a) {
    (*a)++;
}
