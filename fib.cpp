#include <iostream>

using namespace std;

int fib(int no)
{
if (no <= 0)
	return 0;
if (no == 1)
	return 1;
else
	return fib(no-1) + fib(no-2);
}

int main()
{
int the_num = 100;
cout << fib(the_num) << endl;
return 0;
}
