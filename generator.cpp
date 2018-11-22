#include <iostream>
#include<string>
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
	string msg,crc;
	cin>>msg;cin>>crc;
	cout<<generator(msg,crc)<<endl;
	cout<<crc<<endl;
	return 0;
}
