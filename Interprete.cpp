#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    int a;
    char valor = 'a';
    cout << "Dime un número" << endl;  
    cin >> a;
    char valor_final = valor + a;
    valor_final--;
    cout << "Nuevo valor es " << valor_final << ":" << endl;  
    return 0;
}
