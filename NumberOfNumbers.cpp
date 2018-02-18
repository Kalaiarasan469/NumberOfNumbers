#include <iostream>
using namespace std;
class Number
{
int n,s,i=0;
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>n;
	}
int chck()
{
    	cout<<"OUTPUT"<<endl;
    	s=n;
while(s%10!=0)
    {
i++;
s=s/10;
}
return i;
}
};
int main()
{
Number n;
n.get();
cout<<n.chck();
return 0;
}