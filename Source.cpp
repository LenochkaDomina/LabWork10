#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cout << "413 Domina Olena Variant 10" << endl;
	cout << "Enter 8 for LabWork_8 or 9 for LabWork_9" << endl;

	int lab;
	cin >> lab;

	switch (lab)
	{
	case 8:
	{
		cout << "Enter 1 for custom array or 0 for default array" << endl;
		int lab8;
		cin >> lab8;
		switch (lab8)
		{
		case 0:
		{
			vector<float > arr = { 2.8f, -3.5f, -2.1f, 4.0f, 6.0f, 8.1f, 6.2f, 9.5f, 1.1f };
			int j = 0;
			float s = 0.0f;

			for (int i = 0; i < arr.size(); i++)
			{
				cout << arr[i] << " ";
				if (arr[i] > 0 && j < 5)
				{
					s += arr[i];
					j++;
				}
			}

			cout << "\nSum = " << s << endl;
			break;
		}
		case 1:
		{
			vector<float> arr;
			cout << "What size of array do you want? (more than 5)" << endl;
			int size;
			cin >> size;
			arr.resize(size);

			for (int i = 0; i < size; i++)
			{
				cout << "Enter element "
					<< i + 1
					<< " = ";
				cin >> arr[i];
			}

			int k = 0;
			float s = 0.0f;

			for (int i = 0; i < arr.size(); i++)
			{
				if (arr[i] > 0 && k < 5)
				{
					s += arr[i];
					k++;
				}
			}
			cout << "Sum = " << s << endl;
			break;
		}
		default:
		{
			cout << "Enter 1 or 0";
			break;
		}
		}
		break;
	}
	case 9:
	{

		int numRow = 2, numCol = 5;
		//int arr[numRow][numCol] = { -8, 9, 11, -3, -15, 28, 10, -6, 21, -2 };
		//выделена память для массива
		int** ptr_mas = new int* [numRow];
		for (int i = 0; i < numRow; i++)
			ptr_mas[i] = new int[numCol];

		//массив инициализирован для 2 рядов с 5 столбцами
		ptr_mas[0] = new int[numCol] { -8, 9, 11, -3, -15 };
		ptr_mas[1] = new int[numCol] { 28, 10, -6, 21, -2 };

		cout << "Enter 1 for custom array or 0 for default array" << endl;
		int lab9;
		cin >> lab9;

		switch (lab9)
		{
		case 0:
		{
			cout << "initial array" << endl;

			for (int i = 0; i < numRow; i++)
			{
				for (int j = 0; j < numCol; j++)
				{
					cout << ptr_mas[i][j] << " ";
				}
				cout << endl;
			}
			break;
		}

		case 1:
		{
			cout << "initial array" << endl;
			for (int i = 0; i < numRow; i++)
			{
				for (int j = 0; j < numCol; j++)
				{
					ptr_mas[i][j] = rand() % 200 - 100;
					cout << ptr_mas[i][j] << " ";
				}
				cout << "\n";
			}
			break;
		}
		default:
		{
			cout << "Enter 1 or 0";
			break;
		}
		}

		cout << "\nresulting array\n";

		for (int i = 0; i < numRow; i++)
		{
			for (int j = 0; j < numCol; j++)
			{
				if (ptr_mas[i][j] < 0)
				{
					ptr_mas[i][j] = j + 1;
				}
				cout << ptr_mas[i][j] << " ";
			}
			cout << endl;
		}
	}
	}
	return 0;
}