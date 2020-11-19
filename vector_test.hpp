#ifndef _VECTORTEST_HPP__
#define _VECTORTEST_HPP__

#include "gtest/gtest.h"

#include "selection_sort.hpp"
#include "bubble_sort.hpp"
#include "vectorContainer.hpp"
#include "listContainer.hpp"
#include "mult.hpp"
#include "op.hpp"
#include "div.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "rand.hpp"
#include "base.hpp"
#include "container.hpp"

TEST(VectorTest, AddTest){
	Base* one = new Op(1);
	VectorContainer* test = new VectorContainer();
	test->add_element(one);
	ASSERT_EQ(test->size(), 1);
	EXPECT_EQ(test->at(0)->evaluate(), 1);
}




