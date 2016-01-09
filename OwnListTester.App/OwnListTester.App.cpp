

#include "stdafx.h"
#include "Stack.h"
#include "Buffer.h"
#include "TestObject.h"
#include <iostream>
using namespace std;

void TestBuffer();
void TestStack();
void Test();

int main()
{
	Test();
	system("pause");
	return 0;
}

void Test()
{
	Buffer testBuffer;
	Stack testStack;

	cout << "TestObject value:" << endl;
	TestObject testObject;

	cout << "\tBool value:";
	cin >> testObject.boolean;
	cout << "\tChar value:";
	cin >> testObject.character;

	cout << "\tInt value:";
	cin >> testObject.number;

	int testObject1;
	bool testObject2;
	char testObject3;

	cout << "Int value:";
	cin >> testObject1;

	cout << "Bool value:";
	cin >> testObject2;

	cout << "Char value:";
	cin >> testObject3;

	testBuffer.Push(&testObject);
	testBuffer.Push(&testObject1);
	testBuffer.Push(&testObject2);
	testBuffer.Push(&testObject3);

	testStack.Push(&testObject);
	testStack.Push(&testObject1);
	testStack.Push(&testObject2);
	testStack.Push(&testObject3);

	cout << endl << "Buffer visualizer" << endl << endl;

	TestObject * temp = (TestObject*)testBuffer.Pop();
	cout << "TestObject:" << endl << "\t"<< temp->boolean << endl << "\t" << temp->character << endl << "\t" << temp->number << endl;

	int * temp1 = (int*)testBuffer.Pop();
	int result1 = *temp1;
	cout << result1 << endl;

	bool* temp2 = (bool*)testBuffer.Pop();
	bool result2 = *temp2;
	cout << result2 << endl;

	char * temp3 = (char*)testBuffer.Pop();
	char result3 = *temp3;
	cout << result3 << endl;


	cout << endl << "Stack visualizer" << endl << endl;

	temp3 = (char*)testStack.Pop();
	result3 = *temp3;
	cout << result3 << endl;


	temp2 = (bool*)testStack.Pop();
	result2 = *temp2;
	cout << result2 << endl;

	temp1 = (int*)testStack.Pop();
	result1 = *temp1;
	cout << result1 << endl;

	temp = (TestObject*)testStack.Pop();
	cout << "TestObject:" << endl << "\t" << temp->boolean << endl << "\t" << temp->character << endl << "\t" << temp->number << endl;
}

void TestBuffer()
{
	cout << "Buffer visualizer" << endl << endl;

	//cout << "TestObject value:" << endl ;
	//TestObject testObject;

	//cout << "\tBool value:";
	//cin>>testObject.boolean;
	//cout << "\tChar value:";
	//cin>>testObject.character;
	//cout << "\tInt value:";
	//cin>>testObject.number;

	int testObject1;
	bool testObject2;
	char testObject3;

	cout << "Int value:";
	cin >> testObject1;

	cout << "Bool value:";
	cin >> testObject2;

	cout << "Char value:";
	cin >> testObject3;

	Buffer testBuffer;
	//testBuffer.Push(&testObject);
	testBuffer.Push(&testObject1);
	testBuffer.Push(&testObject2);
	testBuffer.Push(&testObject3);

	/*
		TestObject * temp = (TestObject*)testBuffer.Pop();
		cout << temp->boolean<<endl<<temp->character<<endl<<temp->number<<endl;*/



	while (testBuffer.Any())
	{
		void* tempObject = testBuffer.Pop();

		cout << tempObject << endl;
	}
	/*
		int * temp1 = (int*)testBuffer.Pop();
		int result1 = *temp1;
		cout << result1 << endl;

		bool* temp2 = (bool*)testBuffer.Pop();
		bool result2 = *temp2;
		cout << result2 << endl;

		char * temp3 = (char*)testBuffer.Pop();
		char result3 = *temp3;
		cout << result3 << endl;*/
}


void TestStack()
{
	cout << "Stuck visualizer" << endl << endl;

	cout << "TestObject value:" << endl;
	TestObject testObject;

	cout << "\tBool value:";
	cin >> testObject.boolean;
	cout << "\tChar value:";
	cin >> testObject.character;
	cout << "\tInt value:";
	cin >> testObject.number;

	int testObject1;
	bool testObject2;
	char testObject3;

	cout << "Int value:";
	cin >> testObject1;

	cout << "Bool value:";
	cin >> testObject2;

	cout << "Char value:";
	cin >> testObject3;

	Stack testStack;
	testStack.Push(&testObject);
	testStack.Push(&testObject1);
	testStack.Push(&testObject2);
	testStack.Push(&testObject3);

	char* temp3 = (char*)testStack.Pop();
	char result3 = *temp3;
	cout << result3 << endl;


	bool* temp2 = (bool*)testStack.Pop();
	bool result2 = *temp2;
	cout << result2 << endl;

	int* temp1 = (int*)testStack.Pop();
	int result1 = *temp1;
	cout << result1 << endl;

	TestObject *temp = (TestObject*)testStack.Pop();
	cout << temp->boolean << endl << temp->character << endl << temp->number << endl;
}