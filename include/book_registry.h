//
// Created by wysockir on 03.09.2024.
//

#ifndef BASIC_BOOK_REGISTRY_H
#define BASIC_BOOK_REGISTRY_H

#include <string>
#include "abstract_book.h"

class BookRegistry {
private:
    static int registeredBooks;
    static int registeredUnknownBooks;
    static int registeredPaperBooks;
    static int registeredEBooks;
    static int registeredAudioBooks;

    static void registerUnknownBook();
    static void registerPaperBook();
    static void registerEBook();
    static void registerAudioBook();

    static void unregisterUnknownBook();
    static void unregisterPaperBook();
    static void unregisterEBook();
    static void unregisterAudioBook();
public:
    static void registerBook(const AbstractBook & book);

    static void unregisterBook(const AbstractBook & book);

    static int getRegisteredBooks();
    static int getRegisteredUnknownBooks();
    static int getRegisteredPaperBooks();
    static int getRegisteredEBooks();
    static int getRegisteredAudioBooks();
    static string getReport();

private:
};

#endif //BASIC_BOOK_REGISTRY_H
