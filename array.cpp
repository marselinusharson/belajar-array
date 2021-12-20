#include <iostream>
#include <conio.h>
using namespace std;


int main(){
    cout<<"=============================PROGRAM CARI NILAI MAX TERBESAR DAN MIN TERKECIL DARI DUA BUAH ARRAY 1 DIMENSI===========\n\n"<<endl;

    int arr1[50],
        arr2[50],
        arr3[50],
        i,
        n;

    cout<<"input jumlah elemen array pertama (max 50): ";
    cin>>n;

    cout<<"=============================================="<<endl;
    cout<<"input nilai untuk setiap elemen array!\n"<<endl;
    for(i=1;i<=n;i++){
        cout<<"elemen ke-"<<i<<": ";
        cin>>arr1[i];
    }    
    int max1=arr1[1],
        min1=arr1[1];
    for(i=2;i<=n;i++){
        if(max1<arr1[i]){
            max1=arr1[i];
        }
        if(min1>arr1[i]){
            min1=arr1[i];
        }
    }
    cout<<"==============================================="<<endl;
    cout<<"input jumlah elemen array kedua (max 50): ";
    cin>>n;

    cout<<"=============================================="<<endl;
    cout<<"input nilai untuk setiap elemen array!\n"<<endl;
    for(i=1;i<=n;i++){
        cout<<"elemen ke-"<<i<<": ";
        cin>>arr2[i];
    }    
    int max2=arr2[1],
        min2=arr2[1];
    for(i=2;i<=n;i++){
        if(max2<arr2[i]){
            max2=arr2[i];
        }
        if(min1>arr1[i]){
            min2=arr1[i];
        }
    }
    cout<<"==============================================="<<endl;
    if(max1>max2){
        cout<<"nilai max terbesar: "<<max1<<endl;
    }else if(max1<max2){
        cout<<"nilai max terbesar: "<<max2<<endl;
        
    }
    if(min1<min2){
        cout<<"nilai min terkecil: "<<min1<<endl;
    }else if (min1>min2){
        cout<<"nilai min terkecil: "<<min2<<endl;
        
    }

}