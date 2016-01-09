#include "Stack.h"

Stack::Stack(void)
{
	//stack = new List(nullptr);
}

Stack::~Stack(void)
{
	stack.~List();
}

Stack::Stack(void* object)
{
	stack = new List(object);
}

int Stack::Count()
{
	return stack.Count;
}

bool Stack::Any()
{
	return stack.Any();
}

void Stack::Push(void* object)
{
	stack.Add(object);
}

void* Stack::Pop()
{
	void* lastObject = stack.LastOrDefault();
	stack.Remove(lastObject);
	return lastObject;
}

void* Stack::Peek()
{
	return stack.LastOrDefault();
}