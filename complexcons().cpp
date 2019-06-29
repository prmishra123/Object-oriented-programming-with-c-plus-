/*WRITE A PROGRAM TOPERFORM ADDITION OF TWO COMPLEX NUMBERS USING CONSTRUCTOR OVERLOADING.
1) CONSTRUCTOR WHICH TAKES NO ARGUMENT ,
2) CONSTRUCTOR WHICH TAKES ONE ARGUMENT,
3) CONSTRUCTOR WHICH TAKES 2 ARGUMENTS*/
#include<iostream.h>
#include<conio.h>

class complex
{
	int real,imag;
	public:
	complex()
	{  }
	complex(int a)
	{
	real=a;
	imag=a;
	}
	complex(int a,int b)
	{
	real=a;
	imag=b;
	}
	complex(complex &c)
	{
	 real=c.real;
	imag=c.imag;
	 }
	friend complex sum(complex,complex);
	void showdata();
};
complex sum(complex obj1,complex obj2)
{

  complex obj3;
  obj3.real=obj1.real+obj2.real;
  obj3.imag=obj1.imag+obj2.imag;
  return obj3;
  }
void complex::showdata()
{
cout<<"the addition oftwo nos. gives\n"<<real<<"+i"<<imag;
}
void main()
{
	int a,b,c;
	clrscr();
	complex c1;
	cout<<"enter for equal real & imaginary part";
	cin>>a;
	complex c2(a);
	cout<<"for different real & imaginary part";
	cin>>b>>c;
	complex c3(b,c);
	complex c4=sum(c2,c3);
	c4.showdata();
	getch();
}
