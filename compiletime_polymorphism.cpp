 

 #include<iostream>
using namespace std; 
 void showInfo(int age)
 {
 cout<<age<<endl;
}
 void showInfo(string name) 
 {
 cout<<name<<endl;
}
 void showInfo(double salary)
 {
 cout<<salary<<endl;
 }

 int main(){

 showInfo(23);
 showInfo("Akhilesh");
 showInfo(5634.2);
 return 0;
 }

// Run-Time Polymorphism 

#include <iostream>
using namespace std;
class A
{
public:
virtual void disp()
{
cout<<"It's class A";
}
} ;

class B:public A
{
public:
void disp()
{
 cout<<"It's class 8";
}
};
int main()
{
A *ptr; 
B obj;
ptr=&obj;
ptr->disp();
 return 0;
}
