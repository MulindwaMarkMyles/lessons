#include <iostream>
using namespace std;
int factorial(int the_num)
{
    if (the_num > 1 )
        return factorial(the_num - 1) * the_num;
    else
        return 1;
}


int main()
{
    /*char letter = 'a';
    (letter == 'a') ? cout << letter << endl : cout << "not the same" << endl; //the ternary operator(one line if else)
    return 0;*/
    /*do{
        cout << "No code here\n "; // the do while loop
    } while (1);*/
    //cout << factorial(50) << endl;
    int myarray[] = {1, 2, 3};
    cout << myarray[1] << endl;
    // the lambda function
    // [](int number) {cout << number << " " << endl;};
}