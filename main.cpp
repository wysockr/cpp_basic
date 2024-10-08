#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <memory>

#include "modifier.h"

#include "include/abstract_book.h"
#include "include/book_registry.h"
#include "include/audio_book.h"
#include "include/paper_book.h"
#include "include/e_book.h"

using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    cout << "Hello, NEW Changed World! " << endl;
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
    int *dynamicArray = new int[3]{110, 220, 330};
    cout << "POINTER dA" << endl << dynamicArray << endl << endl;

    vector<int> vectorArray = {111, 222, 333};
    array<int, 3> arrayArray = {1111, 2222, 3333};


    cout << "*dA" << endl << *dynamicArray << endl;
    cout << *(dynamicArray + 1) << endl;
    cout << *(dynamicArray + 2) << endl << endl;

    cout << "dA" << endl << dynamicArray[0] << endl;
    cout << dynamicArray[1] << endl;
    cout << dynamicArray[2] << endl << endl;

    cout << "sA" << endl << staticArray[0] << endl;
    cout << staticArray[1] << endl;
    cout << staticArray[2] << endl << endl;

    cout << "vA" << endl << vectorArray[0] << endl;
    cout << vectorArray[1] << endl;
    cout << vectorArray[2] << endl << endl;

    cout << "aA" << endl << arrayArray[0] << endl;
    cout << arrayArray[1] << endl;
    cout << arrayArray[2] << endl << endl;

    delete[] dynamicArray;
    cout << "POINTER dA" << endl << dynamicArray << endl << endl;

    cout << "Before" << endl;
    // int* p=0;
    // *p=100;
    cout << "After" << endl;

    int tablica[10];
    size_t rozmiar = sizeof(tablica);
    cout << endl << "Rozmiar tablicy: " << rozmiar << " bajtów" << endl;


    cout << endl << "=======================================" << endl;

    //books
    vector<unique_ptr<AbstractBook>> books;
    books.push_back(
            make_unique<PaperBook>(
                    "Wiedźmin",
                    "Andrzej Sapkowski",
                    BookFormat::HARD_COVER,
                    "Lorem ipsum",
                    100
            )
    );

    books.emplace_back(
            make_unique<AudioBook>(
                    "Felix, Net i Nika",
                    "Rafał Kosik",
                    BookFormat::MP3,
                    "Lorem ipsumLorem ipsumLorem ipsumLorem ipsum"
            )
    );
    books.emplace_back(
            make_unique<AudioBook>(
                    "Atlas Odrodzony",
                    "Ann Ryand",
                    BookFormat::MP3,
                    string(191830, '\0')
            )
    );

    books.emplace_back(
            make_unique<EBook>(
                    "Atlas Odrodzony",
                    "Ann Ryand",
                    BookFormat::MOBI,
                    string(3000, '\0')
            )
    );

    books.push_back(
            make_unique<PaperBook>(
                    "Wiedźmin II",
                    "Andrzej Sapkowski",
                    BookFormat::SOFT_COVER,
                    "Lorem ipsum II",
                    101
            )
    );

    cout << BookRegistry::getReport();

    for (const auto &book: books) {
        cout << book->getReport();
    }

    return 0;
}


