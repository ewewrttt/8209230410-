#include<iostream>
using namespace std;
int main() {
	float x = 0.3f;
	float y = 0.4f;
	cout << "������x��ֵ��";
	cin >> x;
	if (0 < x&&x < 1) {
		int a = 3;
		int b = 2;
		y = a - b * x;
	}
	else if(1<=x&&x<5){
		float c = 0.5;
		float d = 1 / x;//�������ȥ��С��
		y = c * d + 1;
	}
	else if (5 <= x&&x < 10) {
		y = x * x;
	}
	cout << y << endl;
}