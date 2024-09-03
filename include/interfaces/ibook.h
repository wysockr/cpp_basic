//
// Created by wysockir on 03.09.2024.
//


#ifndef BASIC_IBOOK_H
#define BASIC_IBOOK_H

#include <string>
#include <utility>
#include "../enums/book_types.h"
#include "../enums/book_formats.h"

using namespace std;

class IBook {
public:
    [[nodiscard]] virtual string getTitle() const = 0;
    [[nodiscard]] virtual string getAuthor() const = 0;
    [[nodiscard]] virtual BookType getType() const = 0;
    [[nodiscard]] virtual BookFormat getFormat() const = 0;

    [[nodiscard]] virtual string getReport() const = 0;

    virtual ~IBook() = default;
};

#endif //BASIC_IBOOK_H
