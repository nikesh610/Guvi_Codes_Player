#include <iostream>
using namespace std;

int main() {
   int n;
   cin>>n;
   int s=0;
   while(n!=0)
   { 
   	int r=n%10;
   	s=s*10+r;
   	n=n/10;
   }
   cout<<s;
}
