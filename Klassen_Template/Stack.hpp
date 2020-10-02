#pragma once

template <typename T, size_t size = 100>
class Stack
{
public:
	Stack();
	~Stack();

	// Bewegungsmethoden
	void push(const T element);
	T pop();
	void pop(T& element);

	// Meldungsmethoden
	bool isEmpty();
	bool isError();

private: 
	T stackElemente[size];
	size_t top;
	bool fehler;
};