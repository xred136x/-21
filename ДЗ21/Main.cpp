// ������ ������ � ������� ������������� �������
#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "������� ��� �����\n";
	cin >> x >> y;
	int* px = &x;
	int* py = &y;
	cout << "��.���� = " << double(*px + *py) / 2;


	return 0;
}