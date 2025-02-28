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
    void updateBook(book& b)
    {
        cout<<"ENTER THE NEW AUTHOR NAME:"<<endl;
        cin>>b.author;
        cout<<"ENTER THE NEW GENRE NAME:"<<endl;
        cin>>b.genre;
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
        if(books.size() == 0)
        {
            cout<<"NO BOOKS ARE THERE!"<<endl;
        }
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
    book b;
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

    void update(string name)
    {
        for(int i=0;i<books.size();i++)
        {
            if(books[i].bookName==name)
            {
                b.updateBook(books[i]);
                cout<<"UPDATED SUCCESSFULLY!"<<endl;
                return;
            }
        }
        cout<<"Book Not found"<<endl;
    }

    void removeBook(string name)
    {
        for(int i=0;i<books.size();i++)
        {
            if(books[i].bookName==name)
            {
                books.erase(books.begin()+i);
                cout<<"BOOK REMOVED SUCCESSFULLY!"<<endl;
                return;
            }
        }
        cout<<"Book Not found"<<endl;
    }
};

class Members:public Library
{
    public:
    int member_id;
    string name;
    int borrowedCount=0;
    static int cnt;
    static map<int,vector<book>>memberList;

    Members()
    {

    }
    Members(string name)
    {
        this->member_id=cnt++;
        this->name=name;
        memberList[member_id]={};
    }


};
map<int,vector<book>> Members::memberList;
int Members::cnt=1;