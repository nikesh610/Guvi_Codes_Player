#include <iostream>

using namespace std;

int main() {
	string str;
	cin>>str;
	int len=str.length();
	int val=0;
	for(int i=0;i<len;i++)
	{
		if(str[i]=='I')
		{
			val=val+1;
		}
		else if(str[i]=='V')
		{
			if(i!=0)
			{
			if(str[i-1]=='I')
			{
				val+=3;
			}
			else
			{
				val+=5;
			}
			}
			else
			{
				val+=5;
			}
		}
		else
		{
			val+=10;
		}
	}
	cout<<val;
}
