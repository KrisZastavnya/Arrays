#include<iostream>
using namespace std;

//#define VAR_1
void main()
{
	setlocale(LC_ALL, "");
	int decimal;       //���������� �����
	cout << "������� ���������� �����: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};  //���� ������ ����� ������� ������� ��������� �����
#ifdef VAR_1
    int i = 0;
	while (decimal > 0)
	{
		bin[i] = decimal % 2;    //�������� ������� ������ �����
		i++;                     //��������� � ���������� �������
		decimal /= 2;            //������� ������� ������
	}
#endif // VAR_1
	int i = 0;
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);

	for (--i; i >= 0; i--)
	{
		cout << bin[i]; 
		if ((i & 7) == 0)cout << " ";
		if ((i & 3) == 0)cout << " ";
	}
	cout << endl;

}