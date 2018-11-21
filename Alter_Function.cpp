#include <iostream>
#include <string>
using namespace std;

string alter (string msg, int bitPosition, char newValue){
	msg.at(bitPosition) = newValue;
	return msg;
}

int main ()
{
	return 0;
}
