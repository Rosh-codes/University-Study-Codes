// #include <iostream>
//  using namespace std;
//  class Parent{
//     public:
//     virtual void scold(){
//         cout<<"parent is right"<<endl;
//     }
//  };
//  class Child : public Parent{
//     public:
//     void scold()override{
//         cout<<"child is right"<<endl;
//     }
//  };
//  int main(){
//     Parent p;
//     p.scold();
//     Child c;
//     c.scold();
//     return 0;
//  }
#include <iostream>
 using namespace std;
 class Parent{
    public:
    virtual void scold()=0;       
    
 };
 class Child : public Parent{
    public:
    void scold()override{
        cout<<"child is right"<<endl;
    }
 };
 int main(){
    Parent* p = new Child();
    p->scold();
    return 0;
 }