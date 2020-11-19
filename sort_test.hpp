#ifndef __SORT_TEST_HPP__
#define __SORT_TEST_HPP__

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
#include "sort.hpp"

TEST(VectorContainerTestSet, SwapTest) {
    // Setup the elements under test
    Base* seven = new Op(7);
    Base* eight = new Op(8);
    VectorContainer* test_container = new VectorContainer();

    // Exercise some functionality of hte test elements
    test_container->add_element(seven);
    test_container->add_element(eight);

    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);

    test_container -> swap(0, 1);

    EXPECT_EQ(test_container->at(0)->evaluate(), 8);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

TEST(ListContainerTestSet, SwapTest) {
    // Setup the elements under test
    Base* seven = new Op(7);
    Base* eight = new Op(8);
    ListContainer* test_container = new ListContainer();

    // Exercise some functionality of hte test elements
    test_container->add_element(seven);
    test_container->add_element(eight);

    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);

    test_container -> swap(0, 1);

    EXPECT_EQ(test_container->at(0)->evaluate(), 8);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

TEST(SortTestSetVector, SelectionSortTest) {
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Base* three = new Op(3);
    Base* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Base* ten = new Op(10);
    Base* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

    container->set_sort_function(new SelectionSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}

TEST(SortTestSetVector, BubbleSortTest) {
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Base* three = new Op(3);
    Base* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Base* ten = new Op(10);
    Base* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

    container->set_sort_function(new BubbleSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}

TEST(SortTestSetList, SelectionSortTest) {
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Base* three = new Op(3);
    Base* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Base* ten = new Op(10);
    Base* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    ListContainer* container = new ListContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

    container->set_sort_function(new SelectionSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}

TEST(SortTestSetList, BubbleSortTest) {
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Base* three = new Op(3);
    Base* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Base* ten = new Op(10);
    Base* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    ListContainer* container = new ListContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

    container->set_sort_function(new BubbleSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}

#endif
