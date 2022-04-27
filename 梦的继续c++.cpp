


//int main()
//{
//	int aum = 68;
//	cout << "hello" << "wrold\n" ;
//	cout << aum << endl;
//	printf("%d\n", aum);
//	int arr[1000] = { 0 };
//	cout << sizeof(arr);
//	cout << sizeof(long)*1000 << endl;
//	cout << "Hello World" << endl;
//	//system("pause");
//	return 0;
//}
//
//int main()
//{
//	float f1 = 901234.1415926;
//	double f2 = 3.1415926;
//	cout << f1 << endl;
//	cout << f2 << endl;
//	cout << "aaaaaaa\th" << endl;//对八取余，
//	string s = "hello wrold";
//	cout << s << endl;
//	//printf("%lf", f2);
//	return 0;
//}

//int main()
//{
//	bool flag = 5;
//	cout << sizeof(bool) << endl;
//	cout << flag << endl;
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	//cin >> a;
//	//cout << a/2 << endl;
//	string s = "hello\0";
//	cin.get(s);
//	cout << s << endl;
//	return 0;
//}
//
//int main()
//{
//	int pig1 = 0;
//	int pig2 = 0;
//	int pig3 = 0;
//	cin >> pig1;
//	cin >> pig2;
//	cin >> pig3;
//	if (pig1 > pig2)
//	{
//		if (pig1 > pig3)
//			cout << "pig1\t" <<pig1 <<  endl;
//		else
//		cout << "pig3\t" << pig3 << endl;
//	}
//	else
//	{
//		if (pig2 > pig3)
//			cout << "pig2\t" << pig2 << endl;
//		else
//			cout << "pig3\t" << pig3 << endl;
//	}
//	       
//
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	cin >> score;
//	switch (score)
//	{
//	case 8:
//		cout << "good" << endl;
//	}
//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	srand((unsigned int)time(NULL));
//	int n = rand() % 100 + 1;
//	while (num != n)
//	{
//		cin >> num;
//		if (num > n)
//			cout << "大了" << endl;
//		else if (num < n)
//			cout << "小了" << endl;
//	}
//	cout << "win" << endl;
//	return 0;
//}
//
//int main()
//{
//	int n = 100;
//	while (n < 1000)
//	{
//		int sum = 0;
//		int num = n;
//		int a = num % 10;
//		num /= 10;
//		int b = num % 10;
//		num /= 10;
//		int c = num % 10;
//		sum = a * a * a + b * b * b + c * c * c;
//		if (sum == n)
//			cout << n << endl;
//		n++;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << "* ";
//		}
//		cout <<  endl;
//		/*if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
//			cout << i << "桌子HP-1" << endl;*/
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	goto FLAG;
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//			cout << j << "*" << i << "=" << j * i << "\t";
//		cout << endl;
//	}
//	FLAG:
//	return 0;
//}

//#define MAX(a,b) (a > b ? a : b)
//
//int main()
//{
//	int arr[] = { 250,251,258,236,340 };
//	int max = 0;
//	for (int i = 0; i < 5; i++)
//	{
//
//	}
//	return 0;
//}
//
//int judy();
//
//int main()
//{
//	int a = judy();
//	cout << a << endl;
//	return 0;
//}
//int judy()
//{
//	return 2;
//}
//
//int main()
//{
//	int a = 2;
//	int* p = &a;
//	*p = 10;
//	const int* pp = &a;
//	*pp = 20;
//	int b = 0;
//	a = 5;
//	cout << pp << endl;
//	cout << p << endl;
//	cout << a << endl;
//	return 0;
//}

//typedef struct student
//{
//	string name;
//	int age;
//	int score;
//}stu;
//
//int main()
//{
//	stu s1 = { "张三",18,68 };
//	stu s2;
//	s2.name = "李四";
//	s2.age = 19;
//	s2.score = 98;
//	cout << s1.name << "  " << s1.age << "  " << s1.score << endl;
//	cout << s2.name << "  "  << s2.age << "  " << s2.score << endl;
//	bool a = 0;
//	a = 5;
//	cout << a << endl;
//	return 0;
//}
//
//struct student
//{
//	int age;
//	string name;
//	int score;
//};
//
//struct teacher
//{
//	int age;
//	string name;
//	student s[5];
//};
//void CreatInfo(teacher* tor)
//{
//	string c1 = "ABCDE";
//	for (int i = 0; i < 3; i++)
//	{
//		tor[i].age = 28;
//		tor[i].name = "T_";
//		tor[i].name += c1[i];
//		for (int j = 0; j < 5; j++)
//		{
//			tor[i].s[j].age = 18;
//			tor[i].s[j].name = "Stu_";
//			tor[i].s[j].name += c1[j];
//			tor[i].s[j].score = rand() % 61 + 40;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	teacher tor[3];
//	CreatInfo(tor);
//	for (int i = 0; i < 3; i++)
//	{
//		cout << tor[i].name << "  " << tor[i].age << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t" << tor[i].s[j].name << " " << tor[i].s[j].age << "  " << tor[i].s[j].score << endl;
//		}
//	}
//	return 0;
//}

