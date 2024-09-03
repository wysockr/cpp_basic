//
// Created by wysockir on 03.09.2024.
//

#ifndef BASIC_CONTENT_PAPER_H
#define BASIC_CONTENT_PAPER_H

#include <string>

using namespace std;

class ContentPaper {
private:
    string text;
    int pages;
public:
    ContentPaper(string t, int p) : text(move(t)), pages(p) {}

    [[nodiscard]] int getPages() const;

    [[nodiscard]] string getText() const;
};

#endif //BASIC_CONTENT_PAPER_H
