//C program to multiply two matrices (two-dimensional arrays) which will be entered by a user
//PROGRAM:-
#include<iostream.h>
#include<conio.h>

void main()
{
int i,j,a[10][10],b[10][10],pro[10][10],k,r1,c1,r2,c2;
clrscr();
cout<<"enter the rows and columns of first matrix";
cin>>r1;
cin>>c1;
cout<<"enter the rows and columns of second matrix";
cin>>r2;
cin>>c2;
cout<<"enter the elements of first matrix";
for(i=0;i<r1;i++)
 {
for(j=0;j<c1;j++)
   {
cin>>a[i][j];
    }
 }
cout<<"enter the elements of second matrix";
for(i=0;i<r2;i++)
 {
for(j=0;j<c2;j++)
   {
cin>>b[i][j];
   }
 }
cout<<"the resultant matrix is\n";
for(i=0;i<r1;i++)
 {
for(j=0;j<c2;j++)
   {
pro[i][j]=0;
for(k=0;k<r1;k++)
     {
pro[i][j]+=a[i][k]*b[k][j];
     }
   }
 }
for(i=0;i<r1;i++)
 {
for(j=0;j<c2;j++)
   {
cout<<pro[i][j];
cout<<"  ";
   }
cout<<endl;
 }
getch();
}