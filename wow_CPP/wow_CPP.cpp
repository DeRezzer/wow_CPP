// wow_CPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void print_fav_number(int x);
int main()
{
	print_fav_number(77);
    return 0;
}

void print_fav_number(int x) {
	cout << "Martin's favorite number is " << x << endl;
}
