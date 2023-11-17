#include<iostream>
using namespace std;
int main() {
	float a = 0.1f;
	float b = 0.2f;
	float c = 0.3f;
	FLAG:cout << "请分别输入三条边："<<endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c&&b+c>a&&a+c>b) {
		float d = a + b + c;
		cout << "三角形的周长为：" << d << endl;
		if (a == b || b == c || a == c) {
			cout << "三角形为等腰三角形" << endl;
		}
		else {
			cout << "三角形不为等腰三角形" << endl;
		}
	}
	else {
		cout << "三条边不构成三角形，请重新输入" << endl;
		goto FLAG;
	}
	return 0;
}