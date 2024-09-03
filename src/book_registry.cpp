//
// Created by wysockir on 03.09.2024.
//

#include "../include/book_registry.h"
#include <string>
#include <sstream>

using namespace std;

int BookRegistry::registeredBooks = 0;
int BookRegistry::registeredUnknownBooks = 0;
int BookRegistry::registeredPaperBooks = 0;
int BookRegistry::registeredEBooks = 0;
int BookRegistry::registeredAudioBooks = 0;

void BookRegistry::registerBook(const AbstractBook &book) {
    registeredBooks++;
    switch (book.getType()) {
        case BookType::PAPER:
            registerPaperBook();
            break;
        case BookType::EBOOK:
            registerEBook();
            break;
        case BookType::AUDIO:
            registerAudioBook();
            break;
        default:
            registerUnknownBook();
    }
}

void BookRegistry::registerUnknownBook() {
    registeredUnknownBooks++;
}

void BookRegistry::registerPaperBook() {
    registeredPaperBooks++;
}

void BookRegistry::registerEBook() {
    registeredEBooks++;
}

void BookRegistry::registerAudioBook() {
    registeredAudioBooks++;
}

void BookRegistry::unregisterBook(const AbstractBook &book) {
    registeredBooks--;
    switch (book.getType()) {
        case BookType::PAPER:
            unregisterPaperBook();
            break;
        case BookType::EBOOK:
            unregisterEBook();
            break;
        case BookType::AUDIO:
            unregisterAudioBook();
            break;
        default:
            unregisterUnknownBook();
    }
}

void BookRegistry::unregisterUnknownBook() {
    registeredUnknownBooks--;
}

void BookRegistry::unregisterPaperBook() {
    registeredPaperBooks--;
}

void BookRegistry::unregisterEBook() {
    registeredEBooks--;
}

void BookRegistry::unregisterAudioBook() {
    registeredAudioBooks--;
}

int BookRegistry::getRegisteredBooks() {
    return registeredBooks;
}

int BookRegistry::getRegisteredUnknownBooks() {
    return registeredUnknownBooks;
}

int BookRegistry::getRegisteredPaperBooks() {
    return registeredPaperBooks;
}

int BookRegistry::getRegisteredEBooks() {
    return registeredEBooks;
}

int BookRegistry::getRegisteredAudioBooks() {
    return registeredAudioBooks;
}

string BookRegistry::getReport() {
    std::ostringstream report;

    report << endl << endl;
    report << "paper books: " << registeredPaperBooks << endl;
    report << "e-books: " << registeredEBooks << endl;
    report << "audio books: " << registeredAudioBooks << endl;
    report << "unknown books: " << registeredUnknownBooks << endl;
    report << "----------------------------" << endl;
    report << "total books: " << registeredBooks << endl;

    return report.str();
}

