/*
                        ================================================
                                        KALKULATOR SEDERHANA
                        ================================================
*/

#include <iostream>
using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;

    cout << "=====================================" << endl;
    cout << "||------WELCOME TO CALCULATOR------||" << endl;
    cout << "=====================================\n\n"
         << endl;
    //meminta inputan user
    cout << "angka pertama: ";
    cin >> a;
    cout << "operasi (|+| |-| |*| |/|): ";
    cin >> aritmatika;
    cout << "angka kedua: ";
    cin >> b;

    //proses dengan if statement:
    cout << a << aritmatika << b;
    //pengecekan
    // if (aritmatika == '+')
    // {
    //     hasil = a + b;
    //     cout << " = " << hasil << endl;
    // }
    // else if (aritmatika == '-')
    // {
    //     hasil = a - b;
    //     cout << " = " << hasil << endl;
    // }
    // else if (aritmatika == '/')
    // {
    //     hasil = a / b;
    //     cout << " = " << hasil << endl;
    // }
    // else if (aritmatika == '*')
    // {
    //     hasil = a * b;
    //     cout << " = " << hasil << endl;
    // }
    // else
    // {
    //     cout << "\nwrong operator" << endl;
    // }
    
    //menggunakan switch case:
    switch(aritmatika){
        case '+':
        hasil = a +b;
        cout<< " = "<<hasil<<endl;
        break;
        case '-':
        hasil = a - b;
        cout<< " = "<<hasil<<endl;
        break;
        case '/':
        hasil = a / b;
        cout<< " = "<<hasil<<endl;
        break;
        case '*':
        hasil = a * b;
        cout<< " = "<<hasil<<endl;
        break;
        default:
        cout<<"\nwrong operator"<<endl;
    }
    cin.get();
    return 0;
}