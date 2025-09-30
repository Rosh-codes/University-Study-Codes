#include <iostream>
using namespace std;
int calc(int price[],int amount){
    int total = 0;
    for(int i=0;i<amount;i++){
        total += price[i];
    }
    return total;
}
int main(){
    int temp[4]= {10,13,10,10};
    int tempo = calc(temp,4);
    cout<<tempo<<endl;
    // return 0;
    
}