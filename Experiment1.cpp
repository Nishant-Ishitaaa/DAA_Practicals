--Code to Analyze if the stack is empty or full, and if elements are present, return the top
--element in the stack using templates. Also, perform push and pop operations on the stack. 

#include <iostream>
using namespace std;
const int size=5;
template <class T>
class Stack{
    private:
    T arr[size];
    int top;
    public:
    Stack(){
        top=-1;
    }
    bool isFull(){
        return top==size-1;
    }
    bool isEmpty(){
        return top==-1;
    }
    void push(T value){
        if (isFull()){
            cout<<"Stack Overflow!\n";
        }
        else{
            arr[++top]=value;
            cout<<value<<" pushed into stack\n";
        }
    }
    void pop(){
        if (isEmpty()){
            cout<<"Stack underflow\n";
        }
        else{
            cout<<arr[top--]<<" popped from stack\n";
        }
    }
    void peek(){
        if(isEmpty()){
            cout<<"Stack Underflow!\n";
        }
        else{
            cout<<"top element: "<<arr[top]<<endl;
        }
    }
};
int main(){
    Stack <int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    return 0;
}
