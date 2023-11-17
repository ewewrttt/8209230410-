#include<iostream>
using namespace std;
int main()
{

	const float a = 3.14f;
	int b = 1;
	int c = 2;
	cout << "请输入圆锥底的半径：" ;
	cin >> b;
	cout << "请输入圆锥底的锥高：";
		cin >> c;
		float e = 0.33f;
	double d =  e* a * b * b * c;
		cout << "圆锥体的体积为：" << d << endl;
	return 0;
}