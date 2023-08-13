#include<bits/stdc++.h>
using namespace std;
template<typename T>
void printnumber(T* numberptr){
    cout<<*numberptr<<endl;
}
void print(void* ptr, char type){
    switch (type)
    {
    case 'i': 
    cout<<*((int*)ptr)<<endl;; //Esta expresion castea el void 
    //pointer en un int pointer (int*)ptr , y para derreferenciarlo 
    //usaremos lo siguiente: *((int*)ptr)
    //handleint
        break;
    case 'c': 
    cout<<*((char*)ptr)<<endl; 
    //La misma derreferencia sirve para la variable tipo char 
    //handlechar
        break;
    default:
    cout<<"chamoy"<<endl;
        break;
    }
}
int main(){
    //un void pointer es aquel que puede almacenar en su direccion
    //a cualquier variable de cualquier tipo, no tiene que ser 
    //el mismo tipo de variable 
    //No podemos derreferenciar directaramente este tipo de pointers
    int number=5;
    char letter='a';
    print(&letter,'c'); //Acuerdate que para los void 
    //no se hace cout 
    print(&number,'i');
    //Para el void pointer es necesario usar el switch xdd
    return 0;
}