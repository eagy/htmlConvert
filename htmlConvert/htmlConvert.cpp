// htmlConvert.cpp : Defines the entry point for the console application.
// Version 0.50
// Programmer: Daniel J Eagy
// tester

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	ifstream ins;
	ofstream outs;
	char next;

	ins.open("test.cpp");
	outs.open("new.html");

	outs << "<pre>\n";
	ins.get(next);

	while (!ins.eof()) {
		if (next == '<') {
			outs << "&lt;";
		}
		else if (next == '>') {
			outs << "&gt;";
		}
		else
			outs.put(next);
		ins.get(next);
	}
	outs << "</pre>";


	ins.close();
	outs.close();
    return 0;
}

