#ifndef __BUBBLE_SORT_HPP__
#define __BUBBLE_SORT_HPP__

#include "container.hpp"
#include "sort.hpp"

class Container;

class Bubble_Sort : public Sort {
    public:
        /* Constructors */
        Bubble_Sort();

        /* Pure Virtual Functions */
        virtual void sort(Container* container) {
            for (int i = 0; i < container -> size() - 1; i++) {
                for (int j = 0; j < container -> size() - 1; j++) {
                    if (container -> at(j) > container -> at(j+1)) {
                        container -> swap(j, j+1);
                    }
                }
            }
        }
};

#endif 
