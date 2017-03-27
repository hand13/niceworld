#include:
#include"stack.h"
class arrayStack : public stack<T>{
	public:
		arrayStack(int init=10);
		~arrayStack(){
			delete [] stack;
		}
		bool empty()const{
			return stackTop==-1;
		}
		int size()const{
			return stackTop+1;
		}
		T & top{
			if (stackTop==-1)
			  throw stackEmpty();
			return stack[stackTop];
		}
		void pop(){
			if(stackTop==-1)
			  throw stackEmpty();
			stack[stackTop--].~T();
		}
		void push(const T & theElement);
	private:
		int stackTop;
		int arrayLength;
		T * stack;
};

