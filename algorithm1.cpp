#include<iostream>
using namespace std;

int fib(int);

int main()
{
    int i, n;
    cout<<"�п�J�ҭn�p��ĴX�ӶO�O�ƦC�G";
    cin>>n;
    for(i=0;i<=n;i++)
        cout<<"fib("<<i<<")="<<fib(i)<<endl;
    return 0;
}

int fib(int n)
{
    if (n==0)
        return 0;
    else if(n==1 || n==2)
        return 1;
    else
        return (fib(n-1)+fib(n-2));
}
