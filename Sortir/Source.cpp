#include <iostream>

using namespace std;

int main()
{
	setlocale(0,"");

	int y, size,score;

		cout << "������� ���������� ����� ������������ � ����������: ";//���� ������������ ������ ������ �������
		cin >> size;
		float* arr = new float[size]; //��� ���� ����� ����������� ���������� ���������� �� ���������� ������������ ������
		cout << endl;
		
		for (int i = 0; i < size; i++)//������������ ������ ����� ��� ����������
		{
			score = i + 1;
			cout << "�������  " << score  << "-�� �����: " << endl;
			cin >> arr[i];//���� ���������� ��������� ������� ����� �������� �������������
			system("cls");
		}
		cout << "�������� ���� �����";
		for (int i = 0; i < size; i++)//������� ������ ��� ��������
		{
			cout << arr[i] << " ";
		}

		cout << endl<< endl;
		cout << "�������� ������� ����������.\n1. ����������� �� ����������� 2. ����������� �� �������� "<<endl;
		cin >> y;//��� ������������

		switch (y)
        {
			case 1:
				float replac; //���������� ��� ������ ��� � ����������,�� �����

				for (float i = 0; i < size - 1; ++i) //���� ���������� �� �����������
				{
					for (int j = 0; j < size - 1; ++j)
					{
						if (arr[j] > arr[j + 1])//������ ������ 
						{
							replac = arr[j + 1];
							arr[j + 1] = arr[j];
							arr[j] = replac;

						}

					}

				}
				score = 1;//������� ��� ������ �������� ���������
				break;

			case 2: 
				float replac2;
				for (float i = 0; i < size - 1; i++)//���� ���������� �� �����������
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
			

			default://����� ������������ ���� ������������ ������ �����
				cout << "Error " << endl;
				break;
		}

		
		if (score == 1)//������� ��������� ��� �� ������� ������� �� ������������)
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