#include "Stack.hpp"

template <class T, size_t size> Stack <T, size>::Stack() :top(0), fehler(false) {

}
template <class T, size_t size> Stack <T, size>::~Stack() {

}
template <class T, size_t size> void Stack <T, size>::pop(T& refElement) {
	fehler = (top == 0);
	if (!fehler) {
		refElement = stackElemente[--top];
	}
}
template <class T, size_t size>T Stack <T, size>::pop() {
	if (top == 0)
	{
		return 0;
	}
	return stackElemente[--top];
}
template <class T, size_t size> void Stack <T, size>::push(const T element) {
	fehler = (top == size);
	if (!fehler) {	
		stackElemente[top++] = element;
	}
}
template <class T, size_t size> bool Stack <T, size>::isEmpty() {
	return (top == 0);
}
template <class T, size_t size> bool Stack <T, size>::isError() {
	return fehler;
}