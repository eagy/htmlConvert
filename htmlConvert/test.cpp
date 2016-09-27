// htmlConvert.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>
using namespace std;


void test()
{
	ifstream ins;
	ofstream outs;
	char next;

	ins.open("test.cpp");
	outs.open("new.cpp");

	ins.get(next);

	while (!ins.eof()) {
		if (next == '<') {
			outs.put('&');
			outs.put('l');
			outs.put('t');
			outs.put(';');
		}
		else if (next == '>') {
			outs.put('&');
			outs.put('l');
			outs.put('t');
			outs.put(';');
		}
		else
			outs.put(next);

		ins.get(next);
	}



	ins.close();
	outs.close();
}