#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    cout<<&n<<endl; //Este es la direccion de mi variable guardada en mi memoria
    int *ptrn=&n;
    cout<<ptrn<<endl; //imprimie la direccion
    cout<<*ptrn<<endl;//imprime el valor que se encuentra almacenado
    //en dicha direccion
    n=6;
    cout<<n<<endl;
    cout<<*ptrn<<endl;
    cout<<ptrn<<endl;
    *ptrn=4; //como *ptrn esta ligado a la direccion de n
    //este causara que cambie el valor de n (ver linea 6)
    //pero la direccion de la vaariable se mantiene 
    cout<<ptrn<<endl;
    cout<<n<<endl;
    cout<<*ptrn<<endl;
    //Como te das cuenta el valor de la variable puede cambiar 
    //pero la direccion va a ser la misma siempre

    /*
    int *ptr2;
    *ptr2=7;
    */
    /* Este fragemento de codigo es incorrecto porque 
    ptr2 no tiene una direccion para que la derreferencia (*ptr2)
    sea almacenada*/

    //Lo correcto seria 
    int b;
    int *ptr2=&b;
    *ptr2=7; //Derreferencia correcta, ¿Que pasara con b?
    //Pues lo correcto seria que b tambien adopte el valor de 7
    //probemoslo 
    cout<<ptr2<<endl;
    cout<<&b<<endl;
    cout<<*ptr2<<endl;
    cout<<b<<endl;
    //Lo dicho anteriormente es TOTALMENTE CORRECTO!!!
    
    return 0;
}