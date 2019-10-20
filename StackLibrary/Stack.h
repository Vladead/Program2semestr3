//
// Created by vladead on 17.10.2019.
//

#ifndef PROGRAM2_STACK_H
#define PROGRAM2_STACK_H

#include <cstddef>
#include "Element.h"

template <typename N>
class Stack {
private:
    Element<N> *top;
public:
    Stack();

    ~Stack();

    N push(N value);             // Add element to stack

    N pop();                     // Delete element from stack. Return value from deleted element

    N peek() ;                   // Return value from top of stack

    size_t get_size() noexcept;  // Return count of elements in stack

    void clear() noexcept ;      // Delete all elements in stack
};


#endif //PROGRAM2_STACK_H
