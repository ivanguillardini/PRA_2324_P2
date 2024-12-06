#include<iostream>
#include<stdlib.h>
#include "DyV.h"
#include<vector>
#include<chrono>
using namespace std;

void imprimir(vector<int> a,int tamaño){
    for(int i=0;i<tamaño;i++){
        cout<<a[i]<<"-";
    }
    cout<<endl;
}
void PrintVector(const vector<int>& v) {
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    vector<int> b{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
    size_t tamaño = b.size();
    int x =15;
    int posicion = BusquedaBinaria(x,b,0,tamaño-1);
    if(posicion == -1){
        cout<<"no se encontro el valor "<<x<<" en el vector";
    }
    else{
        cout<<"el valor "<<x<<" se encontro en el vecto en la poscion: "<<posicion<<endl;
    }
    // Prueba de QuickSort
    vector<int> c = {10,4,23,54,69,10004, 7, 8, 9, 1, 5, 20, 15, 6, 3};
    cout << "Vector original:" << endl;
    PrintVector(c);

    auto start = chrono::system_clock::now();
    QuickSort(c, 0, c.size() - 1);
    auto end = chrono::system_clock::now();

    chrono::duration<float, milli> duration = end - start;

    cout << "Vector ordenado con QuickSort:" << endl;
    PrintVector(c);
    cout << "Tiempo de QuickSort: " << duration.count() << " ms" << endl;

    return 0;
}
