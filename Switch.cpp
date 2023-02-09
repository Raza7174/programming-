#include<iostream>
using namespace std;
int main()
{
char op;
cout<<"enter the number";
cin>>op;
int a,b;
cout<<"enter two number for which operator perform";
cin>>a;
cin>>b;
switch (op)
{
case'+':
cout<<a+b;
break;
case '-':
cout<<a-b;
break;
case '/':
cout<<a/b;
break;
default:
cout<<"wrong number enter";
break;
}
return 0;
}
 