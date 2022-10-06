// проэкт создан с помощью персонального шаблона
#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "¬ведите два числа\n";
	cin >> x >> y;
	int* px = &x;
	int* py = &y;
	cout << "—р.ариф = " << double(*px + *py) / 2;


	return 0;
}