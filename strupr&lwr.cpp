//A PROGRAM TO PERFORM STRING OPERATIONS (STRING LENGTH, UPPER CASE, LOWER CASE)
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
void main()
{
charstr[50];
intch,i;
clrscr();
cout<<"enter the string";
gets(str);
cout<<"enter what u want to do with your string:\n1.stringlength\n2.in upper case\n3.in lower case\n";
cin>>ch;
switch(ch)
 {
case 1: cout<<"length of the string is"<<strlen(str);
	break;
case 2: cout<<"string in upper case is";
	for(i=0;i<strlen(str);i++)
	{
	str[i]=toupper(str);
	}
	puts(str);
	break;
case 3: cout<<"string in lower case is";
	for(i=0;i<strlen(str);i++)
	{
	str[i]=tolower(str);
	}
	puts(str);
	break;
 }
getch();
}