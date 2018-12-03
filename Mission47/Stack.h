#pragma once
template <class T>
class Stack
{
	
public:

	T _data;
	Stack* _next;
};

template<typename T>
Stack<T>* Push(Stack<T>* end, T value)
{

	Stack<T>* stack = new Stack<T>;
	stack->_data = value;
	stack->_next = end;
	return stack;

}

template<typename T>
T& Pop(Stack<T>* end)
{

	Stack<T>* stack = new Stack<T>;
	stack->_next = end;
	T t = stack->_data;
	stack->_data = nullptr;
	delete(end);
	return t;

}

template<typename T>
T& Size(Stack<T>* stack) {
	
	T count;

	while (stack->_data != 0) {
		stack->_next;
		count++;
	}

	return count;
}

