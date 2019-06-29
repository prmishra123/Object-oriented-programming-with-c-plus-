//A PROGRAM FOR EXCEPTION OF DIVISION BY ZERO
#include <iostream>
using namespace std;
void divide()
{ 
inta,b;
cout<<"Enter two no.";
cin>>a>>b;
if(b==0)
throw 1;
cout<<"Division = "<<a/b;
}   
int main()
{  
try
    {
divide();
    }
catch(int x)
    {   
cout<<"Division not possible"; }
}
//A PROGRAM FOR EXCEPTION HANDLING USING CONSTRUCTOR AND DESTRUCTOR
#include <iostream>
using namespace std;
class test
{public:
test()
    {
cout<<"Its a constructor\n";
    }
    ~test()
    {
cout<<"Its a destructor\n";
    }
};
int main()
{
try
{
cout<<"Want to exception handling\n";
test t;
throw 10;
cout<<"Testing destructor\n";
    }
catch(...)
{
cout<<"Thank U\n";
    }
}
//A PROGRAM ON EXCEPTIONAL HANDLING USING THROW KEYWORD IN A FUNCTION & USING IN MAIN FUNCTION
#include <iostream>
using namespace std;
int main()
{
try
    {
cout<<"Before throw\n";
throw 1;
cout<<"After throw\n";
    }
catch(int x)
    {
cout<<x<<" is print\n";
    }
cout<<"Thank U";
}










