//
// Created by wysockir on 03.09.2024.
//

#include <sstream>
#include "../include/audio_book.h"

AudioBook::AudioBook(const string &title, const string &author, BookFormat format, const string &content)
        : AbstractBook(title, author, BookType::AUDIO, format), ContentAudio(content) {}

string AudioBook::getReport() const {
    std::ostringstream report;

    report << endl << endl;
    report << "===== Audio book"<< endl;
    report << "Author: " << author << endl;
    report << "Title: " << title << endl;
    report << "Content length: " << getBytes().length() << endl;

    return report.str();
}
