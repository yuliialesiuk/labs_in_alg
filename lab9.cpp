// lab9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
using namespace std;

int digit(int n) {
    if (n == 0) {
        return 0;
    }
    else {

        int dig = (n % 10);
        stack.push(dig);
        digit(dig);
    }

}

int main()
{
    stack<int> stack;
    int n;
    cout << "enter your number" << endl;
    cin >> n;
    digit(n);

}


