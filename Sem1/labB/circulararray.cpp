#include <iostream>
using namespace std;

template <class T>
class CircularArray
{
private:
    T *array;
    int capacity;
    int back, front; // Referencia a posiciones, no valores.
    int cantidad;
    
public:
    CircularArray(int _capacity = 10){
        T* array = new int[_capacity];
        capacity = _capacity;
        back = front = -1;
        cantidad=0;
    }

    virtual ~CircularArray();

    void resize(){
        T* temp = new T[capacity*2];
        int i = 0;
        int j = front
        while(j%capacity != back){
            temp[i]= array[j%capacity];
            j++;
            i++;
        }
        back = 0;
        front = i;
        delete [] array;
        array = temp;
        capacity*=2;
    }
    
    void push_front(T data){
        cantidad++;
        if (is_full() == true){ resize(); }
        if (front == capacity-1) {
            front = 0;
            array[front] = data;
            return;
        }

        front = front+1
        array[front] = data;        
    }

    void push_back(T data){
        cantidad++;
        if (is_full() == true){ resize(); }
        if (back == 0){
            back = capacity-1;
            array[back] = data;
            return;
        }       

        back = back-1;
        array[back] = data;        
    }


    void insert(T data, int pos);
    T pop_front(){
        if (front == 0){
            front = capacity-1;
            cantidad--;
        } else {
            front++;
            cantidad--;
        }
    }

    
    T pop_back(){
        if (back == capacity-1){
            back = 0;
            cantidad--;
        } else {
            back--;
            cantidad--;
        }
    }

    bool is_full(){
        if(front-back = 1 or back-front = capacity-1){return true;}
        else{return false;}
    }

    bool is_empty(){
        if(capacity==0) return true;
        return false;
    }

    int size(){
        return cantidad;
    }

    void clear(){
        front=-1;
        back=-1;
        delete [] array;
        array = new int[capacity];
    }

    T& operator[](int i){
        return array[i]
    }

    void sort();
    bool is_sorted();
    void reverse();
    string to_string(string sep=" "){
        string ans = "";
        int i = front;
        while(i != back){
            ans+=array[i%capacity]+sep;
            i++;
        }
    }

private:
    int next(int);
    int prev(int);
};

template <class T>
CircularArray<T>::CircularArray(int _capacity)
{
    this->capacity = _capacity;
    this->array = new T[_capacity];
    this->front = this->back = -1;//empty
}