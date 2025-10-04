#include <iostream>
using namespace std;
class Dog{
    public:
        string name;
        int age;
        void bark(){
            cout<< "dog is barking"<<endl;
        }
        void display(){
            cout<<"dog name "<< name <<endl;
            cout<<"dog age "<< age <<endl;
        }
};
int main(){
    Dog dog;
    dog.name="suk";
    dog.age=2;
    dog.bark();
    dog.display();

    return 0;

}