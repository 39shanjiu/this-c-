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
template<class T1, class T2>
class Person;

template<class T1, class T2>
void showperson(Person<T1, T2>& p)
{
	cout << p.m_Name << "  " << p.m_Age << endl;
}

template<class T1,class T2>
class Person
{
	friend void showperson<>(Person<T1,T2>&p);
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};

int main()
{
	Person<string, int>p("Jerry", 18);
	showperson(p);
	return 0;
}