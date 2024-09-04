//
// Created by wysockir on 03.09.2024.
//

#ifndef BASIC_E_BOOK_H
#define BASIC_E_BOOK_H

#include "abstract_book.h"
#include "content_e.h"

class EBook: public AbstractBook, public ContentE {
public:
    EBook(const string &title, const string &author, BookFormat format, const string &content);

    [[nodiscard]] string getReport() const override;
};

#endif //BASIC_E_BOOK_H
