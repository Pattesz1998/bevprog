#include "std_lib_facilities.h"

int main()
{
int a;
int b;

cout<<"Adja meg az a tetszőleges értékét:";	
cin>>a;
cout<<"Adja meg az b tetszőleges értékét:";
cin>>b;

a=a+b;
b=a-b;
a=a-b;
cout<<a<<endl;
cout<<b<<endl;
return 0;
}

