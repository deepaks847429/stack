#include<iostream>
#include <climits>
using namespace std;
class stackusingarraydynamically{
    int *data;
    int nextindex;
    int capacity;
    
    public:
    stackusingarraydynamically(){
        data=new int[4];
        nextindex=0;
        capacity=4;
    }
    //cheking size of stack
    int size(){
        return nextindex;
    }
    //checking stack is empty or not
    bool isempty(){
        if(nextindex==0){
            return true;
        }
        return false;
    }
    // insert element in stack
    void push(int element){
      if(nextindex==capacity){
          int *nedata=new int[2*capacity];
          for(int i=0; i<capacity; i++){
              nedata[i]=data[i];
          }
          capacity*=2;
          delete []data;
          data=nedata;
          data[nextindex]=element;
          nextindex++;
      }
    }
    int pop(){
        if(isempty()){
            if(isempty()){
                cout<<"stack is empty"<<endl;
                return INT_MIN;
            }
            nextindex--;
            return data[nextindex];

        }
    }
    int top(){
        if(isempty()){
            cout<<"stack is empty"<<endl;
            return INT_MIN;
        }
        return data[nextindex];
    }
};
int main(){
    stackusingarraydynamically a;
    
    
    return 0;
}