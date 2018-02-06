// Source.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <vector>
#include <list>
#include <iostream>
#include <stack>
#include <string>
#include <map>
#include <time.h>

using namespace std;


void main()
{
	setlocale(0, "");
	srand(unsigned(time(0)));
#pragma region vector
	// работа с контейнером vector
	cout << "Введите размер вектора: ";
	int size;
	cin >> size;
	vector<int>v1(size, 0);
	for (int i = 0; i < size / 2; i++)
	{
		v1[i] = rand() % 100 - 50;
	}
	cout << "Сформирован вектор:\n";
	cout << "Емкость вектора: " << v1.capacity() << "\n";
	cout << "Размер вектора: " << v1.size() << "\n";
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << "\n";

	//dobavlenie elementov
	int m[5] = { 1,2,3,4,5 };
	cout << "Dobavlyaem element 100 v nachalo vectora\n";
	v1.insert(v1.begin(), 100);
	cout << "2 elementa 200 v nachalo so vtorogo\n";
	v1.insert(v1.begin() + 1, 2, 200);
	int number;
	cout << "Vvedite noviy element vectora: ";
	cin >> number;
	v1.push_back(number);
	cout << "Сформирован вектор:\n";
	cout << "Емкость вектора: " << v1.capacity() << "\n";
	cout << "Размер вектора: " << v1.size() << "\n";
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << "\n";

	v1.reserve(50);
	int n[5] = { 1,2,3,4,5 };
	cout << "Dobvlyaem 5 elementov v nachalo\n";
	v1.insert(v1.begin() + 3, m, m + 5);
	cout << "Dobavlyaem v konets\n";
	v1.insert(v1.end(), 100);
	cout << "Dobavili elementi:\n";
	cout << "Емкость вектора: " << v1.capacity() << "\n";
	cout << "Размер вектора: " << v1.size() << "\n";
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << "\n";

	v1.erase(v1.begin());
	v1.erase(v1.begin(), v1.begin() + 3);
	v1.pop_back();
	cout << "Udalili elementi:\n";
	cout << "Емкость вектора: " << v1.capacity() << "\n";
	cout << "Размер вектора: " << v1.size() << "\n";
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << "\n";
#pragma endregion

#pragma region list
	cout << "\n";
	list <int> l1(3);
	list<int>::iterator it = l1.begin();

	cout << "Razmer spiska: " << l1.size() << "\n";
	cout << "\n";
	l1.push_back(100);
	l1.push_front(200);

	cout << "Razmer spiska: " << l1.size() << "\n";
	for (it = l1.begin(); it != l1.end(); it++)
		cout << *(it) << " ";
	cout << "\n";

	l1.insert(l1.begin(), 300);
	it = l1.begin();
	cout << "Vvedite nomer pozitsii: \n";
	int pos; 
	int number1;
	cin >> pos;
	cout << "Vvedite znachenie: \n";
	cin >> number1;
	for (int i = 0; it != l1.end() && i < pos; i++, it++);
	if (it != l1.end()) l1.insert(it, number1);
	else cout << "Error\n";

	cout << "Razmer spiska: \n" << l1.size() << "\n";
	for(it = l1.begin(); it != l1.end(); it++)
		cout << *(it) << " ";
	cout << "\n";
#pragma endregion

	stack <int> s1;
	cout << "Razmer: " << s1.size() << "\n";
	cout << "Vvedite razmer: ";
	int len;
	cin >> len;

	for (int i = 0; i < len; i++)
	{
		cout << "vvedite element: ";
		int number2;
		cin >> number2;
		s1.push(number2);
	}

	cout << "Razmer: " << s1.size() << "\n";
	vector<int> v(0);
	while (!s1.empty())
	{
		v.push_back(s1.top());
		s1.pop();
	}
	vector<int>::iterator iv = v.begin();
	cout << "Razmer steka: " << s1.size() << "\n";
	for (iv = v.begin(); iv != v.end(); iv++)
		cout << *(iv) << " ";
	cout << "\n";

	map<int, string> mm;
	cout << "Razmer slovarya: " << mm.size() << "\n";
	map <int, string>::iterator mit;
	int size1;
	cout << "Vvedite kol-vo elementov: ";
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cout << "Vvedite element: ";
		string str;
		cin >> str;
		//sozdaem paru
		pair<int, string> p = make_pair(i, str);
		mm.insert(p);
	}
	for (int i = 0; i < mm.size(); i++)
	{
		cout << mm[i] << "\n";
	}


		

}

