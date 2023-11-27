#include<iostream>
using namespace std;
class first;
class second
{
int s;
public :
void get_value()
{

cin>>s;
    cout<<"Second number="<<s<<endl;
}
friend void sum(second,first);
};
class first
{
int f;
public :
void get_value()
{
cin>>f;
    cout<<"first number="<<f<<endl;
}
friend void sum(second,first);
};
void sum(second d,first t)
{
cout<<"sum of numbers="<<t.f+d.s;
}
int main()
{
first a;
second b;
a.get_value();
b.get_value();
sum(b,a);
    return 0;
}
