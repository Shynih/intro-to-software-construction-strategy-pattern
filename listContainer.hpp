#ifndef __LISTCONTAINER_HPP__
#define __LISTCONTAINER_HPP__

#include "container.hpp"
#include "sort.hpp"
#include <list>
using namespace std;

class Container;
class Sort;

class ListContainer : public Container{
	protected:
		list<Base*> baseList;
		Sort* sort_function;
	public:
		ListContainer(): sort_function(NULL) {}
		ListContainer(Sort* temp): sort_function(NULL){
			sort_function = temp;
		} 
		void sort(){
			 sort_function->sort(this);
		}
		void set_sort_function(Sort* sort_function) {
			this -> sort_function = sort_function;
		}
		void add_element(Base* element){
			baseList.push_back(element);
		}
		void print(){
			list<Base*>::iterator it;
			for(it = baseList.begin(); it != baseList.end(); it++) {
				Base* a = *it;
				cout << a->stringify() << endl;
			}
		}
		void swap(int i,int j){
			list<Base*>::iterator it;
            Base* temp1;
			Base* temp2;
			int counter = 0;
            int counter2 = 0;
			for(it = baseList.begin(); it != baseList.end(); it++) {
				if(counter == i){
					temp1 = *it;
				}
				if(counter == j){
					temp2 = *it;
				}
				counter++;
				counter2++;
			}
			counter = 0;
			counter2 = 0;
			for(it = baseList.begin(); it != baseList.end(); it++) {
				if(counter == i)
				{
					*it = temp2;
				}
				if(counter == j)
				{
					*it = temp1;
				}
				counter++;
				counter2++;
			}
		}
		Base* at(int i){
			list<Base*>::iterator it;
			int counter = 0;
			for(it = baseList.begin(); it != baseList.end(); it++) {
				if(counter == i){
					return *it;
				}
				counter++;
			}
			return *it;
		}
		int size(){
			return baseList.size();
		}
};

#endif
