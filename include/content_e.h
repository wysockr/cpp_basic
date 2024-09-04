//
// Created by wysockir on 03.09.2024.
//

#ifndef BASIC_CONTENT_E_H
#define BASIC_CONTENT_E_H

#include <string>

using namespace std;

class ContentE {
private:
    string text;
public:
    ContentE(string text) : text(move(text)) {}

    [[nodiscard]] size_t getBytes() const;

    [[nodiscard]] string getText() const;
};

#endif //BASIC_CONTENT_E_H
