#include <iostream>

int main()
{
	int a = 3, b = 2;

	//����� �������������� ����
	double � = (double)a / b;

	std::cout << � << "\n";

	//������� �������������� ����
	//���������� double � int ������ �������
	int d = �;

	std::cout << d << "\n";


	return 0;
}