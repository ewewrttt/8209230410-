#include<iostream>
using namespace std;
int main() {
	float a = 0.1f;
	float b = 0.2f;
	float c = 0.3f;
	FLAG:cout << "��ֱ����������ߣ�"<<endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c&&b+c>a&&a+c>b) {
		float d = a + b + c;
		cout << "�����ε��ܳ�Ϊ��" << d << endl;
		if (a == b || b == c || a == c) {
			cout << "������Ϊ����������" << endl;
		}
		else {
			cout << "�����β�Ϊ����������" << endl;
		}
	}
	else {
		cout << "�����߲����������Σ�����������" << endl;
		goto FLAG;
	}
	return 0;
}