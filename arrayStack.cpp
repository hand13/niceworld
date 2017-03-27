#include"arrayStack.h"
template<class T>
arrayStack<T>::arrayStack(int init){
		arrayLength=init;
		stack=new T(arrayLength);
		stackTop=-1;
}
template<class T>
void arrayStack<T>::push(const T & theElement){
	if(stackTop==arrayLength-1){
		arrayLength*=2;
	}
	stack[++stackTop]=theElement;
}


