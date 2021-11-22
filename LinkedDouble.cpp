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
void LinkedDouble<T>::addNodeLast(T info) {
    NodeDouble<T>* nodeNew = new NodeDouble<T>(info);
    if (isEmpty()){
        head = last = nodeNew;
    } else{
        last->next = nodeNew;
        nodeNew->previus = last;
        last = nodeNew;
    }

}

template<class T>
void LinkedDouble<T>::addNodeSorted(T info) {
    NodeDouble<T>* nodeNew = new NodeDouble<T>(info);
    if(isEmpty()){
        head = last = nodeNew;
    }else if (info.getId().compare(head->info.getId()) < 0){
        addNodeFirst(info);
    } else if (info.getId().compare(last->info.getId()) > 0){
        addNodeLast(info);
    } else{
        NodeDouble<T>* act = head;
        NodeDouble<T>* ant = NULL;
        while (info.getId().compare(act->info.getId())>0){
            ant = act;
            act = act->next;
        }
        nodeNew->next=act;
        nodeNew->previus=ant;
    }

}

template<class T>
void LinkedDouble<T>::addNodeBeforeTo(NodeDouble<T> *before, T info) {
    NodeDouble<T>* nodeNew = new NodeDouble<T>(info);
    if(before == head){
        addNodeFirst(info);
    } else{
        nodeNew->next=before;
        nodeNew->previus= before->previus;
        before->previus->next = nodeNew;
        before->previus = nodeNew;
    }

}

template<class T>
void LinkedDouble<T>::addNodeAfterTo(NodeDouble<T> *after, T info) {
    NodeDouble<T>* nodeNew = new NodeDouble<T>(info);
    if(after == last){
        addNodeLast(info);
    } else{
        nodeNew->next = after->next;
        nodeNew->previus = after;
        after->next = nodeNew;
        after->next->previus = nodeNew;
    }
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
    //NodeDouble<T>* aux = new NodeDouble<T>();
    NodeDouble<T>* aux = head;
    while (aux != NULL){
        cont++;
        aux = aux->next;
    }
    return cont;
}

template<class T>
T *LinkedDouble<T>::getObject(int index) {
    NodeDouble<T>* aux = head;
    int cont = 0;
    while (cont < index) {
        aux = aux->next;
        cont++;
    }
    return &aux->info;
}

template<class T>
NodeDouble<T> *LinkedDouble<T>::findNode(std::string id) {
    NodeDouble<T>* aux = head;
    while (aux != NULL && aux->info.getId().compare(id) != 0){
        aux = aux->next;
    }
    return aux;
}

template<class T>
LinkedDouble<T>::~LinkedDouble() {
    NodeDouble<T>* aux = head;
    while (head != NULL){
        aux = head;
        head = head->next;
        delete(aux);
    }
}


