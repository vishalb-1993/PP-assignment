#include<bits/stdc++.h>
using namespace std;
class adder {
    public: 
    //constructor
    adder(int i =0){

        total = i;
       }
    //interface to outside world 
    void addnum(int number){
        total += number;

    }
    //interface to outside world 
    int gettotal()
    {
        return total;
    };
    private:
    //hidden data from outside world
     int total;

};

int main()
{
    adder a;
    a.addnum(10);
    a.addnum(30);
    a.addnum(30);

    cout<<"Total "<<a.gettotal()<<endl;
    return 0;
}
