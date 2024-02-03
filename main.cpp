#include <stdio.h>
#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <thread>
using namespace std;

void Add(int num)
{
	num += 1;

	printf("Thread %d\n", num);
};

void Add2(int num)
{
	num += 2;

	printf("Thread %d\n", num);
};

void Add3(int num)
{
	num += 3;

	printf("Thread %d\n", num);
};


int main()
{
	int Num = 0;

	std::thread th1(Add, Num);
	std::thread th2(Add2, Num);
	std::thread th3(Add3, Num);

	th1.join();
	th2.join();
	th3.join();
	
	return 0;
}