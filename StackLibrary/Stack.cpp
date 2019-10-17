//
// Created by vladead on 17.10.2019.
//

#include <iostream>
#include <stdexcept>
#include "Stack.h"

template<typename N>
Stack<N>::Stack() : top(nullptr) {

}

template<typename N>
Stack<N>::~Stack() {
    if (this->get_size() != 0) {
        Element<N> *temp;

        while (top) {
            temp = top->next;
            delete top;
            top = temp;
        }
    }
}

template<typename N>
N Stack<N>::push(N value) {
    try {
        auto temp = new Element<N>;

        if (top != nullptr) {
            temp->next = top;
            top = temp;
        } else {
            top = temp;
        }
        this->head->value = value;
    }
    catch (const std::bad_alloc &) {
        std::cerr << "Something bad happened with memory allocation " << std::endl;
        exit(-1);
    }
}

template<typename N>
N Stack<N>::pop() {
    if (this->isEmpty()) {
        try {
            throw std::runtime_error("There is nothing to delete");
        }
        catch (const std::runtime_error &) {
            std::cerr << "There is nothing to delete" << std::endl;
            exit(-1);
        }
    }

    auto current = top->next;
    N tempValue;
    tempValue = top->value;
    delete top;
    top = current;
    return tempValue;
}

template<typename N>
N Stack<N>::peek() {
    return top->value;
}

template<typename N>
size_t Stack<N>::get_size() {
    size_t sizeOfList = 1;

    auto current = top;
    if (this->isEmpty()) {
        sizeOfList = 0;
    } else {
        current = top;
        while (top->next != nullptr) {
            sizeOfList++;
            current = current->next;
        }
    }

    return sizeOfList;
}