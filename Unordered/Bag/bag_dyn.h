#ifndef BAG_DYN_H
#define BAG_DYN_H

#include "bag.h"

template <typename T>
class DynamicBag: public Bag<T>
{
	private:
		T *data = nullptr;
		
		//how much of the "data" is being used
		int used;

		//the capacity of the "data" in the array
		int capacity;
	
	public:
		static const int DEFAULT_CAP = 30;

		// Parameterized constructor, which can also act as the default constructor
		DynamicBag(int initial_cap = DEFALUT_CAP);

		// Copy constructor needed since we're using dynamic memory in the class
		DynamicBag(const DynamicBag<T> & other_bag);

		/* Modification Member Functions */

		// Overloaded assignment operator needed since we're using dynamic memory in the class
		void operator=(const DynamicBag<T> & other_bag);
		
		~DynamicBag();

		bool insert(const T & entry);

		bool remove(const T & target);

		void resize(int new_cap);

		/* Constant Member Functions */	
		
		int size() const {return used;}
		
		// returns how many times a target appears in the bag
		int occurences(const T & target) const;

		void print_bag();
}

#include "bag_dyn.hpp"

#endif
