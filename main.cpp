#include <iostream>
#include "LinkedDouble.cpp"
#include "Book.h"
#include "string"

using namespace std;
int main() {
    LinkedDouble<Book>* ld = new LinkedDouble<Book>();

    ld->addNodeFirst(Book("4535", "cien años de soñedad", "gabo",5));
    ld->addNodeFirst(Book("3525", "Condorito", "gaba",7));
    ld->addNodeFirst(Book("8545", "cien años", "gabito",9));
    ld->addNodeFirst(Book("2547", "coronel", "carlos",6));
    ld->addNodeFirst(Book("1536", "Alquimista", "antonu",11));
    ld->addNodeLast(Book("5625", "JUego de tronos", "benjamin",18));

    ld->addNodeBeforeTo(ld->findNode("1536"), Book("2565","mil","daniel",555));
    ld->addNodeAfterTo(ld->findNode("3525"), Book("4798","festin de cuervos","george",999));


    cout<<"El tamaño de la lista es: "<<ld->getSize()<<endl;

    cout<<"El primer elemento es: "<<ld->getObject(0)<<endl;

    delete(ld);
    cout<<"---------------Lisya ordenada----------------"<<endl;
    LinkedDouble<Book>* sorted = new LinkedDouble<Book>();
    sorted->addNodeSorted(Book("45", "cien años de soñedad", "g",5));
    sorted->addNodeSorted(Book("25", "condorito", "gabo",100));
    sorted->addNodeSorted(Book("35", "cien", "vc",6));
    sorted->addNodeSorted(Book("18", "soñedad", "gfdg",25));

    string id = "45";
    if(sorted->findNode(id) != NULL){
        cout<<"existe"<<endl;
    } else{
        cout<<"No existe"<<endl;
    }

    /*for (Book book: sorted->getList(true)) {
        cout<<book<<"\n";
    }*/

    delete(sorted);
    /*for (Book book : ld->getList(false)) {
        cout<<book<<"\t";
    }*/
    return 0;
}
