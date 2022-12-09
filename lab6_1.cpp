#include<iostream>
using namespace std;

int main(){
int number = 1 ,Even = 0, Odd = 0;
    while(number != 0){
    cout << "Enter an integer: ";
    cin >> number;

    if(number % 2 == 0){
        Even = Even + 1;
    }
    else{
        Odd = Odd + 1;
    }
}



    cout << "#Even numbers = " << Even - 1 << "\n";
    cout << "#Odd numbers = " << Odd;
    return 0;
}
