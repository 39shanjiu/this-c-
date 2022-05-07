#include <iostream>
using namespace std;

//template<typename T>
//void My_Swap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void func()
//{
//	cout << "func()" << endl;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	char c = '0';
//	func<int>();
//	My_Swap<int>(a, b);
//	cout << a << "  " << b << endl;
//	return 0;
//}

//template<typename T>
//void Sort(T arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j + 1 < sz; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				T temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	Sort<int>(arr,10);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << "  " ;
//	}
//	char s[] = "gfedcba";
//	Sort(s, strlen(s));
//	for (int i = 0; i < strlen(s); i++)
//	{
//		cout << s[i] << "  ";
//	}
//	return 0;
//}

//void pr(int a, int b)
//{
//	cout << "putong" << endl;
//}
//
//template<class T>
//void pr(T a,T b)
//{
//	cout << "muban" << endl;
//}
//
//int main()
//{
//	//pr<>(10, 20);
//	char c = 'a';
//	char b = 'b';
//	pr(c, b);
//	return 0;
//}
//
//template<class N,class T>
//class Person
//{
//public:
//	Person(N name, T age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	N m_Name;
//	T m_Age;
//};
//int main()
//{
//	Person<string,int> p1("Tom", 18);
//	cout << p1.m_Name << "  " << p1.m_Age << endl;
//
//	return 0;
//}

//class Person1
//{
//public:
//	void func1()
//	{
//		cout << " 1 " << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void func2()
//	{
//		cout << " 2 " << endl;
//	}
//};
//
//template<class T>
//class Person
//{
//public:
//	T obj;
//
//	void func()
//	{
//		obj.func1();
//	}
//
//	void f()
//	{
//		obj.func2();
//	}
//};
//
//int main()
//{
//	Person<Person1>p;
//	p.func();
//	return 0;
//}

//template<class N,class T>
//class Person
//{
//public:
//
//	Person(N name, T age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void Personshow()
//	{
//		cout << this->m_Name << endl;
//		cout << this->m_Age << endl;
//	}
//
//	N m_Name;
//	T m_Age;
//};
//
//void printfPerson1(Person<string, int>& p)
//{
//	p.Personshow();
//}
//template<class N,class T>
//void printfPerson2(Person<N,T>& p)
//{
//	p.Personshow();
//	cout << typeid(N).name() << endl;
//	cout << typeid(T).name() << endl;
//}
//
//template<class T>
//void printfPerson3(T& p)
//{
//	p.Personshow();
//	cout << typeid(T).name() << endl;
//}
//
//int main()
//{
//	Person<string, int>p("Tom", 18);
//	printfPerson3(p);
//	return 0;
//}
//
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	/*{
//		this->m_Name = name;
//		this->m_Age = age;
//	}*/
//
//	void showperson();
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//
//template<class T1, class T2>
//void Person<T1, T2>::showperson()
//{
//	cout << this->m_Name << "  " << this->m_Age << endl;
//}
//int main()
//{
//	Person<string, int>p("Tom", 18);
//	p.showperson();
//	return 0;
//}
//template<class T1, class T2>
//class Person;
//
//template<class T1, class T2>
//void showperson(Person<T1, T2>& p)
//{
//	cout << p.m_Name << "  " << p.m_Age << endl;
//}
//
//template<class T1,class T2>
//class Person
//{
//	friend void showperson<>(Person<T1,T2>&p);
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//int main()
//{
//	Person<string, int>p("Jerry", 18);
//	showperson(p);
//	return 0;
//}
/*
#include"Ä£°å.hpp"
template<class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->m_Arr = new T[this->m_Capacity];
	}

	MyArray(MyArray<T>& p)
	{
		this->m_Capacity = p.m_Capacity;
		this->m_Size = p.m_Size;
		this->m_Arr = new T[p.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->m_Arr[i] = p.m_Arr[i];
		}

	}
	MyArray& operator=(MyArray<T>& p)
	{
		if (!this->m_Arr)
		{
			delete[] this->m_Arr;
			this->m_Arr = NULL;
		}
		this->m_Capacity = p.m_Capacity;
		this->m_Arr = new T[this->m_Capacity];
		this->m_Size = p.m_Size;
		for (int i = 0; i < p.m_Size; i++)
		{
			this->m_Arr[i] = p.m_Arr[i];
		}
		return *this;
	}

	~MyArray()
	{
		if (!this->m_Arr)
		{
			delete[] this->m_Arr;
			this->m_Arr = NULL;
		}

	}
	void Add_Tail(T num)
	{
		this->m_Arr[this->m_Size] = num;
		this->m_Size++;
	}

	void Del_Tail()
	{
		if (this->m_Size == 0)
			return;
		this->m_Arr[this->m_Size - 1] = 0;
		this->m_Size--;
	}

	void showArr()
	{
		for (int i = 0; i < 5; i++)
		{
			cout << this->m_Arr[i] << " ";
		}
		cout << endl;
	}

private:
	T* m_Arr;
	int  m_Capacity;
	int m_Size;
};

int main()
{
	MyArray<int>arr1(10);
	arr1.Add_Tail(10);
	arr1.Add_Tail(20);
	MyArray<int>arr2 = arr1;
	arr2.Add_Tail(30);
	arr2.Add_Tail(50);
	MyArray<char>s(5);
	s.Add_Tail('6');
	s.Add_Tail('7');
	s.Add_Tail('8');
//	s.Add_Tail('9');
//	s.Add_Tail('0');
//	arr2.Del_Tail();
//	s.Del_Tail();
//	s.showArr();
//	arr1.showArr();
//	arr2.showArr();
//	MyArray<int>arr3(10);
//	arr3 = arr2;
//	arr3.showArr();
//	return 0;
//}*/

#include <vector>

//int main()
//{
//	vector<vector<int>>v;
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//	for (int j = 0; j < 4; j++)
//	{
//		v1.push_back(j + 1);
//		v2.push_back(j + 2);
//		v3.push_back(j + 3);
//		v4.push_back(j + 4);
//	}
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	for (int i = 0; i < v.size(); i++)
//	{
//		for (int j = 0; j < v[i].size(); j++)
//			cout << v[i][j] << "  ";
//		cout << endl;
//	}
//	return 0;
//}
//
//int main()
//{
//	//int n = 5;
//	//string s(n, 97);
//	//cout << s[4] << endl;
//
//	/*string s = "hello";
//	s += " ";
//	s += "wrold";
//	cout << s << endl;
//	string p = "nihao shijie";
//	s.append(p,6,6);
//	cout << s << endl;*/
//	//string s = "jkafde@fghijk";
//	//cout << s.find("cdd") << endl;
//	/*cout << s.rfind("jk") << endl;
//	cout << s.find("jk") << endl;*/
//	//s.replace(1, 0, "1111");
//	//cout << s << endl;
//	//cout << s.capacity() << endl;
//	//cout << s.size() << endl;
//	//cout << s.compare("jkA");
//	//s.insert(1, "123");
//	//s.erase(1, 3);
//	//string substr = s.substr(1, 8);
//
//	/*cout << substr << endl;
//	
//	return 0;*/
//}
#include <string.h>
#include <algorithm>

int main()
{
	string s = "hello wrold";
	cout << s.begin() << endl;
	return 0;
}