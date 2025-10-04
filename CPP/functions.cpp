#include <iostream>
#include <string>
using namespace std;

int cup(int c){
    return c;
}
void tea (string teatype = "blacktea" ){
    cout << "you want " << teatype << endl;

}
int main(){
    int cupa=cup(3);
    cout<<"number of tea : "<< cupa << endl;
tea();
tea("milkshake");
return 0;


}