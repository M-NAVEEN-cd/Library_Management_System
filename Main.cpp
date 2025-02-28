#include <bits/stdc++.h>
#include "Library.cpp"
using namespace std;


int main()
{
    admin a;
    bool flag=1;
    while(flag)
    {
        int choice;
        cout<<"1.ADD BOOK"<<endl;
        cout<<"2.UPDATE BOOK"<<endl;
        cout<<"3.REMOVE BOOK"<<endl;
        cout<<"4.ADD MEMBER"<<endl;
        cout<<"5.DISPLAY ALL BOOKS"<<endl;
        cout<<"6.DISPLAY ALL MEMBERS"<<endl;
        cout<<"7.EXIT"<<endl;
        cout<<"---------------------------------------------------------------------"<<endl;
        cout<<"ENTER YOUR CHOICE: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
        {
            a.addbook();
            break;
        }
        case 2:
        {
            string s;
            cout<<"ENTER THE BOOK NAME: ";
            cin>>s;
            a.update(s);
            break;
        }
        case 3:
        {
            string s;
            cout<<"ENTER THE BOOK NAME: ";
            cin>>s;
            a.removeBook(s);
            break;
        }
        case 5:
        {
            a.displayBooks();
            break;
        }
        case 7:
        {
            flag=0;
            break;
        }
        default:
            break;
        }
        cout<<"----------------------------------------------------------------------"<<endl;
    }
}
