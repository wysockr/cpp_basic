//
// Created by wysockir on 03.09.2024.
//

#include <sstream>
#include "../include/e_book.h"

EBook::EBook(const string &title, const string &author, BookFormat format, const string &content)
        : AbstractBook(title, author, BookType::EBOOK, format), ContentE(content) {}

string EBook::getReport() const {
    std::ostringstream report;

    report << endl << endl;
    report << "===== Ebook"<< endl;
    report << "Author: " << author << endl;
    report << "Title: " << title << endl;
    report << "Content length: " << getBytes() << endl;
    report << "Format: " << getFormat() << endl;

    return report.str();
}
