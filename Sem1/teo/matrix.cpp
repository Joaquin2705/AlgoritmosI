#include<bits/stdc++.h>
using namespace std;
int main(){
    int filas;
    int columnas;
    cout<<" filas, columnas: ";
    cin>>filas>>columnas;
    int **table= new int*[filas]; //para filas
    //**table: estamos creando un puntero de punteros
    //new int*[filas] estamos indicando que vamos a apuntar
    //a un array de punteros de enteros
    for(int i=0;i<filas;i++){
        table[i]=new int [columnas]; //generamos
        //las multiples direcciones de las columnas 
    }
    //insertamos variables 
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            table[i][j]=5;
        }
    }
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    //para realizar el delete
    for(int i=0;i<filas;i++){
        delete[]table[i];
    }
}