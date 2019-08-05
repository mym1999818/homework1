#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int i, k, n;
	cout << "请输入要转换的十进制数：" << endl;
	cin >> n;
	cout << "请输入要转换的数制（2、8、16）：" << endl;
    cin >> k;
		if (k == 2) {
			if (n == 0) {
				cout << "结果为" << n << endl;
			}
			else
			{
				while (n != 0) {
					cout << n % 2;
					n = n / 2;
				}
				cout << "为果结";
				cout << "是否对结果有疑问？" << endl;
				cout << "有请按1，没有按0" << endl;
				cin >> i;
				if (i == 1) {
					cout << "请反过来读" << endl;
				}
				else if (i == 0) {
					cout << "谢谢使用" << endl;
				}
				else {
					cout << "吔屎了你" << endl;
				}
			}
		}
		else if (k == 8) {
			if (n == 0) {
				cout << "结果为" << n << endl;
			}
			else
			{
				while (n != 0) {
					cout << n % 8;
					n = n / 8;
				}
				cout << "为果结";
				cout << "是否对结果有疑问？" << endl;
				cout << "有请按1，没有按0" << endl;
				cin >> i;
				if (i == 1) {
					cout << "请反过来读" << endl;
				}
				else if (i == 0) {
					cout << "谢谢使用" << endl;
				}
				else {
					cout << "吔屎了你" << endl;
				}
			}
		}
		else if (k == 16) {
			if (n == 0) {
				cout << "结果为" << n << endl;
			}
			else {
				while (n != 0) {
					if (n % 16 == 10) {
						cout << "A";
					}
					else if (n % 16 == 11) {
						cout << "B";
					}
					else if (n % 16 == 12) {
						cout << "C";
					}
					else if (n % 16 == 13) {
						cout << "D";
					}
					else if (n % 16 == 14) {
						cout << "E";
					}
					else if (n % 16 == 15) {
						cout << "F";
					}
					else {
						cout << n % 16;
					}
					n = n / 16;
				}
				cout << "为果结";
				cout << "是否对结果有疑问？" << endl;
				cout << "有请按1，没有按0" << endl;
				cin >> i;
				if (i == 1) {
					cout << "请反过来读" << endl;
				}
				else if (i == 0) {
					cout << "谢谢使用" << endl;
				}
				else {
					cout << "吔屎了你" << endl;
				}
			}
		}
		else {
			cout << "暂不支持其他数制" << endl;
		}
		system("pause");
		return 0;
}
