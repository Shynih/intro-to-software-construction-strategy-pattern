#ifndef _LISTTEST_HPP__
#define _LISTTEST_HPP__

#include "gtest/gtest.h"

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

TEST(ListTest, AddTest){
	Base* one = new Op(1);
	ListContainer* test = new ListContainer();
	test->add_element(one);
	ASSERT_EQ(test->size(), 1);
	EXPECT_EQ(test->at(0)->evaluate(), 1);
}

TEST(ListTest, AddTestMultiple){
	Base* one = new Op(1);
	Base* two = new Op(2);
	Base* three = new Op(3);
	ListContainer* test = new ListContainer();
	test->add_element(one);
	test->add_element(two);
	test->add_element(three);
	ASSERT_EQ(test->size(), 3);
	EXPECT_EQ(test->at(0)->evaluate(), 1);
	EXPECT_EQ(test->at(1)->evaluate(), 2);
	EXPECT_EQ(test->at(2)->evaluate(), 3);
}

TEST(ListTest, PrintTest){
	Base* one = new Op(1);
	Base* two = new Op(2);
	Add* testadd = new Add(one, two);
	ListContainer* test = new ListContainer();
	test->add_element(testadd);

	ASSERT_EQ(test->size(), 1);
	EXPECT_EQ(test->at(0) -> stringify(), "1.0 + 2.0");
}

TEST(ListTest, SwapTest){
	Base* one = new Op(1);
	Base* two = new Op(2);
	ListContainer* test = new ListContainer();
	test->add_element(one);
	test->add_element(two);

	test->swap(0,1);
	ASSERT_EQ(test->size(), 2);
	EXPECT_EQ(test->at(0)->evaluate(), 2);
	EXPECT_EQ(test->at(1)->evaluate(), 1);
}

TEST(ListTest, AtTest){
	Base* one = new Op(1);
	ListContainer* test = new ListContainer();
	test->add_element(one);

	ASSERT_EQ(test->size(), 1);
	EXPECT_EQ(test->at(0)->evaluate(), 1);
}

TEST(ListTest, SizeTest){
	Base* one = new Op(1);
	Base* two = new Op(2);
	Base* three = new Op(3);
	ListContainer* test = new ListContainer();
	test->add_element(one);
	test->add_element(two);
	test->add_element(three);

	ASSERT_EQ(test->size(), 3);
}

#endif