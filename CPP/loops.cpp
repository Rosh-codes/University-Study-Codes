#include <iostream>
#include <string>
using namespace std;
int main(){
    string Tea[3] = {"Green","Black","Lemon"};
    for(int i=0;i<=2;i++){
        for (int j=1;j<=3;j++){
            cout << "you got "<< j << "cups of"<<Tea[i] << endl;
        }
    }
    return 0;
}