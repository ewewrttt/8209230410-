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
	cout << "英文字母的个数为："<< a << endl;
	
	cout << "数字的个数为："<< b << endl;
	
	cout << "空格的个数为："<< c << endl;
	
	cout << "其他字符的个数为："<< d <<endl;
		
	return 0;
}
