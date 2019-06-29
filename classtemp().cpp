/*WRITE A  PROGRAM TO  DEMONSTRATE  THE  USE OF SPECIAL  FUNCTIONS CONSTRUCTIOR & DESTRUCTOR IN THE CLASS TEMPLATE.PROGRAM IS TO FIND BIGGER OF TWO ENTERED NUMBERS.*/ 

#include<iostream.h>
#include<conio.h>
template<class t>
class test
{

	private:
	t a,b;
	public:
	test(t x,t y)
	{
	a=x;
	b=y;
	}
	void show()
	{
	if(a>b)
	{
	cout<<a<<" is greater than "<<b;
	}
	else
	{
	cout<<b<<" is greater than "<<a;
	}
	}
	~test() { }
	};
	int main()
	{
	int a,b;
	clrscr();
	cout<<"\n enter two nos. to find the biggest"<<endl;
	cin>>a>>b;
	test <int> t1(a,b);
	t1.show();
	return 0;
	getch();
	}

