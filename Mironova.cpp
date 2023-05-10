// Mironova.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#define random(a, b) a+rand()%(b+1-a)




//#7
//void foo(int** array, int** array1)
//{
//	int size1= _msize(array) / sizeof(array[0]);
//	int size2 = _msize(array[0]) / sizeof(array[0][0]);
//		for (int i = 0; i < size1; i++)
//		{
//			for (int j = 0; j < size2; j++)
//			{
//				array1[i][j] = array[i][j];
//             }
//	    }
//	
//}

//#8
void dellArray(int*& array8, int a8)
{
	int size8 = _msize(array8) / sizeof(array8[0]);
	int* buf = new int[size8 - 1];
	for (int i = 0; i < a8; i++)
	{
		buf[i] = array8[i];
	}
	for (int j = a8 + 1; j < size8; j++)
	{
		buf[j - 1] = array8[j];
	}


	delete array8;
	array8 = buf;
}


//#9
void Foo(int**& array9, int *&array10, int l)
{
	int size1 = _msize(array9) / sizeof(array9[0]);
	int size2 = _msize(array9[0]) / sizeof(array9[0][0]);

	int** buf = new int*[size1 + 1];
	for (int i = 0; i < l; i++)
	{
		buf [i] = array9[i];
	}
	buf[l] = new int [size2];
	for (int k = 0; k < size2; k++)
	{
		buf[l][k] = array10[k];
	}

	for (int j = l ; j < size1; j++)
	{
		buf[j + 1] = array9[j];
	}
	delete[] array9;
	array9 = buf;

}

//#14

struct Avto
{
	string color;
	string model;
};

int main()
{
	/*# 1*/
	float a1, b1, c1, d1;
	cin >> a1 >> b1 >> c1 >> d1;
	cout << (a1 + b1 + c1 + d1) / 4;
	cout << endl;
	cout << endl;
	//#2
	for (int i = 2; i < 41; i++)
	{
		cout << i++ << " ";
	}
	cout << endl;
	//#3
	int n3;
	cin >> n3;
	for (int i = 0; i <= n3; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}
	cout << endl;
	/*#4*/
	int a4;
	int counter4 =1;
	cin >> a4;
	while (a4 > 9)
		{
		a4/= 10;
		counter4++;
	     }
	cout << counter4;
	cout << endl;
	//#5
	const int SIZE5 = 20;
	int array5[SIZE5];
	int m5, n5;
	cin >> m5 >> n5;
	for (int i = 0; i < SIZE5; i++)
	{
		array5[i] = random(m5, n5);
		cout << array5[i] << " ";
	}

	cout << endl;
	cout << "6" << endl;
	/*#6*/
	int size16 = 5;
	int size26 = 10;
	int c6 = 5;
	int d6 = 60;
	int** array6 = new int* [size16];

	for (int i = 0; i < size16; i++)
	{
		array6[i] = new int[size26];
		for (int j = 0; j < size26; j++)
		{			
			array6[i][j] = random(c6, d6);
		    cout << array6[i][j] << " ";
		}
		cout << endl;
	}
	
	int *arr=new int[size16];
	int max = 0;
	int index = 0;
	for (int i = 0; i < size16; i++)
	{
		
		for (int j = 0; j < size26; j++)
		{
			arr[i] += array6[i][j];
		}
		if (arr[i] > max) max = arr[i];
		index = i;
	}
	cout << "Max Row  " << index;

	cout << endl;
	cout << "8" << endl;
	/*#8*/
	int size8 = 10;
	int* array8 = new int[size8];
	for (int i = 0; i < size8; i++)
	{
		array8[i] = random(5, 50);
	}
	for (int i = 0; i < size8; i++)
	{
		cout << array8[i] << " ";
	}
	cout << endl;

	dellArray(array8, 4);
	for (int i = 0; i < size8; i++)
	{
		cout << array8[i] << " ";
	}
	cout << endl;

	/*	#14*/

	cout << "14" << endl;
	string color[]{ "red", "grey" };
	string model[]{ "opel", "mazda", " toiota" };
	Avto* array14 = new Avto[3];
	for (int i = 0; i < 3; i++)
	{
		array14[i].color = color[random(0, 1)];
		array14[i].model = model[random(0, 2)];
		cout << "Color " <<array14[i].color << " Model " << array14[i].model;
		cout << endl;
	}
	cout << endl;

	/*#9*/
	cout << "9" << endl;
	int** array9 = new int* [5];
	for (int i = 0; i < 5; i++)
	{
	    array9[i] = new int[3];
		for (int j = 0; j < 3; j++)
		{
			array9[i][j] = random(2, 60);
			cout << array9[i][j] << " ";
		}
		cout << endl;
	}
	int* array10=new int[3] { 15, 15, 15};
	cout << endl;

	Foo(array9, array10, 2);

	for (int i = 0; i < 5; i++)
	{
		
		for (int j = 0; j < 3; j++)
		{
			
			cout << array9[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}


