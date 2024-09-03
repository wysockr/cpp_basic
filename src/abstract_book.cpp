//
// Created by wysockir on 03.09.2024.
//

#include "../include/abstract_book.h"
#include "../include/book_registry.h"

string AbstractBook::getTitle() const {
    return this->title;
}

string AbstractBook::getAuthor() const {
    return this->author;
}

BookType AbstractBook::getType() const {
    return this->type;
}

BookFormat AbstractBook::getFormat() const {
    return this->format;
}

void AbstractBook::basicContents(const string &newTitle, const string &newAuthor) {
    AbstractBook::title = newTitle;
    AbstractBook::author = newAuthor;
}

AbstractBook::AbstractBook(const string &title, const string &author) {
    basicContents(title, author);
    this->type = BookType::UNKNOWN;
    this->format = BookFormat::UNKNOWN;
    BookRegistry::registerBook(*this);
}


AbstractBook::AbstractBook(const string &title, const string &author, BookType type) {
    basicContents(title, author);
    this->type = type;
    this->format = BookFormat::UNKNOWN;
    BookRegistry::registerBook(*this);
}

AbstractBook::AbstractBook(const string &title, const string &author, BookType type, BookFormat format) {
    basicContents(title, author);
    this->type = type;
    this->format = format;
    BookRegistry::registerBook(*this);
}

void AbstractBook::setType(BookType newType) {
    BookRegistry::unregisterBook(*this);
    this->type = newType;
    BookRegistry::registerBook(*this);
}

void AbstractBook::setFormat(BookFormat newFormat) {
    this->format = newFormat;
}

