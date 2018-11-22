#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string generator(string msg,string crc)
{
	string rem;
	int m=msg.length();
	int n=crc.length();
	rem+=msg;
	for(int i=1;i<=n-1;i++)
		rem+='0';
	for(int i=0;i<=rem.length()-n; )
	{
		for(int j=0;j<n;j++)
			rem[i+j]=rem[i+j]==crc[j]? '0':'1';
		while(i<rem.length()&&rem[i]!='1')
		    i++;
	}
	rem=rem.substr(rem.length()-n+1);
	 
	return msg+rem;
}
int main()
{
	ofstream out;
	out.open ("output.txt");	
	string msg,crc;
	cin>>msg;cin>>crc;
	out << msg<<"	Message"<<endl<<crc<<"	Generator function"<<endl;
	string gen=generator(msg,crc);
	cout<<gen<<endl;
	cout<<crc<<endl;
	out<< gen<<"	output"<<endl<<"---------------------------"<<endl;
	out.close();
	return 0;
}
