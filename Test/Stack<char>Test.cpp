//
// Created by vladead on 18.10.2019.
//

#include <gtest/gtest.h>
#include "../StackLibrary/Stack.cpp"
#include "../StackLibrary/Element.cpp"

class StackCharTest : public ::testing::Test {

protected:
    virtual void SetUp() {
        exampleStack.push('p');
        exampleStack.push('r');
        exampleStack.push('e');
        exampleStack.push('s');
        exampleStack.push('s');

        exampleStack.push('F');
    }

    Stack<char> exampleStack;
};

TEST_F(StackCharTest, push_test) {
    exampleStack.push('t');
    ASSERT_EQ('t', exampleStack.peek());
    exampleStack.pop();
    ASSERT_EQ('F', exampleStack.peek());
}

TEST_F(StackCharTest, pop_test) {
    ASSERT_EQ('F', exampleStack.pop());
    ASSERT_EQ('s', exampleStack.peek());
}

TEST_F(StackCharTest, peek_test) {
    ASSERT_EQ('F', exampleStack.peek());
    ASSERT_NO_THROW(exampleStack.peek());
}

TEST_F(StackCharTest, get_size_test) {
    ASSERT_EQ(6, exampleStack.get_size());
}
