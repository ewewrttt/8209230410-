#include<iostream>
using namespace std;
#include <iomanip>
int main() {
	float a = 0.3f;
	cout << "�����뻪���¶ȣ�";
	cin >> a;
	 float b = 0.2f;
	int c = 32;
	float d = 1.8f;
	float e = a - c;
	b = e / d;
	cout << "����������¶�Ϊ��" <<fixed<<setprecision(2)<< b << endl;
	system("pause");
	return 0;
}