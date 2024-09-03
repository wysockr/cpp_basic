//
// Created by wysockir on 03.09.2024.
//

#ifndef BASIC_AUDIO_BOOK_H
#define BASIC_AUDIO_BOOK_H

#include "abstract_book.h"
#include "content_audio.h"

class AudioBook: public AbstractBook, public ContentAudio {
public:
    AudioBook(const string &title, const string &author, BookFormat format, const string &content);

    [[nodiscard]] string getReport() const override;
};

#endif //BASIC_AUDIO_BOOK_H
