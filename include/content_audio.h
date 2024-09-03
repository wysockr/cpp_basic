//
// Created by wysockir on 03.09.2024.
//

#ifndef BASIC_CONTENT_AUDIO_H
#define BASIC_CONTENT_AUDIO_H

#include <string>

using namespace std;

class ContentAudio {
private:
    string bytes;
public:
    ContentAudio(string t) : bytes(move(t)) {}

    [[nodiscard]] string getBytes() const;
};

#endif //BASIC_CONTENT_AUDIO_H
