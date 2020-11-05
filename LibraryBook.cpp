#include <iostream>
#include <vector>
#include "LibraryBook.h"
using namespace std;

Libraryb::Libraryb(){
    //Base constructor
    title = "";
    author = "";
    isbn = "";
    ischeckedout = false;
}

Libraryb::Libraryb(string Title, string Author, string ISBN){
    //Parameter constructor
    title = Title;
    author = Author;
    isbn = ISBN;
    ischeckedout = false;
}

string Libraryb::gettitle(){
    //returns the title of a book
    return title;
}

string Libraryb::getauthor(){
    //returns the author of a book
    return author;
}

string Libraryb::getisbn(){
    //returns the isbn of a book
    return isbn;
}

bool Libraryb::getstatus(){
    //returns if the book is checked out or not
    return ischeckedout;
}

void Libraryb::checkinBook(){
    //checks in a book
    ischeckedout = false;
}

void Libraryb::checkoutBook(){
    //checks out a book
    ischeckedout = true;
}
















//
// Created by Riley Brookins on 3/18/20.
//

