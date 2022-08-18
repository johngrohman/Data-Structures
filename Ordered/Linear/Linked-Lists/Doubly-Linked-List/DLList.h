#ifndef DLLIST_H
#define DLLIST_H

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
class MyList
{
    private:
        Node<T> *m_head;
        Node<T> *m_tail;

        int m_size;
    
    public:
        MyList();

        ~MyList();

        MyList<T> & operator=(const MyList<T> &source);

        MyList(const MyList<T> &source);

        T & front();

        T & back();

        void assign(int count, const T &value);

        void clear();

        void push_front(const T &x);

        void push_back(const T &x);

        void pop_front();

        void pop_back();

        void insert(int i, const T &x);

        void remove(T value);

        void erase(int i);

        void reverse();

        bool empty();

        int size();
};

#include "DLList.hpp"

#endif