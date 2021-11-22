//
// Created by Binmex on 17/11/2021.
//

#ifndef LINKEDDOUBLE_LINKEDDOUBLE_H
#define LINKEDDOUBLE_LINKEDDOUBLE_H

#include "NodeDouble.h"
#include <vector>

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

    std::vector<T> getList(bool);

    virtual ~LinkedDouble();

private:
    NodeDouble<T> *head;
    NodeDouble<T> *last;
};

#endif //LINKEDDOUBLE_LINKEDDOUBLE_H
