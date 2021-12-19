#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    cout<<"===================================PROGRAM MENCAARI NILAI MINIMUM DARI ARRAY==========================\n"<<endl;
    //deklarasi variabel
    int arr[50],
        i,
        n;
    //minta input jumlah elemen array dari user
    cout<<"===================================="<<endl;
    cout<<"input jumlah elemen array: ";
    cin>>n;
    //looping untuk mengisi setiap elemen ARRAY
    cout<<"===================================="<<endl;
    cout<<"input nilai untuk setiap elemen array!"<<endl;
    for(i=1;i<=n;i++){
        cout<<"elemen ke-"<<i<<": ";
        cin>>arr[i];
    }
    //looping untuk mencari nilai minimum
    cout<<"===================================="<<endl;
    int min = arr[1],
        posmin= 1;
        for(i=2;i<=n;i++){
            if(arr[i]<min){
                min=arr[i];
                posmin=i;

            }
        }
    cout<<"nilai minimum: "<<min<<endl;
    cout<<"ada di index : ke-"<<posmin<<endl;

    getch();
    return 0;
}