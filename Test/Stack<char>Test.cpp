//
// Created by vladead on 18.10.2019.
//

#include <gtest/gtest.h>
#include "../StackLibrary/Stack.cpp"
#include "../StackLibrary/Element.cpp"

class StackCharTest : public ::testing::Test {

protected:
    void SetUp() override {
        testingStack.push('p');
        testingStack.push('r');
        testingStack.push('e');
        testingStack.push('s');
        testingStack.push('s');

        testingStack.push('F');
    }

    Stack<char> testingStack;
};

TEST_F(StackCharTest, push_test) {
    testingStack.push('t');
    ASSERT_EQ('t', testingStack.peek());
    testingStack.pop();
    ASSERT_EQ('F', testingStack.peek());

    testingStack.clear();
    testingStack.push('r');
    ASSERT_EQ('r', testingStack.pop());
    SetUp();
}

TEST_F(StackCharTest, pop_test) {
    ASSERT_EQ('F', testingStack.pop());
    ASSERT_EQ('s', testingStack.peek());

    testingStack.clear();
    ASSERT_ANY_THROW(testingStack.pop());
    SetUp();
}

TEST_F(StackCharTest, peek_test) {
    ASSERT_EQ('F', testingStack.peek());

    testingStack.clear();
    ASSERT_ANY_THROW(testingStack.peek());
    SetUp();
}

TEST_F(StackCharTest, get_size_test) {
    ASSERT_EQ(6, testingStack.get_size());

    testingStack.clear();
    ASSERT_EQ(0, testingStack.get_size());
    SetUp();
}
