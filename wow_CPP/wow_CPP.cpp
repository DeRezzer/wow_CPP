// wow_CPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class MartinsClass {
public:
	MartinsClass(string z) {
		setName(z);
	}
	void setName(string x) {
		name = x;
	}
	string getname() {
		return name;
	}
private:
	string name;
};

int main()
{
	MartinsClass myObject("I am a really cool program, check me out!");
	cout << myObject.getname() << endl;;

	MartinsClass myObject2("Burgers are freaking delicious, yum!");
	cout << myObject2.getname() << endl;
    return 0;
}

