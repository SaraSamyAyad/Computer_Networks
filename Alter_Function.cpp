#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string alter (string msg, int bitPosition){
	if (msg[bitPosition]=='0')msg[bitPosition]='1';
	else msg[bitPosition]='0';
	return msg;
}

int main (int argc, char *argv[])
{
	int n=atoi(argv[1]);
	ofstream out;
	out.open ("output.txt",ios_base::app);
	string msg,crc;
	cin>>msg;cin>>crc;
	string altered = alter(msg,n-1); 
	cout<<altered<<endl;
	cout<<crc<<endl;
	out<<msg<<">> altered "<<n<<" bit >> "<<altered<<endl<<"---------------------------"<<endl;
	out.close();
	return 0;
}
