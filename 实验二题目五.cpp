#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, a = 0, b = 0, c = 0, d = 0;
	while (n = getchar())
	{
		if (n == '\n')
			break;
		if (n >= 'a' && n <= 'z' || n >= 'A' && n <= 'Z')
			a++;
		else if (n >= '0' && n <= '9')
			b++;
		else if (n == ' ')
			c++;
		else
			d++;
	}
	cout << "Ӣ����ĸ�ĸ���Ϊ��"<< a << endl;
	
	cout << "���ֵĸ���Ϊ��"<< b << endl;
	
	cout << "�ո�ĸ���Ϊ��"<< c << endl;
	
	cout << "�����ַ��ĸ���Ϊ��"<< d <<endl;
		
	return 0;
}
