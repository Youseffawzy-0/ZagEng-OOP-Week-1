#include<bits/stdc++.h>
#include "Book.h"
using namespace std;
#define endl "\n"
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    //sync;
    Book arr[3];
    for(int i=0 ;i<3;i++)
    {
        int Id,Year;
        double Price;
        string Author,Title;
        bool Available;
        cout<<"Enter the details of book : "<<i+1<<endl;
        cout<<"Id: ";cin>>Id;cin.ignore();
        cout<<"Author: ";cin>>Author;cin.ignore();
        cout<<"Title: ";cin>>Title;cin.ignore();
        cout<<"Year: ";cin>>Year;cin.ignore();
        cout<<"price: ";cin>>Price;cin.ignore();
        cout<<"Available?: ";cin>>Available;cin.ignore();
        arr[i].set_Id(Id);
        arr[i].setAuthor(Author);
        arr[i].setTitle(Title);
        arr[i].setYear(Year);
        arr[i].setAvailable(Available);
        arr[i].setPrice(Price);
        cout<<"............................................"<<endl;
    }
    for(int i=0;i<3;i++)
    {
        cout<<"details of book no."<<i+1<<endl;
        arr[i].display();
    }
    return 0;
}