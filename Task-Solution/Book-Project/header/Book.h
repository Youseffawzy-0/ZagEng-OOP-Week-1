#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

 
class Book
{
private:
    int Id,Year;
    string Author,Title;
    bool Available;
    double Price;
public:
    //setters
    void set_Id(int i)
    {
        Id=i;
    }
    void setYear(int y)
    {
        Year=y;
    }
    void setAuthor(string auth)
    {
        Author=auth;
    }
    void setTitle(string tit)
    {
        Title=tit;
    }
    void setAvailable(bool avail)
    {
        Available=avail;
    }
    void setPrice(double pri)
    {
        Price=pri;
    }
    // getters
    int getId() 
    {
        return Id;
    }
    int getYear()
    {
        return Year;
    }
    string getAuthor()
    {
        return Author;
    }
    string getTitle()
    {
        return Title;
    }
    bool getAvailable()
    {
        return Available;
    }
    double getPrice()
    {
        return Price;
    }
    //display
    void display()
    {
        cout<<"id: "<<Id<<endl;
        cout<<"Author: "<<Author<<endl;
        cout<<"Title: "<<Title<<endl;
        cout<<"Year: "<<Year<<endl;
        cout<<"Available?: ";
        if(Available) cout<<"YES\n";
        else cout<<"NO\n";
        cout<<"Price: "<<Price<<"L.E"<<endl;
    }
};
