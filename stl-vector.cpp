//A PROGRAM OF VECTOR CLASS USING STANDARD TEMPLATE  LIBRARY  (STL)

#include <iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{	
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"   ";

    }
    cout<<"\n";
}
int main()
{
    vector<int>v;
    cout<<"initial size="<<v.size()<<"\n";
    cout<<"initial capacity="<<v.capacity()<<"\n";
    int x;
    cout<<"enter 5 integer values:";
    for(int i=0;i<5;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"current  contents:\n";
    display(v);

    cout<<"size after adding 5 values:"<<v.size()<<"\n";
    cout<<"capacity after adding 5 values:"<<v.capacity()<<"\n";
    vector<int>::iterator itr=v.begin();
    itr=itr+2;
    v.insert(itr,2,9);
    cout<<"\ncontents after inserting with help of iterator:\n";
    display(v);
    cout<<"size after adding values:"<<v.size()<<"\n";
    cout<<"capacity after adding values:"<<v.capacity()<<"\n";
    cout<<"end\n";
    return 0;  
}


