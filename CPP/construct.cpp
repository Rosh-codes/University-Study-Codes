#include <iostream>
using namespace std;

class Dog
{
public:
    string name;
    int age;

    void bark()
    {
        cout << "the dog is barking" << endl;
    }
    void display(){
        cout<<name<<endl<<age<<endl;
    }
    Dog()
    {
        cout << "the constructor is called" << endl;
    }
    Dog(string name,int age){
        this->age=age;
        this->name=name;
    }
    ~Dog(){
        cout<<"deconstructor called"<<endl<<endl;
    }
};
int main()
{
    Dog dog1;
    dog1.name="tommy";
    dog1.age=4;
    dog1.display();
    Dog dog2("murphy",3);
    dog2.display();
    Dog dog3;

}