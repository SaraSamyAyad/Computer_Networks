#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void verifier(string message,string crc)
{
	ofstream out;
	out.open ("output.txt",ios_base::app);
	string remainder;
	int m=message.length();
	int n=crc.length();
	remainder+=message;
	for(int i=1;i<=n-1;i++)
		remainder+='0';
	for(int i=0;i<=remainder.length()-n; )
	{
		for(int j=0;j<n;j++)
			remainder[i+j]=remainder[i+j]==crc[j]? '0':'1';
		for( ;i<remainder.length()&&remainder[i]!='1';i++);
	}
	remainder=remainder.substr(remainder.length()-n+1);
	int flag=0;
	for (int i=0;i<remainder.length();i++)
	{
	 if (remainder[i]=='1')
	 {
	     flag=1;
	     break;
	 }
	}
	if (flag==0) {cout<<"message is correct"<<endl;out<<"message is correct"<<endl;}
	else {cout<<"message is not correct"<<endl;out<<"message is not correct"<<endl;}
	out.close();

}

int main(){
	string crc,msg;
	cin>>msg;cin>>crc;
	verifier(msg,crc);	
	return 0;
}
