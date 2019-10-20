//
// Created by vladead on 17.10.2019.
//

#include <gtest/gtest.h>
#include "../StackLibrary/Stack.cpp"
#include "../StackLibrary/Element.cpp"

class StackIntTest : public ::testing::Test {
protected:
    void SetUp() override {
        testingStack.push(0);
        testingStack.push(1);
        testingStack.push(2);
        testingStack.push(3);
        testingStack.push(4);
    }

    Stack<int> testingStack;
};

TEST_F(StackIntTest, push_test) {
    testingStack.push(5);
    ASSERT_EQ(5, testingStack.peek());
    testingStack.pop();
    ASSERT_EQ(4, testingStack.peek());

    testingStack.clear();
    testingStack.push(-12);
    ASSERT_EQ(-12, testingStack.pop());
    SetUp();
}

TEST_F(StackIntTest, pop_test) {
    ASSERT_EQ(4, testingStack.pop());
    ASSERT_EQ(3, testingStack.peek());

    testingStack.clear();
    ASSERT_ANY_THROW(testingStack.pop());
    SetUp();
}

TEST_F(StackIntTest, peek_test) {
    ASSERT_EQ(4, testingStack.peek());

    testingStack.clear();
    ASSERT_ANY_THROW(testingStack.peek());
    SetUp();
}

TEST_F(StackIntTest, get_size_test) {
    ASSERT_EQ(5, testingStack.get_size());

    testingStack.clear();
    ASSERT_EQ(0, testingStack.get_size());
    SetUp();
}
