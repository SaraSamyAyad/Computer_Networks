#include <iostream>
#include <string>
using namespace std;

string alter (string msg, int bitPosition){
	if (msg[bitPosition]=='0')msg[bitPosition]='1';
	else msg[bitPosition]='0';
	return msg;
}

int main (int argc, char *argv[])
{
	int n=atoi(argv[1]);
	string msg,crc;
	cin>>msg;cin>>crc;
	cout<<alter(msg,n-1)<<endl;
	cout<<crc<<endl;
	return 0;
}
