#include <iostream>

void plusOneNo(int a);
void plusOneReferencja(int &a);
void plusOneWskaznik(int *a);


int main() {
    std::cout << "Hello, Changed World! " << std::endl;
    int a = 5;
    std::cout << "Przed zm   " << a << std::endl;
    plusOneNo(a);
    std::cout << "Zmiana NO  " << a << std::endl;
    plusOneReferencja(a);
    std::cout << "Zmiana REF " << a << std::endl;
    plusOneWskaznik(&a);
    std::cout << "Zmiana WSK " << a << std::endl;

    std::string s = "Hello";
    std::cout << "s: " << s << std::endl;
    std::string *ps = &s;
    std::cout << "p: " << *ps << std::endl;

    s.append(" World! - s.append");
    std::cout << "s: " << s << std::endl;
    std::cout << "p: " << *ps << std::endl;

    *ps = "*ps Changed";
    std::cout << "s: " << s << std::endl;
    std::cout << "p: " << *ps << std::endl;

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
