//
// Created by Binmex on 17/11/2021.
//

#ifndef LINKEDDOUBLE_LINKEDDOUBLE_H
#define LINKEDDOUBLE_LINKEDDOUBLE_H

#include "NodeDouble.h"
#include <vector>
#include "string"

template<class T>
class LinkedDouble {
public:
    LinkedDouble();

    bool isEmpty();

    void addNodeFirst(T);

    void addNodeLast(T);

    void addNodeSorted(T);

    void addNodeBeforeTo(NodeDouble<T> *, T);

    void addNodeAfterTo(NodeDouble<T> *, T);

    int getSize();

    NodeDouble<T>* findNode(std::string);

    T* getObject(int);

    std::vector<T> getList(bool);

    virtual ~LinkedDouble();

private:
    NodeDouble<T> *head;
    NodeDouble<T> *last;
};

#endif //LINKEDDOUBLE_LINKEDDOUBLE_H
