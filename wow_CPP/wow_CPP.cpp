// wow_CPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int add_numbers(int x, int y);
int main()
{
	cout << add_numbers(23, 98);
    return 0;
}

int add_numbers(int x, int y) {
	int sum = x + y;
	return sum;
}
