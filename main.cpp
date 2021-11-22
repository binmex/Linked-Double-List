#include <iostream>
#include "LinkedDouble.cpp"

using namespace std;
#include "Book.h"
int main() {
    LinkedDouble<Book> *ld = new LinkedDouble<Book>();

    ld->addNodeFirst(Book("4535", "cien años de soñedad", "gabo",5));
    ld->addNodeFirst(Book("3525", "Condorito", "gaba",7));
    ld->addNodeFirst(Book("8545", "cien años", "gabito",9));
    ld->addNodeFirst(Book("2547", "coronel", "carlos",6));
    ld->addNodeFirst(Book("1536", "Alquimista", "antonu",11));
    /*ld->addNodeFirst('r');
    ld->addNodeFirst('i');
    ld->addNodeFirst('a');
    ld->addNodeFirst('j');*/

    for (Book c:ld->getList(false)) {
        cout<<c<<"\t";
    }
    return 0;
}
