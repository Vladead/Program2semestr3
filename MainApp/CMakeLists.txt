cmake_minimum_required(VERSION 3.15)

project(MainApp)

set(SOURCE  main.cpp ../StackLibrary/Stack.cpp ../StackLibrary/Stack.h
        ../StackLibrary/Element.cpp ../StackLibrary/Element.h main.cpp)

add_executable(MainApp ${SOURCE})

include_directories(../StackLibrary)
target_link_libraries(MainApp StackLibrary)