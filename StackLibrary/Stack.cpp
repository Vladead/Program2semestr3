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
    clear();
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
        top->value = value;
    }
    catch (const std::bad_alloc &) {
        std::cerr << "Something bad happened with memory allocation " << std::endl;
        exit(-1);
    }
}

template<typename N>
N Stack<N>::pop() {
    if (get_size() == 0) {
        throw std::runtime_error("There is nothing to delete");
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
    if (get_size() == 0) {
        throw std::runtime_error("There is nothing to show");
    }
    return top->value;
}

template<typename N>
size_t Stack<N>::get_size() noexcept {
    size_t sizeOfList = 1;

    if (top == nullptr) {
        sizeOfList = 0;
    } else {
        auto current = top;
        while (current->next != nullptr) {
            sizeOfList++;
            current = current->next;
        }
    }

    return sizeOfList;
}

template <typename N>
void Stack<N>::clear() noexcept {
    if (get_size() != 0) {
        Element<N> *temp;

        while (top) {
            temp = top->next;
            delete top;
            top = temp;
        }
    }
}