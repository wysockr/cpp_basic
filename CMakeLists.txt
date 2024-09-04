cmake_minimum_required(VERSION 3.29)
project(basic)

set(CMAKE_CXX_STANDARD 20)

add_executable(basic main.cpp
        modifier.cpp
        modifier.h
        randomstr.cpp
        randomstr.h
        include/interfaces/ibook.h
        include/enums/book_types.h
        include/enums/book_formats.h
        src/book_registry.cpp
        include/book_registry.h
        src/abstract_book.cpp
        include/abstract_book.h
        src/content_paper.cpp
        include/content_paper.h
        src/content_e.cpp
        include/content_e.h
        src/content_audio.cpp
        include/content_audio.h
        src/paper_book.cpp
        include/paper_book.h
        src/e_book.cpp
        include/e_book.h
        include/audio_book.h
        src/audio_book.cpp
)
