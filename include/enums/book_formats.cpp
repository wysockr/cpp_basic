//
// Created by wysockir on 04.09.2024.
//

#include "book_formats.h"

std::ostream &operator<<(std::ostream &os, BookFormat format) {
    return os << FormatStrings[static_cast<int>(format)];
}
