#include <iostream>
#include <utility>

#include "dupliceater.h"

using namespace std;

int main(int argc, char** argv) {
	unique_ptr<ifstream> i_stream = make_unique<ifstream>("input.txt");
	unique_ptr<ofstream> o_stream = make_unique<ofstream>("output.txt");
	dupliceater(i_stream, o_stream);

	return 0;
}