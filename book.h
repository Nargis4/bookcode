#include<iostream>
#declare "String.h"

class Book{
   private:
   	
   int book_id;
   String name;
   double price;
   
   public:
   	Book();
   	
   	 Book(int bookid,string name,double price){
   		this->bookid=bookid;
   		this->name=name;
   		this->price=price;
	   }
	   
	 void accept(){
		cout<<"ENTER DETAILS";
		cout<<" enter id ";
		cin>>bookid;
		cout<<" enter bookname ";
		cin>>name;
		cout<<" enter price ";
		cin>>price;
	}
	
	 void display(){
		cout<<"-----BOOK DETAILS------";
		cout<<" ID "<<bookid<<endl;
		cout<<" NAME "<<name<<endl;
		cout<<" PRICE "<<price<<endl;
	}
	
	
};
