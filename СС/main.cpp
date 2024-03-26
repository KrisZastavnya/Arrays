#include<iostream>
using namespace std;

//#define VAR_1
void main()
{
	setlocale(LC_ALL, "");
	int decimal;       //десятичное число
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};  //Этот массив будет хранить разряды двоичного числа
#ifdef VAR_1
	int i = 0;
	while (decimal > 0)
	{
		bin[i] = decimal % 2;    //Получаем младший разряд числа
		i++;                     //Переходим к следующему разряду
		decimal /= 2;            //Убираем младший разряд
	}
#endif // VAR_1
	int i = 0;
	//for(start;stop;step);
	//for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (; decimal; bin[i++] = (decimal & 1), decimal >>= 1);

	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0) cout << " ";
		if (i % 4 == 0) cout << " ";
	}
	cout << endl;
}