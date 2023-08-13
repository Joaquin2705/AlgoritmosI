#include<bits/stdc++.h>
using namespace std;
int getMin(int numbers[],int size){
    int min=numbers[0];
    for(int i=1;i<size;i++){
        if(numbers[i]<min){
            min=numbers[i];
        }
    }
    return min;
}
int getMax(int numbers[],int size){
    int max=numbers[0];
    for(int i=1;i<size;i++){
        if(numbers[i]>max){
            max=numbers[i];
        }
    }
    return max;
}
//Haciendo uso de punteros
void getminmax(int numbers[],int size, int* min, int* max){
    for(int i=1;i<size;i++){
        if(numbers[i]>*max){
            *max=numbers[i];
        }
        if(numbers[i]<*min){
            *min=numbers[i];
        }
    }
    cout<<"El minimo elemento del array es: "<<*min<<endl;
    cout<<"El maximo elemento del array es: "<<*max<<endl;
}
int main(){
    int numbers[5]={5,4,-2,29,6};
    cout<<getMin(numbers,5)<<endl;
    cout<<getMax(numbers,5)<<endl;
    int min=numbers[0];
    int max=numbers[0];
    getminmax(numbers,5,&min,&max);
    //No funciona colocando como parametros de min y max a
    //&numbers[0] en ambos, puesto que tendrian la misma direecion
    //por ello se ha inicializado dos variables, que aunque
    /*almacenan la misma variable, tienen diferente direccion
    dentro de la memoria */
    return 0;
}
