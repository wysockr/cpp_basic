//
// Created by wysockir on 03.09.2024.
//

#ifndef BASIC_ABSTRACT_BOOK_H
#define BASIC_ABSTRACT_BOOK_H

#include "interfaces/ibook.h"

class AbstractBook: public IBook {
protected:
    void basicContents(const string &newTitle, const string &newAuthor);

    string title;
    string author;
    BookType type;
    BookFormat format;
public:
    AbstractBook(const string &title, const string &author);
    AbstractBook(const string &title, const string &author, BookType type);
    AbstractBook(const string &title, const string &author, BookType type, BookFormat format);

    [[nodiscard]] string getTitle() const override;
    [[nodiscard]] string getAuthor() const override;
    [[nodiscard]] BookType getType() const override;
    [[nodiscard]] BookFormat getFormat() const override;

    void setType(BookType newType);
    void setFormat(BookFormat newFormat);
};

#endif //BASIC_ABSTRACT_BOOK_H
