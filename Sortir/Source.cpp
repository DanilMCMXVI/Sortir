#include <iostream>

using namespace std;

int main()
{
	setlocale(0,"");

	int y, size,score;

		cout << "Введите количество чисел используемых в сортировке: ";//даем пользователю задать размер массива
		cin >> size;
		float* arr = new float[size]; //для того чтобы размерность задавалась переменной мы используем динамический массив
		cout << endl;
		
		for (int i = 0; i < size; i++)//пользователь вводит числа для сортировки
		{
			score = i + 1;
			cout << "Введите  " << score  << "-ое число: " << endl;
			cin >> arr[i];//идет присвоение элементам массива чисел вводимых пользователем
			system("cls");
		}
		cout << "Введеные вами числа";
		for (int i = 0; i < size; i++)//выводим массив для проверки
		{
			cout << arr[i] << " ";
		}

		cout << endl<< endl;
		cout << "Выберите порядок сортировки.\n1. Сортировать по возростанию 2. Сортировать по убыванию "<<endl;
		cin >> y;//без комментариев

		switch (y)
        {
			case 1:
				float replac; //переменная для замены так и называется,ну почти

				for (float i = 0; i < size - 1; ++i) //цикл сортировки по возростанию
				{
					for (int j = 0; j < size - 1; ++j)
					{
						if (arr[j] > arr[j + 1])//процес замены 
						{
							replac = arr[j + 1];
							arr[j + 1] = arr[j];
							arr[j] = replac;

						}

					}

				}
				score = 1;//условие для вывода готового резльтата
				break;

			case 2: 
				float replac2;
				for (float i = 0; i < size - 1; i++)//цикл сортировки по возростанию
				{
					for (int j = 0; j < size - i - 1; j++)
					{
						if (arr[j] < arr[j + 1])
						{
							replac2 = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = replac2;
						}
					}
				}
				score = 1;
				break;
			

			default://хрень активируется если пользователь введет хрень
				cout << "Error " << endl;
				break;
		}

		
		if (score == 1)//выводим результат или не выводим зависит от пользователя)
		{
			for (int i = 0; i < size; i++)
			{
				cout << arr[i] << " ";
			}

			cout << endl;
		}
		

	system("pause");
	return 0;

}