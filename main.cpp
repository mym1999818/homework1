#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int i, k, n;
	cout << "������Ҫת����ʮ��������" << endl;
	cin >> n;
	cout << "������Ҫת�������ƣ�2��8��16����" << endl;
    cin >> k;
		if (k == 2) {
			if (n == 0) {
				cout << "���Ϊ" << n << endl;
			}
			else
			{
				while (n != 0) {
					cout << n % 2;
					n = n / 2;
				}
				cout << "Ϊ����";
				cout << "�Ƿ�Խ�������ʣ�" << endl;
				cout << "���밴1��û�а�0" << endl;
				cin >> i;
				if (i == 1) {
					cout << "�뷴������" << endl;
				}
				else if (i == 0) {
					cout << "ллʹ��" << endl;
				}
				else {
					cout << "��ʺ����" << endl;
				}
			}
		}
		else if (k == 8) {
			if (n == 0) {
				cout << "���Ϊ" << n << endl;
			}
			else
			{
				while (n != 0) {
					cout << n % 8;
					n = n / 8;
				}
				cout << "Ϊ����";
				cout << "�Ƿ�Խ�������ʣ�" << endl;
				cout << "���밴1��û�а�0" << endl;
				cin >> i;
				if (i == 1) {
					cout << "�뷴������" << endl;
				}
				else if (i == 0) {
					cout << "ллʹ��" << endl;
				}
				else {
					cout << "��ʺ����" << endl;
				}
			}
		}
		else if (k == 16) {
			if (n == 0) {
				cout << "���Ϊ" << n << endl;
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
				cout << "Ϊ����";
				cout << "�Ƿ�Խ�������ʣ�" << endl;
				cout << "���밴1��û�а�0" << endl;
				cin >> i;
				if (i == 1) {
					cout << "�뷴������" << endl;
				}
				else if (i == 0) {
					cout << "ллʹ��" << endl;
				}
				else {
					cout << "��ʺ����" << endl;
				}
			}
		}
		else {
			cout << "�ݲ�֧����������" << endl;
		}
		system("pause");
		return 0;
}
