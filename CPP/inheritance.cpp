#include <iostream>
using namespace std;
class Dad{
    protected:
        string name = "David Raya";
        int age = 28;
    public:    
        void displayDad(){
            cout<<"name "<<name<<"\n"<<"age "<<age<<endl;
        }    
};
class Mom{
    protected:
        string name = "rani";
        int age = 28;
    public:    
        void displayMom(){
            cout<<"name "<<name<<"\n"<<"age "<<age<<endl;
        }    
    };
class Child:public Dad,public Mom{
        public:
            string name = "Diddy";
            int age = 8;

            void displaychild(){
                cout<<Dad::name <<" is father of "<<name<<Mom::name<< endl;
            }
};
int main(){
    Child child;
    child.displaychild();
    child.displayDad();
    child.displayMom();

    return 0;

}