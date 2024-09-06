//
// Created by wysockir on 03.09.2024.
//

#ifndef BASIC_BOOK_FORMATS_H
#define BASIC_BOOK_FORMATS_H

#include <array>
#include <iostream>
#include <string>

enum class BookFormat {
    UNKNOWN,
    SOFT_COVER,
    HARD_COVER,
    PDF,
    EPUB,
    MOBI,
    MP3,
    WAV
};

constexpr std::array<const char *, 8> FormatStrings = {
        "UNKNOWN",
        "SOFT_COVER",
        "HARD_COVER",
        "PDF",
        "EPUB",
        "MOBI",
        "MP3",
        "WAV"
};

std::ostream &operator<<(std::ostream &os, BookFormat format);


#endif //BASIC_BOOK_FORMATS_H
