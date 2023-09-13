#include <iostream>

using namespace std;

int main(void)
{
    int A, B;

    cout << "Digite o valor de A: ";
    cin >> A;

    cout << "Digite o valor de B: ";
    cin >> B;

    cout << "Soma = " << A + B << endl;
    cout << "Subtração = " << A - B << endl;
    cout << "Multiplicação = " << A * B << endl;
    cout << "Divisão = " << A / B << endl;
    cout << "Resto = " << A % B << endl;

    return 0;
}