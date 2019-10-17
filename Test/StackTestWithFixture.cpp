//
// Created by vladead on 17.10.2019.
//

#include <gtest/gtest.h>
#include "Stack.h"

class StackFixture : public ::testing::Test {
public:
    virtual ~StackFixture() {

    }

protected:
    void SetUp() override {

    }

    Stack exampleStack;
};

TEST_F(StackFixture, TestName) {
    ASSERT_EQ(0,0);
}
