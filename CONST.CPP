#include<iostream.h>
#include<conio.h>
class demo
{
	int a,b,c;
	public:
	demo(int x,int y,int z)
	{
		a=x;
		b=y;
		c=z;
		cout<<"\n objects are:"<<a<<" "<<b<<" "<<c;
	}
};
int main()
{
	clrscr();
	demo obj(1,2,3);
	getch();
	return 1;
}