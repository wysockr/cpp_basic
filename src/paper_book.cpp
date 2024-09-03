//
// Created by wysockir on 03.09.2024.
//

#include <sstream>
#include "../include/paper_book.h"

PaperBook::PaperBook(const string &title, const string &author, BookFormat format, const string &content, int pages)
        : AbstractBook(title, author, BookType::PAPER, format), ContentPaper(content, pages) {}

string PaperBook::getReport() const {
    std::ostringstream report;

    report << endl << endl;
    report << "===== Paper book"<< endl;
    report << "Author: " << author << endl;
    report << "Title: " << title << endl;
    report << "Content length: " << getText().length() << endl;
    report << "Pages: " << getPages() << endl;

    return report.str();
}
