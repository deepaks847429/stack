#include<iostream>
#include<climits>
using namespace std;
template<typename T>
class node{
    public:
    T data;
    node<T> *next;
    node(T data){
        this->data=data;
        next=NULL;
    }
};
template<typename T>
class stack{
    node<T> *head;
    int size;
    public:
    stack(){
        head=NULL;
        size=0;
    }
    int getsize(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
    void push(T element){
    node<T> *newnode=new node<T>element;
    newnode->next=head;
    head=newnode;
    size++
    }
    T pop{
        if(isempty()){
            return 0;
        }
        T ans=head->data;
        node<T> *temp=head;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }
    T top(){
        if(isempty()){
            return 0;
        }
        return head->data;
    }
};
int main(){
    stack<char> s;
    s.push(100);
    s.push(101);
    cout<<s.isempty()<<endl;
    return 0;
}