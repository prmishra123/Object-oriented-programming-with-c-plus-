//A PROGRAM USING OPERATOR OVERLOADING FOR PRE INCREMENT & POST INCREMENT

#include<iostream.h>
#include<conio.h>
class integer{
	int x;
	public:
voidsetdata(int a)
{
	x=a;
	}
voidshowdata()
{
	cout<<"x is\t"<<x;
	}
integer operator++()
{
	integer i;
	i.x=++x;
	return i;
	}
integer operator++(int)
{
	integer i;
	i.x=x++;
	return i;
	}
};
int main()
{
int a;
clrscr();
cout<<"\nEnter Value(x):\t";
cin>>a;
integer i1,i2;
i1.setdata(a);
 i2=i1++;
cout<<"\nPost Incremented value of ";
i2.showdata();
i1.setdata(a);
 i2=++i1;
cout<<"\nPre Incrementedvalue of ";
i2.showdata();
getch();
return 0;
 }




