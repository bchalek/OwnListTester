#include "List.h";
#pragma once
class Buffer
{
public:
	List buffer;

	Buffer(void);
	Buffer(void* object);
	~Buffer(void);

	int Count();
	bool Any();
	void Push(void* object);
	void* Pop();
	void* Peek();
};

