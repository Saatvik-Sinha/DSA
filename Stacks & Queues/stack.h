#include <iostream>

using namespace std;

class Stack{
	int arr[];
	int top;

	Stack(int size=5){
		this->arr = new int[size];
		this->top = 0;
	}

	int size(){
		return this->top;
	}

	bool isEmpty(){
		return this->top == 0;
	}

	bool isFull(){
		return this->top == (sizeof(this->arr)/sizeof(this->arr[0]));
	}

	void push(int e){
		if (isFull()){
			throw "Overflow";
		}
		this->arr[top++] = e;
	}

	int pop(){
		if (isEmpty()){
			throw "Underflow";
		}
		return this->arr[--top];
	}

	int peek(){
		if (isEmpty()){
			throw "Underflow";
		}
		return this->arr[top-1];
	}

	void display(){
		for (int i = this->top-1; i >= 0; i--){
			cout << this->arr[i] << " ";
		}
		cout << endl;
	}
};