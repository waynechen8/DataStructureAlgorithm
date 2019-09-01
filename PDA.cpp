#include<iostream>
//git test add one line
using namespace std;

int fib(int);

int main()
{
    int i, n;
    cout<<"翻?聶矇瞻J穢?簫n簫p繙璽簡?織X簫?繞O竅O翹?礎C癒G";
    cin>>n;
    for(i=0;i<=n;i++)
        cout<<"fib("<<i<<")="<<fib(i)<<endl;
    return 0;
}


int output[1000]={0}

int fib(int n)
{
    int result;
    result = output[n];
    if (result==0)
    {
        if(n==0)
            return 0;
	if(n==1)
	    return 1;
        else
            return (fib(n-1)+fib(n-2));
	output[n]=result;
    }
    return result;
}
