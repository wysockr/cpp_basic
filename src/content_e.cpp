//
// Created by wysockir on 03.09.2024.
//

#include "../include/content_e.h"

string ContentE::getText() const {
    return text;
}

size_t ContentE::getBytes() const {
    return text.length();
}