//#include "通讯录.h"
#include <iostream>
using namespace std;
//
//void meau()
//{
//	cout << "***************************" << endl;
//	cout << "***   1.添加联系人   *******" << endl;
//	cout << "***   2.删除联系人   *******" << endl;
//	cout << "***   3.显示联系人   *******" << endl;
//	cout << "***   4.查找联系人   *******" << endl;
//	cout << "***   5.修改联系人   *******" << endl;
//	cout << "***   6.清空联系人   *******" << endl;
//	cout << "***   0.退出通讯录   *******" << endl;
//	cout << "***************************" << endl;
//
//}
//int main()
//{
//	PeoInfo person[MAX];
//	int select = 0;
//	Init(person);
//	do
//	{
//		meau();
//		cin >> select;
//		switch (select)
//		{
//		case 1:
//			Add(person);
//			break;
//		case 2:
//			Div(person);		
//			break;
//		case 3:
//			Show(person);
//			break;
//		case 4:
//			Serch(person);
//			break;
//		case 5:
//			Mod(person);
//			break;
//		case 6:
//			Clean(person);
//			break;
//		case 0:
//			break;
//		default:
//			cout << "输入错误，请重新输入" << endl;
//			break;
//		}
//		system("pause");
//		system("cls");
//	} while (select);
//	cout << "欢迎下次使用" << endl;
//	return 0;
//}

//int* judy()
//{
//	int* p = new int(10086);
//	return p;
//}
//
//int main()
//{
//	int*p = judy();
//	cout << p << endl;
//	cout << *p << endl;
//	delete p;
//	cout << *p << endl;
//	return 0;
//}
//
//int* Function()
//{
//	int* p = new int[10];
//	return p;
//}
//
//int main()
//{
//	int* p = Function();
//	for (int i = 0; i < 10; i++)
//		p[i] =  10 - i;
//	for (int i = 0; i < 10; i++)
//		cout << p[i] << " ";
//	delete[] p;
//	return 0;
//}int 

//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int& b = a; 
//	*p = 20;
//	cout << &b << endl;
//	cout << &a << endl;
//	cout << p << endl; 
//	return 0;
//}
//
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	cout << a << " " << b << endl;
//	return 0;
//}
//
//int& test()
//{
//	static int a = 10;
//	return a;
//}
//
//int main()
//{
//	int& res = test();
//	cout << res << endl;
//	test() = 100;
//	cout << res << endl;
//	//cout << a << endl;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int& res = a;
//	res = 20;
//	int b = 30;
//	res = b;
//	cout << res << endl;
//	cout << a;
//	int* const ret = &a;
//	*ret = b;
//	cout << *ret;
//	return 0;
//}
//
//int Func(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
//int Func(int a,int,int)
//{
//	return 50;
//}
//
//int Func(int a)
//{
//	return 60;
//}
//
//int main()
//{
//	cout << Func(10,30,20) << endl;
//	return 0;
//}
//
//void Func(int a, char c)
//{
//	cout << 10;
//}
//
//void Func(char c, int a)
//{
//	cout << 20;
//}
//
//int main()
//{
//	Func( '0',20);
//	return 0;
//}

//const double PI = 3.14;
//
//class Circle
//{
//	//访问权限
//public:
//	//属性  半径
//	int m_r;
//	// 行为 获取圆的周长
//	double calculatrZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	//通过圆类，创建具体的圆（对象）
//	//实例化 （通过一个类 创建一个对象的过程）
//	Circle c1;
//	//给圆对象的属性进行赋值。
//	c1.m_r = 10;
//	cout << c1.calculatrZC() << endl;
//	return 0;
//}

class student
{
public:
	int stu;
	string name;
	int showstu()
	{
		return stu;
	}
protected:
	string showStu()
	{
		return name;
	}
private:
	void setname(string n)
	{
		name = n;
	}

};

int main()
{
	student s1;
	//s1.name = "张三";
	s1.setname("张三");
	s1.stu = 202129;
	cout << s1.showstu() << endl;
	cout << s1.showStu() << endl;
	return 0;
}