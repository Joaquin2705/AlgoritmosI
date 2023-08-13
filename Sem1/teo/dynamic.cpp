#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    //¿Como eliminamos un elemento de la mitad de un array?
    //El tamano del array siempre es constante. No podemos 
    /*hacer un cin para modificar el tamano del array las 
    vece que queramos, sino que ya se debe saber */

    /* para que el tamano del array sea modificable, cada vez
    que corramos el programa podemos usar los array dinamicos*/
    int size;
    cout<<"Size: "<<endl;
    cin>>size;
    int* myarray=new int[size]; //Esta es la sintaxis
    for(int i=0;i<size;i++){
       cout<<"Array["<<i<<"]"<<endl;
       cin>>myarray[i];
    }
    for(int i=0;i<size;i++){
       cout<<*(myarray+i)<<" ";
    }
    cout<<endl;

    //Ahora realizaremos el proceso del delete. Liberamos
    //el espacio de la memoria
    delete[]myarray;
    myarray=NULL;
    return 0;
}