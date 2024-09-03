cmake_minimum_required(VERSION 3.29)
project(basic)

set(CMAKE_CXX_STANDARD 20)

add_executable(basic main.cpp
        modifier.cpp
        modifier.h
        randomstr.cpp
        randomstr.h
        src/vehicle.cpp
        include/vehicle.h
        src/car.cpp
        include/car.h
        src/vehicle_registry.cpp
        include/vehicle_registry.h
        src/electric_car.cpp
        include/electric_car.h
        include/interfaces/ibook.h
        include/enums/book_types.h
        include/enums/book_formats.h
        src/book_registry.cpp
        include/book_registry.h
        src/abstract_book.cpp
        include/abstract_book.h
        include/content_paper.h
        src/content_paper.cpp
        include/content_paper.h
        src/paper_book.cpp
        include/paper_book.h)
