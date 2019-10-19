#include <iostream>
#include "../StackLibrary/Stack.cpp"
#include "../StackLibrary/Element.cpp"

int main() {
    Stack<int> stack;

    stack.push(30);
    stack.push(31);
    stack.push(32);
    stack.push(33);

    std::cout << "Size of stack is " << stack.get_size() << std::endl;

    return 0;
}