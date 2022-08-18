#ifndef SLLIST_H
#define SLLIST_H

#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class Node
{
    public:
        T m_element;

        Node<T> *m_next;

        // Default Constructor
        Node(Node<T> *in_next):m_next(in_next){}

        // Default Constructor
        Node(const T &x, Node<T> *in_next):m_element(x), m_next(in_next){}

};

template <typename T>
class SLList
{
    private:
        Node<T> *m_head;
        Node<T> *m_tail;

    public:
        SLList();

        ~SLList();

        SLList<T> & operator=(const MyList<T> &source);
};

#include "SLList.hpp"

#endif