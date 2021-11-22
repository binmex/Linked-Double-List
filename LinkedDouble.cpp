//
// Created by Binmex on 17/11/2021.
//

#include "LinkedDouble.h"
#include <vector>

template<class T>
LinkedDouble<T>::LinkedDouble() {
    head = last = NULL;
}


template<class T>
bool LinkedDouble<T>::isEmpty() {
    return head == NULL && last == NULL;
}


template<class T>
void LinkedDouble<T>::addNodeFirst(T info) {
    NodeDouble<T>* nodeNew = new NodeDouble<T>(info);
    if (isEmpty()){
        head = last = nodeNew;
    } else{
        head->previus = nodeNew;
        nodeNew->next = head;
        head = nodeNew;
    }
}

template<class T>
void LinkedDouble<T>::addNodeLast(T) {

}

template<class T>
void LinkedDouble<T>::addNodeSorted(T) {

}

template<class T>
void LinkedDouble<T>::addNodeBeforeTo(NodeDouble<T> *, T) {

}

template<class T>
void LinkedDouble<T>::addNodeAfterTo(NodeDouble<T> *, T) {

}

template<class T>
std::vector<T> LinkedDouble<T>::getList(bool sw) {
    std::vector<T> out;
    NodeDouble<T>* aux = sw ? head : last;
    while (aux != NULL){
        out.push_back(aux->info);
        aux = sw ? aux->next : aux->previus;
    }
    return out;
}

template<class T>
int LinkedDouble<T>::getSize() {
    int cont = 0;
    NodeDouble<T>* aux = new NodeDouble<T>();
}

template<class T>
LinkedDouble<T>::~LinkedDouble() {

}


