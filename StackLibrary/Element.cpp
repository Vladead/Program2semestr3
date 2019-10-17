//
// Created by vladead on 17.10.2019.
//

#include "Element.h"

template <typename T>
Element<T>::Element() : value(), next(nullptr) {

}

template<typename T>
Element<T>::~Element() = default;