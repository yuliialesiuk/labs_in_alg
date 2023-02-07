// Задано натуральне число. Створити стек з його цифр.


#include <iostream>
#include <stack>
using namespace std;

int digit(int n);

int main()
{
    int n;
    cout << "enter your number" << endl;
    cin >> n;
    digit(n);

}

int digit(int n)
{
    stack<int> stack;
    if (n == 0) {
        return 0;
    }
    else {

        int dig = (n % 10);
        stack.push(dig);
        digit(dig);
    }
}
