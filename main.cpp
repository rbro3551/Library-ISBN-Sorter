#include <iostream>
#include <vector>
#include <fstream>
#include "LibraryBook.h"
using namespace std;

void readbookfile(vector <Libraryb> &books){
    //Reads the file of books and organizes each book and its properties into a vector
    string title, author, isbn;
    ifstream fin("books.txt");
    while (fin.good()){
        getline(fin, title);
        getline(fin, author);
        getline(fin, isbn);
        Libraryb mybook(title, author, isbn);
        books.push_back(mybook);
    }
}

void readisbn(Libraryb &book){
    //reads the file of isbns and checks in/out books
    int cnt = 0;
    string isbn;
    ifstream fin("isbns.txt");
    while (fin.good()){
        getline(fin, isbn);
        if(isbn == book.getisbn()){
            cnt += 1;
        }
    }
    if (cnt % 2 == 0){
        book.checkinBook();
    }else{
        book.checkoutBook();
    }

}

void outputfile(ofstream &fout, vector <Libraryb> books){
    //Outputs checked out books to a file
    fout<<"Books checked out:"<<endl;
    fout<<endl;
    fout<<"-----------------------"<<endl;
    fout<<endl<<endl<<endl;
    fout<<"Title    Author     ISBN"<<endl;
    fout<<endl;
    for (int i = 0; i < books.size(); i++){
        if (books.at(i).getstatus()){
            fout<<books.at(i).gettitle()<<"    "<<books.at(i).getauthor()<<"    "<<books.at(i).getisbn()<<endl<<endl;
        }
    }
    fout.close();

}

int main() {
    vector <Libraryb> books;

    readbookfile(books);

    for(int i = 0; i < books.size(); i++){
        readisbn(books.at(i));
    }

    ofstream fout("checkedout.txt");

    outputfile(fout, books);

    return 0;
}
