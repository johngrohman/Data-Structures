#ifndef BAG_SIMPLE_H
#define BAG_SIMPLE_H

#include "bag.h"

template <typename T>
class SimpleBag: public Bag<T>
{
    private:
        int used;
        static const int CAPACITY = 10; // This is the max # of Items "data" can hold.
        T data[CAPACITY];

    public:
        //constructor
        SimpleBag(){used = 0;}

        //Modification member functions
        bool insert(const T &myItem);

        bool remove(const T &myItem);

        //constant member function.
        int size() const {return used;}
};

#include "bag_simple.hpp"

#endif
