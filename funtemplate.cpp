//WRITE A PROGRAM TO DEFINE THE FUNCTION TEMPLATE FOR CALCULATING THE SQUARE OF THE GIVEN NUMBERS 
//WITH THE DIFFERENT DATA TYPES.
#include<iostream.h>
#include<conio.h>
template<class t>
	t square(t s)
	{
	t result;
	result=s*s;
	return result;
	}
	void main()
	{
	int i,ii;
	float x,xx;
	double y,yy;
	clrscr();
	cout<<"enter integer value:";
	cin>>i;
	cout<<"enter float value:";
	cin>>x;
	cout<<"enter double value:";
	cin>>y;		
	ii=square(i);
	xx=square(x) ;
	yy=square(y);
	cout<<"square of "<<i<<" is "<<ii<<endl;
	cout<<"square of "<<x<<" is "<<xx<<endl;
	cout<<"square of "<<y<<" is "<<yy<<endl;
	getch();
	}

