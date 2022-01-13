# c--coding
function
#include <iostream>

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
    return(3.14*R*R);
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
