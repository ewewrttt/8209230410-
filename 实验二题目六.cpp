#include<iostream>
using namespace std;

int yue(int a, int b) {
	int i = min(a, b);
	for (i; a % i != 0 || b % i != 0; i--) {

	}
	return i;
}
int main() {
	int a, b;
	cout << "请输入两个正整数：";
	cin >> a >> b;
	cout << "两个正整数的最大公约数为：" << yue(a, b) << endl;
	int e = yue(a, b);
	int c = a / e;
	int d = b / e;
	int j = c * d * e;
	cout << "两个正整数的最小公倍数为：" << j << endl;
	return 0;
}