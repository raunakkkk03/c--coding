FUNCTION
 #include<iostream.h>
using namespace std; 
int area(int,int); 
float area(int); 
int main()
{ 
int r; 
cout<<"enter radius of circle"; 
cin>>r; 
float A=area(r); 
cout<<"\nArea of circle is"<<A;
int l,b,a; 
cout<<"\nenter length and breadth of rectangle"; 
cin>>l>>b; 
a=area(l,b); 
cout<<"\narea of rectangle is"<<a;
} 
float area(int R) 
{ 
return(3.14RR);
} 
int area(int l,int b) 
{ 
return(l*b); 
} 
OUTPUT- 
Area of circle is113.04 
enter length and breadth of rectangle5 
4

area of rectangle is20

"structure using c++"
#include <iostream>

using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
void display(book);
book input();
int main()
{
    book b1;
    b1=input();
    display(b1);
}
    void display(book b)
    {
        cout<<"\n"<<b.bookid<<" "<<b.title<<"  "<<b.price;
    }
    book input()
    {
        book b;
        cout<<"enter bookid,title and price of book";
        cin>>b.bookid>>b.title>>b.price;
        return(b);
    }
OUUTPUT-
enter bookid,title and price of book100
c++
350.0

100 c++  350
