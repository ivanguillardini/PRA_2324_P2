#ifndef DYV_H
#define DYV_H
#include<vector>
#include<iostream>
#include<stdlib.h>
using namespace std;
//cabeceras de las funciones
int BusquedaBinaria(int x,vector<int>& a, int ini, int fin);
void QuickSort(vector<int>& a,int ini,int fin);
int Particion(vector<int>& a,int ini, int fin);
void intercambiar(int& a,int& b);


int BusquedaBinaria(int x, vector<int>& a, int ini, int fin){
    if(ini>fin){
            return -1; //-1 es como que no encuntra el array
    }
    else{
        int medio = (ini+fin)/2;
        if(a[medio]==x){
            return medio;
        }
        else if(a[medio] > x){
            return BusquedaBinaria(x,a,ini,medio-1);
        }
        else{
            return BusquedaBinaria(x,a,medio+1,fin);

        }
    }

}
void QuickSort(vector<int>& a, int ini, int fin){
    if(ini<fin){
        int pivote = Particion(a,ini,fin);
        QuickSort(a,ini,pivote-1);
        QuickSort(a,pivote+1,fin);
    }
}
int Particion(vector<int>& a,int ini, int fin){
    int x = a[fin];
    int i = ini;
    for(int j=ini;j<=(fin-1);j++){
        if(a[j] <= x){
            //intercambiar(a[i],a[j]);
            swap(a[i],a[j]);
            i++;
        }
        
    }
    //intercambiar(a[i],a[fin]);
    swap(a[i],a[fin]);
    return i;
}
void intercambiar(int& a,int& b){
    int aux=a;
    a=b;
    b=aux;
}

#endif
