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



#include <iostream>

int main()
{
	int a = 0;
	int b = 0;

	std::cout << "Enter int a \n";
	std::cin >> a;

	std::cout << "Enter int b \n";
	std::cin >> b;

	std::cout << "Calculating: a != b - a * b \n";
	/*
	������� ����������� �������� ���������, ����� �������� ���������,
	����� �������� ��� �����, � ��������� ������� ����������� �������� �������� ����������
	*/
	int c = a != b - a * b;

	std::cout << "Answer:" << c << "\n";

	return 0;
}