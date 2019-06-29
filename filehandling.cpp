/*WRITE A PROGRAM TO READ THE CLASS OBJECT  OF STUDENT_ INFO SUCH AS NAME,AGE,HEIGHT AND WEIGHT 
FROM  THE   KEYBOARD AND TO STORE  THEM ON A SPECIFIED FILE  USING  READ()  AND  WRITE()  FUNCTIONS.
 AGAIN THE  SAME FILE IS OPENED FOR READING AND DISPLAYING OF THE FILE ON THE SCREEN.*/  
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
class student_info
{
private:
	char name[20];
	int age;
	char sex;
	float height,weight;
public:
	void input()
	{
	cout<<"enter name:";
	gets(name);
	cout<<"enter age:";
	cin>>age;
	cout<<"enter height(in cms):";
	cin>>height;
	cout<<"enter weight(in kgs):";
	cin>>weight;
	cout<<"enter the sex:";
	cin>>sex;
	}
	void output()
	{
	cout<<"name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
	cout<<"sex:"<<sex<<endl;
	cout<<"height:"<<height<<endl;
	cout<<"weight:"<<weight<<endl;
	}
	};
	void main()
	{
	clrscr();
	student_info s1,s2;
	fstream f1;
	f1.open("stu.dat",ios::out|ios::binary);
	cout<<"write to the file"<<endl;
	s1.input();
	f1.write((char*)&s1,sizeof(s1));
	f1.close();
	fstream infile;
	infile.open("stu.dat",ios::in|ios::binary);
	cout<<"reading the file"<<endl;
	while(infile.read((char*)&s2,sizeof(s2)))
	{
	s2.output();
	}
	infile.close();
	getch();
}

