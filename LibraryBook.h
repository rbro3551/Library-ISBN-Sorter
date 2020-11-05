#include <iostream>
#include <vector>
using namespace std;

class Libraryb {
public:
    Libraryb();

    Libraryb(string Title, string Author, string ISBN);

    string gettitle();

    string getauthor();

    string getisbn();

    bool getstatus();

    void checkinBook();

    void checkoutBook();

private:
    string title;
    string author;
    string isbn;
    bool ischeckedout;
};



















//
// Created by Riley Brookins on 3/18/20.
//

#ifndef LAB09LION_LIBRARYBOOK_H
#define LAB09LION_LIBRARYBOOK_H

#endif //LAB09LION_LIBRARYBOOK_H
