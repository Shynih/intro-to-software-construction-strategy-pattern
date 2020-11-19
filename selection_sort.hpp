#ifndef __SELECTIONSORT_HPP__
#define __SELECTIONSORT_HPP__

#include "container.hpp"
#include "sort.hpp"


class Container;
class Sort;

class SelectionSort : public Sort {
    public:
        // Constructors 
        SelectionSort() : Sort(){};

        // Pure Virtual Functions /
        virtual void sort(Container* container) {
          for (int i = 0; i < container -> size() - 1; i++) {
            int min = i;
            for (int j = i + 1; j < container -> size(); j++) {
                if (container -> at(j) -> evaluate() < container -> at(min) -> evaluate()) {
                    min = j;
                }
            }
            container -> swap(i, min);
          }
        }
};

#endif
