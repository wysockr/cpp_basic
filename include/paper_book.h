//
// Created by wysockir on 03.09.2024.
//

#ifndef BASIC_PAPER_BOOK_H
#define BASIC_PAPER_BOOK_H

#include "abstract_book.h"
#include "content_paper.h"

class PaperBook: public AbstractBook, public ContentPaper {
public:
    PaperBook(const string &title, const string &author, BookFormat format, const string &content, int pages);

    [[nodiscard]] string getReport() const override;
};

#endif //BASIC_PAPER_BOOK_H
