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
	cout << "������������������";
	cin >> a >> b;
	cout << "���������������Լ��Ϊ��" << yue(a, b) << endl;
	int e = yue(a, b);
	int c = a / e;
	int d = b / e;
	int j = c * d * e;
	cout << "��������������С������Ϊ��" << j << endl;
	return 0;
}