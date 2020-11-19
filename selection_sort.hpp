#ifndef __SELECTION_SORT_HPP__
#define __SELECTION_SORT_HPP__

#include "container.hpp"
#include "sort.hpp"

class Container;

class Selection_Sort : public Sort {
    public:
        /* Constructors */
        Selection_Sort();

        /* Pure Virtual Functions */
        virtual void sort(Container* container) {
            for (int i = 0; i < container -> size() - 1; i++) {
                int min = i;
                for (int j = i + 1; j < container -> size(); j++) {
                    if (container -> at(j) < container -> at(min)) {
                        min = j;
                    }
                }
                container -> swap(i, min);
            }
        }
};

#endif 
