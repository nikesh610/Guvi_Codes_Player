#include <iostream>
using namespace std;

int fact1=1;
int fact(int f);
int main() {
	int x;
	cin>>x;
	cout<<fact(x);
}
int fact(int f)
{
   if(f!=0){
	fact1=fact1*f;
	f--;
	fact(f);
   }
   else
   {
   	return fact1;
   }
}
