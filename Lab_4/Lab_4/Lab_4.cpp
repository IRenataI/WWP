#include <iostream>
#include <Windows.h>

int main()
{
	//������� ���������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//����� 1
	double a = 0, b = 0;

	std::cout << "������ �����" << "\n";
	std::cout << "������� ������ �����" << "\n";
	std::cin >> a;
	std::cout << "������� ������ �����" << "\n";
	std::cin >> b;

	double S = a * b;
	double P = 2 * (a + b);

	std::cout << "������������� �� ��������� " << a << " � " << b << ". P = " << P << " S = " << S << "\n\n";

	//����� 2
	double d = 0;
	double Pi = 3.14;

	std::cout << "������ �����" << "\n";
	std::cout << "������� �����" << "\n";
	std::cin >> d;

	double L = Pi * d;
	std::cout << "����� ���������� L = " << L << "\n\n";

	//����� 3
	double A = 0, B = 0;

	std::cout << "������ �����" << "\n";
	std::cout << "������� ������ �����" << "\n";
	std::cin >> A;
	std::cout << "������� ������ �����" << "\n";
	std::cin >> B;

	double mid = (A + B) / 2;
	std::cout << "������� ������� �������������� �������� " << a << " � " << b << " = " << mid << "\n\n";

	//����� 4
	double x = 0, y = 0;

	std::cout << "��������� �����" << "\n";
	std::cout << "������� ������ ����� �������� �� ����" << "\n";
	
	while (x == 0)
	{
		std::cin >> x;
	}

	std::cout << "������� ������ ����� �������� �� ����" << "\n";

	while (y == 0)
	{
		std::cin >> y;
	}

	x = x * x;
	y = y * y;

	std::cout << "����� " << x << " � " << y << ". ����� = " << x + y << " �������� = " << x - y << " ������������ = " << x * y << " ������� ��������� = " << x * x - y * y << "\n\n";

	//����� 5
	double X = 0, Y = 0;

	std::cout << "����� �����" << "\n";
	std::cout << "������� ������ ����� �������� �� ����" << "\n";

	while (X == 0)
	{
		std::cin >> X;
	}

	std::cout << "������� ������ ����� �������� �� ����" << "\n";

	while (Y == 0)
	{
		std::cin >> Y;
	}

	X = abs(X);
	Y = abs(Y);

	std::cout << "����� " << X << " � " << Y << ". ����� = " << X + Y << " �������� = " << X - Y << " ������������ = " << X * Y << " ������� ��������� = " << X * Y - X * Y << "\n\n";
}
