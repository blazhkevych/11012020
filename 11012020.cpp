// 11012020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	int dist, hours, min;
	cout << "Введите дистанцию (в км):";
	cin >> dist;
	cout << "Введите часы и минуты:" << endl;
	cin >> hours >> min;
	cout << dist / (double)(hours + min / 60.0) << "km\\h" << endl;
	system("pause");



	cout << P << "\n" << S << endl;



	/*int k = 1024;
	int a = 7024;

	long long gb = (long long)a * k * k * k;

	cout << gb << " bbbbbb";*/

	/*int a = 7024; // v mb
	long long gb= 1024ll*1024*1024*a;

	cout << gb << " bayt";*/

	/*int a = 10;
	int b = a-- + a--;
	cout << a << "\n";
	cout << b; */

	/*int a = 10;
	int b = --a + --a;
	cout << a << "\n";
	cout << b;*/




	/*int a = 10;
	int b = ++a + ++a;
	cout << a << "\n";
	cout << b; */



	/*int a = 10;
	int b = a++ + a++;
	cout << a << "\n";
	cout << b;*/


	/*int a = 10;
	int b = a++ + ++a;
	cout << a <<"\n";
	cout << b;*/


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file