// OwnListTester.App.cpp : Defines the entry point for the console application.
// compile with: cl /EHsc Stack.cpp /link OwnListTester.Data.lib

#include "stdafx.h"
#include "Stack.h"
#include "Buffer.h"
void TestBuffer();
void TestStack();

int main()
{
	TestStack();
	TestBuffer();


    return 0;
}

void TestBuffer()
{
	int testObject1 = 1;
	bool testObject2 = true;
	char testObject3 = '1';

	Buffer testBuffer;
	testBuffer.Push(&testObject1);
	testBuffer.Push(&testObject2);
	testBuffer.Push(&testObject3);

	int * temp1 = (int*)testBuffer.Pop();
	bool* temp2 = (bool*)testBuffer.Pop();
	char * temp3 = (char*)testBuffer.Pop();

	int result1 = *temp1;
	bool result2 = *temp2;
	char result3 = *temp3;
}


void TestStack()
{
	int testObject1 = 1;
	bool testObject2 = true;
	char testObject3 = '1';

	Stack testStack;
	testStack.Push(&testObject1);
	testStack.Push(&testObject2);
	testStack.Push(&testObject3);

	char* temp3 = (char*)testStack.Pop();
	bool* temp2 = (bool*)testStack.Pop();
	int* temp1 = (int*)testStack.Pop();

	int result1 = *temp1;
	bool result2 = *temp2;
	char result3 = *temp3;
}