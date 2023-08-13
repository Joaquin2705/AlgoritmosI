#include<bits/stdc++.h>
using namespace std;
int main(){
    int luckynumbers[]={2,3,5,7,9};
    cout<<luckynumbers<<endl; //Se obtiene una direccion
    //corresponde al primer elemento del array;
    cout<<&luckynumbers[0]<<endl;
    //Como vemos, lo anterior ES CIERTOOO
    cout<<luckynumbers[2]<<endl; //output=5;
    cout<<*(luckynumbers+2)<<endl;
    //Derreferenciamos el array, haciendo que cambie su direccion
    //avance dos posiciones siendo lo mismo que hacer luckynumbers[2]
    int arraycito[5];
    int arrSize = sizeof(arraycito)/sizeof(arraycito[0]);
    for(int i=0;i<arrSize;i++){
        cout<<"Enter a number: "<<endl;
        int number;
        cin>>number;
        arraycito[i]=number;
    }
    for(int i=0;i<arrSize;i++){
        cout<<*(arraycito+i)<<endl;
    }
    
    return 0;
}