#include "Buffer.h"

Buffer::Buffer(void)
{
}

Buffer::~Buffer(void)
{
	buffer.~List();
}

Buffer::Buffer(void* object)
{
	buffer = new List(object);
}

int Buffer::Count()
{
	return buffer.Count;
}

bool Buffer::Any()
{
	return buffer.Any();
}

void Buffer::Push(void* object)
{
	buffer.Add(object);
}

void* Buffer::Pop()
{
	void* lastObject = buffer.FirstOrDefault();
	buffer.Remove(lastObject);
	return lastObject;
}

void* Buffer::Peek()
{
	return buffer.FirstOrDefault();
}