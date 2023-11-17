#include <iostream>
using namespace std;

int main()
{
    char a;
    double num1, num2;

    cout << "输入运算符：+、-、*、/ 、%: ";
    cin >> a;

    cout << "输入两个数: ";
    cin >> num1 >> num2;

    switch (a)
    {
    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    case '/':
        if (num2 == 0)
        {
            cout << "除数不能为0.";
            break;
        }
        else
        {
            cout << num1 / num2;
            break;
        }
    case '%':
        cout << (int)num1 % (int)num2;
        break;
    default:
        
        cout << "错误!  请输入正确运算符。";
        break;
    }

    return 0;
}