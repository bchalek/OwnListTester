#include "List.h";
#pragma once
class Stack
{
public:
	List stack;

	Stack(void);
	Stack(void* object);
	~Stack(void);

	int Count();
	bool Any();
	void Push(void* object);
	void* Pop();
	void* Peek();
};

