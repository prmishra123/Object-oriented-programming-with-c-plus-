//A PROGRAM TO FIND THE GREATER OF TWO GIVEN NUMBERS IN TWO DIFFERENT CLASSES USING FRIEND FUNCTION.

#include<iostream.h>
#include<conio.h>
class two;
class one
{
private:
int number;
public:
voidsetvalue(intnum)
{
number=num;
}
friendint greater(one a,two b);
};
class two
{
private:
int number;
public:
voidsetvalue(intnum)
{
number=num;
}
friendint greater(one a,two b);
};
int greater (one a,two b)
{
if(a.number>b.number)
returna.number;
else
returnb.number;
}
void main()
{
one a;
two b;
int num1,num2;
int number;
clrscr();
cout<<"enter two number of your choice\n";
cin>>num1>>num2;
a.setvalue(num1);
b.setvalue(num2);
cout<<"greater number is\n"<<greater(a,b);
getch();
}










