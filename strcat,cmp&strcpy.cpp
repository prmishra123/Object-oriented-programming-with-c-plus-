//WRITE A PROGRAM TO PERFORM STRING OPERATIONS (STRCAT, STRCPY, STRCMP)
#include<iostream.h>
#include<process.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
class string1
{
char st[20];
public:
void accept()
{
	gets(st);
	}
void display()
{
	puts(st);
	}
string1 operator+(string1 s)
{
	string1 temp;
	strcpy(temp.st,st);
	strcat(temp.st," ");
	strcat(temp.st,s.st);
	return temp;
	}
	};
class string2
{
	char str[20];
	public:
	void accept()
	{
	gets(str);
	}
	void display()
	{
	puts(str);
	}
	string2 operator=(string2 s3)
	{
	strcpy(str,s3.str);
	return s3;
	}
	};
class string3
{
	char str[20];
	public:
	void getdata()
	{
	gets(str);
	}
	int  operator<=(string3 s)
	{
	if(strcmp(str,s.str))
	return 1;
	else
	return 0;
	}
	};
void main()
{
	clrscr();
	int z;
	cout<<"menu for string functions";
	cout<<"\n1.to concatenate 2 strings:";
	cout<<"\n2.to copy 1 string to another:";
	cout<<"\n3.to compare two strings:";
	cout<<"\n4.exit";
	cout<<"\nenter your choice:";
	cin>>z;
	switch(z)
	{
		case 1:
		{
		string1 s1,s2,s3;
		cout<<"to concatenate to strings:\n";
		cout<<"enter first string:\n";
		s1.accept();
		cout<<"enter second string:\n";
		s2.accept();
		s3=s1+s2;
		cout<<"concatenated string:\n";
		s3.display();
		break;
		}
		case 2:
		{
		string2 s1,s2;
		cout<<"to copy one string to another\n";
		cout<<"enter the string:\n";
		s1.accept();
		cout<<"before copying:\n";
		s2.display();
		s2=s1;
		cout<<"copied string:\n";
		s2.display();
		break;
		}
		case 3:
		{
		string3 s1,s2;
		cout<<"enter first string:\n";
		s1.getdata();
		cout<<"enter second string:\n";
		s2.getdata();
		if(s1<=s2)
		cout<<"strings are equal\n";
		else
		cout<<"strings are not equal\n";
		break;
		}
		case 4:
		{
		exit(0);
		break;
		}
		default:{
		cout<<"\n wrong choice!!!!\n";
		}
	}
getch();
}


