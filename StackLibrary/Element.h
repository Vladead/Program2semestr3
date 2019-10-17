//
// Created by vladead on 17.10.2019.
//

#ifndef PROGRAM2_ELEMENT_H
#define PROGRAM2_ELEMENT_H


template <typename T>
class Element {
private:
    T value;
    Element *next;

public:
    Element();

    ~Element();

    template <typename N> friend class Stack;
};


#endif //PROGRAM2_ELEMENT_H
