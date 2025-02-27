#include <bits/stdc++.h>
using namespace std;

class book
{
    public:
    static int id;
    int bookId;
    string bookName;
    string author;
    string genre;
    

    book(){}

    book(string name,string author,string genre)
    {
        this->bookId = id++;
        this->bookName=name;
        this->author=author;
        this->genre=genre;
    }
};
int book::id=1;


class Library
{

    public:
    static vector<book>books;

    Library()
    {

    }

    void addBook(string name,string author,string genre)
    {
        books.push_back(book(name,author,genre));
    }
    void displayBooks()
    {
        for(auto& i:books)
        {
            cout<<"TITLE: "<<i.bookName<<"  AUTHOR: "<<i.author<<"  GENRE: "<<i.genre<<endl;
        }
    }
    void displayMembers()
    {

    }
};
vector<book> Library::books;


class admin:public Library
{
    public:
    string name;
    string password;
    admin()
    {

    }
    void addbook()
    {
        string bookName,author,genre;
        cout<<"ENTER THE BOOK NAME: ";
        cin>>bookName;
        cout<<"ENTER THE AUTHOR NAME: ";
        cin>>author;
        cout<<"ENTER THE GENRE: ";
        cin>>genre;
        addBook(bookName,author,genre);
        cout<<"BOOK ADDED SUCCESSFULLY"<<endl;
    }
};

class Members:public Library
{
    public:
    int member_id;
    string name;
    int borrowedCount;
};