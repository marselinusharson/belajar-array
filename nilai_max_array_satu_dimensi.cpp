#include <iostream>
#include<stdlib.h>
using namespace std;


int main(){
    cout<<"================================PROGRAM MENCARI NILAI MAXIMUM DARI ARRAY SATU DIMENSI================================\n"<<endl;
    //deklarasi variabel
    int arr[50],
        i,
        n;

    cout<<"=====================================================================================================================\n"<<endl;
    //minta input jumlah elemen
    cout<<"input jumlah elemen array(max 50): ";
    cin>>n;
    cout<<"===================================="<<endl;
    //looping untuk mengisi nilai setiap elemen
    cout<<"masukkan nilai untuk setiap elemen!"<<endl;
    for(i=1;i<=n;i++){
        cout<<"elemen ke-"<<i<<": ";
        cin>>arr[i];
    }
    //inisialisasi nilai max dan posmax
    int max=arr[1],
        posmax=1;
    //looping mencari nilai maksimum dari array dan posisinya
    for(i=2;i<=n;i++){
        if(arr[i]>max){
            max=arr[i],
            posmax =i;
        }
    }
    //tampilkan hasil
    cout<<"===================================="<<endl;
    cout<<"nilai maksimum: "<<max<<endl;
    cout<<"pada index ke-: "<<posmax<<endl;



    return 0;
}