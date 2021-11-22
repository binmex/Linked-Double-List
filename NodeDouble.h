//
// Created by Binmex on 17/11/2021.
//

#ifndef LINKEDDOUBLE_NODEDOUBLE_H
#define LINKEDDOUBLE_NODEDOUBLE_H
#include "cstdlib" //paar que no me bote error el Null en la linea 13


template<class T> class LinkedDouble; //no se olvide el class porque o si no me pide redefinir la clase
template <class T>
class NodeDouble {
    friend class LinkedDouble<T>;
public:
    NodeDouble(T info) : info(info) {
        next = previus = NULL;
    }

private:
    T info;
    NodeDouble<T>* next;
    NodeDouble<T>* previus;
};


#endif //LINKEDDOUBLE_NODEDOUBLE_H
