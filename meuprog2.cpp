#include <iostream>

using namespace std;

int main(){
    float a , b, soma, mult, div, rest, sub;
    cout << "Digite o primeiro numero:" << endl;
    cin >> a;
    cout << "Digite o segundo numero:" << endl;
    cin >> b;
    soma = a + b;
    mult = a * b;
    div = a / b;
    sub = a - b;
   // rest = a % b;
    cout << "A soma e: " << soma <<endl;
    cout << "A multiplicacao e: " << mult <<endl;
    cout << "A divisao: " << div <<endl;
   // cout << "O resto da divisao e: " << rest <<endl;
    cout << "A subtracao e: " << sub <<endl;
}