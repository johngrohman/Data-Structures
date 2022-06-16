#ifndef BAG_H
#define BAG_H

#include <iostream>
using namespace std;

template <typename T>
class Bag
{
	public:
		virtual bool insert(const T & myItem) = 0;
		virtual bool remove(const T &myItem) = 0;
		virtual int size() const = 0;
}

#endif
