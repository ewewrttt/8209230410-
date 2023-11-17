#include<iostream>
#include "cmath"
using namespace std;
int main() {
    
    double a;
    double  x1, x2;
    cout << "请输入一个数：";
    cin >> a;
    if (a > 0) {
        x1 = a;
        x2 = (x1 + a / x1) / 2;
        while (fabs(x1 - x2) >= 0.00001) {
            x1 = x2;
            x2 = (x1 + a / x1) / 2;

           
        }
        printf("该数的平方根为：%.5f", x2);
    }
    else if (a < 0) {
        double b = -a;
        x1 = b;
        x2 = (x1 + b / x1) / 2;
        while (fabs(x1 - x2) >= 0.00001) {
            x1 = x2;
            x2 = (x1 + b / x1) / 2;

           
        }
        printf("该数的平方根为：%.5f", -x2);
    }
    else {
        cout << "该数的平方根为："<<0 << endl;
    }
    return 0;
}
