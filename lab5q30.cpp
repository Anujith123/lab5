//including library
#include<iostream>
using namespace std;
int main()
{
// assigning variables
int n,i;
// loop 
cout<<"The multiplication table of:";
cin>>n;
cout<<"The multiplication table of natural number"<<n<<endl;
for(int i=1,m ; i<=100; i++ ){
m=n*i;
cout<<n<<"*"<<i<<"="<<m<<endl;
}
return 0;
}
