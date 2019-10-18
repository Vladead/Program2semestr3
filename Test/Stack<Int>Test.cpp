//
// Created by vladead on 17.10.2019.
//

#include <gtest/gtest.h>
#include "../StackLibrary/Stack.cpp"
#include "../StackLibrary/Element.cpp"

class StackIntTest : public ::testing::Test {
protected:
    void SetUp() override {
        exampleStack.push(0);
        exampleStack.push(1);
        exampleStack.push(2);
        exampleStack.push(3);
        exampleStack.push(4);
    }

    Stack<int> exampleStack;
};

TEST_F(StackIntTest, push_test) {
    exampleStack.push(5);
    ASSERT_EQ(5, exampleStack.peek());
    exampleStack.pop();
    ASSERT_EQ(4, exampleStack.peek());
}

TEST_F(StackIntTest, pop_test) {
    ASSERT_EQ(4, exampleStack.pop());
    ASSERT_EQ(3, exampleStack.peek());
}

TEST_F(StackIntTest, peek_test) {
    ASSERT_EQ(4, exampleStack.peek());
    ASSERT_NO_THROW(exampleStack.peek());
}

TEST_F(StackIntTest, get_size_test) {
    ASSERT_EQ(5, exampleStack.get_size());
}
