#include <iostream>
using namespace std;

class Stack{
private:
    int* arr;
    int canti;
    int tope;
public:
    Stack(){
        arr=new int[2];
        arr[0]=arr[1]=1; //opcional
        canti=0; //cantidad de elementos en el arreglo
        tope=2; //capacidad maxima del arreglo 
    };
    void resize(){ //Sirve cuando el array esta lleno y tenemos que hacer push 
        int *temp= new int[2*tope];//crear un array del doble de tamanio. Se esta reservando dos bloques de tamanio int
        //que apunta a una variable llamada int. 
        for(int i=0;i<tope;i++){
            temp[i]=arr[i];
        }//copypastear

        delete[]arr;
        arr=temp;//liberar y redirigir
        //actualizamos el tamanio de tope. 
        tope=2*tope;
    }
    void push(int val){
        if(canti==tope){
            resize();
        }
        arr[canti]=val;
        canti++;

    };
    void pop(){
        if(canti>0){ //La cantidad de los elementos en el arreglo disminuye en 1
            canti--;
        }

    }; 
    int top(){ //metodo ue nos devuelve la pila superior 
        if(canti==0){
            cout<<"Stack vacio"<<endl;
            return -1;
        }
        else{
            return arr[canti-1]; //si tiene por ejemplo dos elementos el top retornara arr[1].
            //Recuerda que el array inicia desde el indice 0
        }
    }
    void display(){
        for(int i=canti-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
        
    

};

class Queue{
private:
    int* arr;
    int canti;
    int tope;
public:
    Queue(){
        arr=new int[2];
        canti=0;
        tope=2;
    };
    void resize(){ //Sirve cuando el array esta lleno y tenemos que hacer push 
        int *temp= new int[2*tope];//crear un array del doble de tamanio. Se esta reservando dos bloques de tamanio int
        //que apunta a una variable llamada int. 
        for(int i=0;i<tope;i++){
            temp[i]=arr[i];
        }//copypastear

        delete[]arr;
        arr=temp;//liberar y redirigir
        //actualizamos el tamanio de tope. 
        tope=2*tope;
    }
    void push(int val){
        if(canti==tope){
            resize();
        }
        arr[canti]=val;
        canti++;
    };
    void pop(){
        if(canti==0){
            return;
        }
        //canti>0
        //desplazar todos los elementos a su izquierda
        //si i>0, mover arr[i] a arr[i-1] esto para todas ls posiciones positivas
        for(int i=1;i<canti;i++){
            arr[i-1]=arr[i];
        }

    };
    int front(){
        if(canti>0){
            return arr[0];
        }
        else{
            return -1;
        }
    }
    
    int back(){
        if(canti>0){
            return arr[canti-1];
        }
        else{
            return -1;
        }
    };
};
int main() {
    Queue q;
    q.push(2);
    q.push(3);
    q.push(5);
    q.pop();
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
    //cout<<s.top()<<endl;
    return 0;
}
