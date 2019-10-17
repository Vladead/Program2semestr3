cmake_minimum_required(VERSION 3.15)

project(StackLibrary)

set(SOURCES Stack.cpp Element.cpp)
set(HEADERS Stack.h Element.h)

add_library(StackLibrary STATIC ${SOURCES} ${HEADERS})