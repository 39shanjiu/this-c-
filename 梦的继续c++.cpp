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
//	cout << a/2 << endl;
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

//class student
//{
//public:
//	int stu;
//	string name;
//	void Setname()
//	{
//
//	}
//	int showstu()
//	{
//		return stu;
//	}
//protected:
//	string showStu()
//	{
//		return name;
//	}
//private:
//	void setname(string n)
//	{
//		name = n;
//	}
//
//};
//
//int main()
//{
//	student s1;
//	//s1.name = "张三";
//	s1.setname("张三");
//	s1.stu = 202129;
//	cout << s1.showstu() << endl;
//	cout << s1.showStu() << endl;
//	return 0;
//}
//
//class Cube
//{
//public:
//	int l;
//	int h;
//	int w;
//	int forS()
//	{
//		return (l * h + l * w + h * w) * 2;
//	}
//	int V()
//	{
//		return l * h * w;
//	}
//};


//class Cube
//{
//public:
	//void set_h(int H)
	//{
	//	h = H;
 //   }
	//int get_h()
	//{
	//	return h;
	//}
	//void set_l(int L)
	//{
	//	l = L;
	//}
	//int get_l()
	//{
	//	return l;
	//}
	//void set_w(int W)
	//{
	//	w = W;
	//}
	//int get_w()
	//{
	//	return w;
	//}
//	int calculateS()
//	{
//		return (l * h + l * w + w * h) * 2;
//	}
//	int calculateV()
//	{
//		return l * w * h;
//	}
//	bool isSameByClass(Cube &c2)
//	{
//		if (get_h() == c2.get_h() && get_l() == c2.get_l() && get_w() == c2.get_w())
//			return 1;
//		else
//			return 0;
//	}
//private:
//	int h;
//	int l;
//	int w;
//};
//
//bool isSame(Cube c1, Cube c2)
//{
//	if (c1.get_h() == c2.get_h() && c1.get_l() == c2.get_l() && c1.get_w() == c2.get_w())
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	Cube c1;
//	c1.set_h(10);
//	c1.set_l(10);
//	c1.set_w(10);
//
//	cout << c1.calculateS() << endl;
//	cout << c1.calculateV() << endl;
//
//	Cube c2;
//	c2.set_h(10);
//	c2.set_l(10);
//	c2.set_w(10);
//	bool flag = isSame(c1, c2);
//	bool f = c1.isSameByClass(c2);
//	cout << flag << endl;
//	cout << f << endl;
//	return 0;
//}

//#include "类.h"
//
//
//class Circle
//{
//public:
//	void set_x(int X)
//	{
//		c.set_x(X);
//	}
//	void set_Y(int Y)
//	{
//		c.set_y(Y);
//	}
//	void set_r(int R)
//	{
//		r = R;
//	}/*
//	int get_r()
//	{
//		return r;
//	}
//
//	int Decide_Cir_Poi(Point po)
//	{
//		int X = ((po.get_x() - c.get_x()) * (po.get_x() - c.get_x()));
//		int Y = (po.get_y() - c.get_y()) * (po.get_y() - c.get_y());
//		if (X + Y > r * r)
//			return 1;
//		else if (X + Y == r * r)
//			return 0;
//		else
//			return -1;
//	}
//
//private:
//	int r;
//	Point c;
//};
//
//
//
//int main()
//{
//	Circle c1;
//	c1.set_x(0);
//	c1.set_Y(0);
//	c1.set_r(5);
//	Point D1;
//	D1.set_x(5);
//	D1.set_y(0);
//	int flag = c1.Decide_Cir_Poi(D1);
//		cout << flag << endl;
//
//	return 0;
//}*/
//
//class Person
//{
//public:
//	Person(int a)
//	{
//		cout << 1234 << endl;
//	}
//	Person()
//	{
//		cout << 123 << endl;
//	}
//	
//	~Person()
//	{
//		cout << 321 << endl;
//	}
//private:
//	
//};

//int main()
//{
//	Person p1;
//
//	return 0;
//}


//
//
//void test01()
//{
//
//	Person p1(10);
//	cout << p1.age << endl;
//	Person p2;
//	Person p3(p1);
//	cout << p3.age << endl;
//
//	/*Person p1;
//	Person p2 = Person(10);
//	cout << p2.age << endl;
//	Person p3 = Person(p2);
//	cout << p3.age << endl;
//	p1 = Person(10);
//	cout << p1.age << endl;
//
//	Person p1 = 10;
//	Person p2 = p1;*/
//
//
//void Do_Work(Person p)
//{
//
//Person  Day1(Person& p)
//{
//	Person p1;
//	return p;
//}
//
//Person Day1()
//{
//	Person
//}
//
//void test02()
//{
//	Person p;
//	//Do_Work(p);
//	p = Day1(p);
//}
//
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "无参" << endl;
//	}
//	Person(int a,int h)
//	{
//		age = a;
//		height = new int(h);
//		cout << "有参" << endl;
//	}
//	Person(const Person& p)
//	{
//		age = p.age;
//		height = new int(*p.height);
//		cout << "拷贝" << endl;
//	}
//	~Person()
//	{
//		if (height != NULL)
//		{
//			delete height;
//			height = NULL;
//		}
//	}
//	int age;
//
//	int* height;
//};
//
//
//void test()
//{
//	Person p;
//
//	Person p1(18,160);
//	cout << p1.age << *p1.height << endl;
//	Person p2(p1);
//	cout << p2.age << *p2.height << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
//class Phone
//{
//public:
//	Phone(string phone):pname(phone)
//	{
//
//	}
//	string pname;
//};
//
//class Person
//{
//public:
//	Person(string Name, string phone) :name(Name), m_phone(phone)
//	{
//	}
//
//
//	string name;
//	Phone m_phone;
//};
//
//void test()
//{
//	Person p1("张三","iqoo neo 5");
//	cout << p1.name << endl;
//	cout << p1.m_phone.pname << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
//class Person
//{
//public:
//
//	static void func()
//	{
//		a = 300;
//
//	}
//
//	int b;
//
//	static int a;
//};
//
//int Person::a = 100;
//
//void test()
//{
//	Person p1;
//	//p1.a = 300;
//	//p1.func();
//	Person::func();
//	cout << p1.a << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
//class Person
//{
//public:
//	int a;
//	char c;
//	static int b;
//};
//
//int Person::b = 20;
//
//void test()
//{
//	Person p;
//	cout << sizeof(p) << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
//class Person
//{
//public:
//
//	Person(int age)
//	{
//		this -> age = age;
//	}
//
//	Person& personaddage(Person &p)
//	{
//		this -> age += p.age;
//
//		return *this;//返回的是一个类。
//	}
//
//	int age;
//};
//
//void test()
//{
//	Person p(10);
//	cout << p.age << endl;
//	
//	Person p2(10);
//	p2.personaddage(p2).personaddage(p2).personaddage(p2).personaddage(p2);
//	cout << p2.age << endl;
//
//
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}
//
//class Person
//{
//public:
//	void func(int age)const
//	{
//		this->m_age = age;
//	}
//
//	int m_age;
//};
//
//int mian()
//{
//
//	return 0;
//}
//
//class Person
////{/*
//public:
//	Person()
//	{
//		cout << 1 << endl;
//	}
//	Person(int a)
//	{
//		m_age = a;
//		cout << 2 << endl;
//	}
//	Person(Person& p)
//	{
//		m_age = p.m_age;
//	}
//	int m_age;
//
//};
//void test()
//{
//	Person p;
//	p.m_age = 10;
//	Person p1 = p;
//
//}
//
//int main()
//{
//	test();
//	
//	system("pause");
//	return 0;*/
//}
//
//class Buliding
//{
//	friend void goodGay(Buliding& b);
//public:
//	Buliding()
//	{
//		this->livingroom = "客厅";
//		this->Bedroom = "卧室";
//	}
//public:
//	string livingroom;
//private:
//	string Bedroom;
//};
//
//void goodGay(Buliding &b)
//{
//	cout << b.livingroom << endl;
//	cout << b.Bedroom << endl;
//}
//
//void test()
//{
//	Buliding b;
//	goodGay(b);
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}
//
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	~GoodGay();
//	void visit();
//
//	Building* building;
//};
//
//class Building
//{
//	friend class GoodGay;
//public:
//	Building();
//	string livingroom;
//private:
//	string bedroom;
//};
//
//Building::Building()
//{
//	this->livingroom = "客厅";
//	this->bedroom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//GoodGay::~GoodGay()
//{
//	delete(building);
//}
//
//void GoodGay::visit()
//{
//	cout << building->livingroom << endl;
//	cout << building->bedroom << endl;
//}
//
//void test()
//{
//	GoodGay gg;
//	gg.visit();
//}
//
//int main()
//{
//	test();
//	return 0;
////}
//class GoodGay;
//
//class Building;
//
//class GoodGay
//{
//public:
//	GoodGay();
//	~GoodGay();
//
//	void visit1();
//
//	void visit2();
//
//	Building* building;
//};
//void visit();
//
//class Building
//{
//	friend void GoodGay::visit1();
//	friend void visit();
//public:
//	Building();
//	string livingroom;
//private:
//	string bedroom;
//};
//Building::Building()
//{
//	this->livingroom = "123";
//	this->bedroom = "789";
//}
//
//GoodGay::GoodGay()
//{
//	building = new (Building);
//}
//GoodGay::~GoodGay()
//{
//	delete(building);
//}
//
//void GoodGay::visit1()
//{
//	cout << building->livingroom << endl;
//	cout << building->bedroom << endl;
//}
//
//void GoodGay::visit2()
//{
//	cout << building->livingroom << endl;
//}
//
//void visit()
//{
//	GoodGay gg;
//	gg.building->livingroom = "234";
//	gg.building->bedroom = "876";
//	cout << gg.building->bedroom << endl;
//}
//
//void test()
//{
//	GoodGay gg;
//	gg.visit1();
//}
//
//int main()
//{
//	visit();
//	test();
//	return 0;
//}
//class Person;
//
//class Person
//{
//public:
//	//Person operator+ (Person& p)
//	//{
//	//	Person temp;//创建的临时变量
//	//	temp.m_A = this->m_A + p.m_A;//this-》p1 + p2 中的前面一个p1
//	//	temp.m_B = this->m_B + p.m_B;//p.m_B 就是后面的那个
//	//	return temp;
//	//}
//	int m_A;
//	int m_B;
//};
//
//Person operator+ (Person& p1, Person& p2)
//{
//	Person temp;//创建的临时变量
//	temp.m_A = p1.m_A + p2.m_A;//this-》p1 + p2 中的前面一个p1
//	temp.m_B = p1.m_B + p2.m_B;//p.m_B 就是后面的那个
//	return temp;
//}p
//
//void test()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 20;
//	Person p2;
//	p2.m_A = 100;
//	p2.m_B = 200;
//	Person p3 = p1 + p2;
//	cout << p3.m_A << endl;
//	cout << p3.m_B << endl;
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}
//

//
//class Person
//{
//	friend	ostream& operator<< (ostream& cout, Person& p);
//public:
//	Person()
//	{
//		this->m_A = 10;
//		this->m_B = 20;
//	}
//private:
//
//	int m_A;
//	int m_B;
//};
//
//ostream& operator<< (ostream &cout ,Person& p)
//{
//	cout << p.m_A << endl;
//	cout << p.m_B << endl;
//	return cout;
//}
//
//void test()
//{
//	Person p;
//	cout <<  p << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//class My_Integer
//{
//	friend ostream& operator<< (ostream& cout, My_Integer num);
//public:
//	My_Integer()
//	{
//		m_Num = 0;
//	}
//	My_Integer& operator++()
//	{
//		m_Num++;
//		return *this;
//	}
//
//	My_Integer operator++(int)
//	{
//		My_Integer temp = *this;
//		m_Num++;
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
//ostream& operator<< (ostream& cout, My_Integer num)
//{
//	cout << num.m_Num;
//	return cout;
//}
//
//void test()
//{
//	My_Integer num;
//	cout << ++num << endl;
//
//
//	cout << num++ << endl;
//	cout << num << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
////}
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	Person& operator=(Person &p)
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete(m_Age);
//			m_Age = NULL;
//		}
//    }
//
//
//	int* m_Age;
//};
//
//void test()
//{
//	Person p1(10);
//	Person p2(20);
//	Person p3(30);
//	p2 = p1 = p3;
//	cout << *p2.m_Age << endl;
//	cout << *p1.m_Age << endl;
//	cout << *p3.m_Age << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		this->m_Age = age;
//	}
//
//	bool operator==(Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//			return true;
//		return false;
//	}
//
//	bool operator!=(Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//			return false;
//		return true;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test()
//{
//	Person p1("Tom", 18);
//	Person p2("Jerry", 18);
//
//	if (p1 == p2)
//		cout << "Yes" << endl;
//	else
//		cout << "No" << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//class Person
//{
//public:
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//
//int main()
//{
//	Person p1;
//	p1("Hello Wrold");
//	return 0;
//}
#include <iostream>
using namespace std;
//
//class Base
//{
//public:
//	void wide()
//	{
//		cout << "你好" << endl;
//	}
//};
//
//class Java : public Base
//{
//public:
//	void content()
//	{
//		cout << "Java" << endl;
//	}
//};
//
//class Cpp : public Base
//{
//public:
//	void content()
//	{
//		cout << "Cpp" << endl;
//	}
//};
//
//
//
//int main()
//{
//	Java java;
//	java.wide();
//	java.content();
//	Cpp cpp;
//	cpp.wide();
//	cpp.content();
//
//	return 0;
//}


//
//class Son1 : Base
//{
//public:
//	void func()
//	{
//		this->m_A = 10;
//		this->m_B = 20;
//	}
//};
//
//class Son2 : Base
//{
//public:
//	void func()
//	{
//		this->m_A = 100;
//		this->m_B = 600;
//	}
//};

//class Base
//{
//public:
//	Base()
//	{
//		cout << "base" << endl;
//	}
//	void func()
//	{
//
//	}
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "son" << endl;
//	}
//	int m_D;
//};
//
//void test()
//{
//	Son s;
//	cout << sizeof(s) << endl;
//}
//
//int main()int 
//{
//	test();
//	return 0;
//}

//class Base
//{
//public:
//	static int m_A;
//};
//int Base::m_A = 100;
//
//class Son : public Base
//{
//public:
//	static int m_A;
//};
//int Son::m_A = 200;
//
//int main()
//{
//	cout << Son::Base::m_A << endl;
//	return 0;
//}

//class Animal
//{
//public:
//	int m_Age;
//};
//
//class Sheep : public Animal{};
//
//class Camel : public Animal{};
//
//class SheepCamel : public Sheep, public Camel
//{
//public:
//};
//
//int main()
//{
//	SheepCamel a;
//	a.Sheep::m_Age;
//	a.Camel::m_Age;
//	return 0;
//}
//
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "aoaoao" << endl;
//	}
//
//};
//
//class Cat : public Animal
//{
//public:
//	 void speak()
//	{
//		cout << "miaomiaomiao" << endl;
//	}
//};
//
//void dospeak(Animal& animal)
//{
//	animal.speak();
//}
//
//void test()
//{
//	Cat cat;
//	dospeak(cat);
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}
//
//class Calculator
//{
//public:
//	virtual int opertor()
//	{
//		return 0;
//	}
//	int m_Num1 = 0;
//	int m_Num2 = 0;
//};
//
//class AddCalculator : public Calculator
//{
//public:
//	int opertor()
//	{
//		return this->m_Num1 + this->m_Num2;
//	}
//};
//
//class SubCalculator : public Calculator
//{
//public:
//	int opertor()
//	{
//		return this->m_Num1 - this->m_Num2;
//	}
//};
//
//class MulCalculator : public Calculator
//{
//public:
//	int opertor()
//	{
//		return this->m_Num1 * this->m_Num2;
//	}
//};
//
//void test()
//{
//	Calculator* cal = new AddCalculator;
//	cal->m_Num1 = 12;
//	cal->m_Num2 = 11;
//	cout << cal->m_Num1 << " + " << cal->m_Num2 << " = " << cal->opertor() << endl;
//	delete cal;
//	cal = new SubCalculator;
//	cal->m_Num1 = 12;
//	cal->m_Num2 = 11;
//	cout << cal->m_Num1 << " - " << cal->m_Num2 << " = " << cal->opertor() << endl;
//	delete cal;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//class Base
//{
//public:
//	virtual void func() = 0;
//};
//
//class Son : public Base
//{
//public:
//	void func()
//	{
//		cout << "123" << endl;
//	}
//};
//
//int main()
//{
//	Base* base = new Son;
//	base->func();
//	delete base;
//	return 0;
//}
//class Base
//{
//public:
//	virtual void Boil() = 0;
//
//	virtual void Brew() = 0;
//
//	virtual void PourInCup() = 0;
//
//	virtual void PutSomething() = 0;
//
//	void makedrink()
//	{
//		Boil();
//		this->Brew();
//		this->PourInCup();
//		this->PutSomething();
//	}
//};
//
//class Coffee : public Base
//{
//	 void Boil()
//	 {
//		cout << "1" << endl;
//	 }
//
//    void Brew()
//	{
//		cout << "2" << endl;
//	}
//
//    void PourInCup()
//	{
//		cout << "3" << endl;
//	}
//
//	void PutSomething()
//	{
//		cout << "4" << endl;
//	}
//};
//
//class Tea : public Base
//{
//	void Boil()
//	{
//		cout << "5" << endl;
//	}
//
//	void Brew()
//	{
//		cout << "6" << endl;
//	}
//
//	void PourInCup()
//	{
//		cout << "7" << endl;
//	}
//
//	void PutSomething()
//	{
//		cout << "8" << endl;
//	}
//};
//
//void doDrink(Base* base)
//{
//	base->makedrink();
//	delete base;
//}
//
//void test()
//{
//	doDrink(new Coffee);
//	cout << "------------" << endl;
//	doDrink(new Tea);
//}
//
//int main()
//{
//	test();
//	return 0;
////}
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "构造Animal" << endl;
//	}
//
//	virtual void speak() = 0;
//
//	virtual ~Animal() = 0;
//	//{
//	//	cout << "析构Animal" << endl;
//	//}
//};
//
//Animal::~Animal()
//{
//	cout << "xigouAnimal" << endl;
//}
//
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//	{
//		m_Name = new string(name);
//		cout << "构造Cat" << endl;
//	}
//
//	void speak()
//	{
//		cout << *m_Name << "miaomiao" << endl;
//	}
//
//	~Cat()
//	{
//		if(m_Name != NULL)
//		delete m_Name;
//		m_Name = NULL;
//		cout << "析构 cat" << endl;
//	}
//	
//	string* m_Name;
//};
//
//void test(Animal* animal)
//{
//	animal->speak();
//	delete  animal;
//}
//
//void test0()
//{
//	test(new Cat("Tom"));
//}
//
//int main()
//{
//	test0();
//	return 0;
//}

//class CPU
//{
//public:
//	virtual void calculate() = 0;
//};
//
//class VideoCard
//{
//public:
//	virtual void display() = 0;
//};
//
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//
//class Computer
//{
//public:
//	Computer(CPU* cpu,VideoCard* vc,Memory* mem)
//	{
//		this->m_cpu = cpu;
//		this->m_vc = vc;
//		this->m_mem = mem;
//	}
//
//	void dowork()
//	{
//		this->m_cpu->calculate();
//		this->m_vc->display();
//		this->m_mem->storage();
//	}
//
//	~Computer()
//	{
//		if (this->m_cpu != NULL)
//		{
//			delete this->m_cpu;
//			this->m_cpu = NULL;
//		}
//		if (this->m_vc != NULL)
//		{
//			delete this->m_vc;
//			this->m_vc = NULL;
//		}
//		if (this->m_mem != NULL)
//		{
//			delete this->m_mem;
//			this->m_mem = NULL;
//		}
//		
//	}
//private:
//	CPU* m_cpu;
//	VideoCard* m_vc;
//	Memory* m_mem;
//};
//
//class InternetCPU : public CPU
//{
//public:
//	void calculate()
//	{
//		cout << "InternetCPU wroking" << endl;
//	}
//
//};
//
//class InternetVideoCard : public VideoCard
//{
//public:
//	void display()
//	{
//		cout << "InternetVideoCard wroking" << endl;
//	}
//
//};
//
//class InternetMemory : public Memory
//{
//public:
//	void storage()
//	{
//		cout << "InternetMemory wroking" << endl;
//	}
//
//};
//
//void test()
//{
//	CPU* cpu = new InternetCPU;
//	VideoCard* vc = new InternetVideoCard;
//	Memory* mem = new InternetMemory;
//
//	Computer* Lenove = new Computer(cpu,vc,mem);
//	Lenove->dowork();
//
//}
//
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

#include <iostream>
using namespace std;
#include <fstream>
#include <string>

//void test()
//{
//	ofstream ofs;
//	ofs.open("test.txt", ios::out);
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//	ofs.close();
//}

//void test()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "404 NOT FOUND" << endl;
//		return;
//	}
//	//char buf[1024] = { 0 };
//	//1
//	/*while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}*/
//
//	//ifs >> buf;
//	//cout << buf << endl;
//
//	//ifs >> buf;
//	//cout << buf << endl;
//
//	//ifs >> buf;
//	//cout << buf << endl;
//
//
//	//2
//	/*while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//
//	////3.
//	string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}
//
//	////4
//	//char c;
//	//while ((c = ifs.get()) != EOF)
//	//{
//	//	cout << c;
//	//}
//
//	ifs.close();
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//class Person
//{
//public:
//	char m_Name[20];
//	int m_Age;
//};
//
//int main()
//{
//	/*ofstream ofs;
//	ofs.open("test,txt", ios::out | ios::binary);
//	Person p{"张三",18};
//	ofs.write((const char*)&p, sizeof(Person));
//	ofs.close();*/
//
//	ifstream ofs;
//	ofs.open("test,txt", ios::out | ios::binary);
//
//	if (!ofs.is_open())
//	{
//		return 0;
//	}
//	Person p;
//
//	ofs.read((char*)&p, sizeof(Person));
//
//	cout << p.m_Name << " " << p.m_Age << endl;
//	ofs.close();
//
//	return 0;
//}

#include "通讯录plus.h"

int main()
{

	WorkerManager wm;
	int num = 0;
	do
	{
		wm.Meau();
		cin >> num;
		switch(num)
		{
		case 0:
			cout << "欢迎下次使用" << endl;
			break;
		case 1:
			wm.ADDWorker();
			break;
		case 2:
			wm.Show_Enp();
			break;
		case 3:
			wm.Del_Emp();
			break;
		case 4:
			wm.Mod_Emp();
			break;
		case 5:
			wm.F_Emp();
			break;
		case 6:
			break;
		case 7:
			wm.Clean_Emp();
			break;
		default:
			cout << "输入错误，请重新输入" << endl;
			break;
		}
		system("pause");
		system("cls");
	} while (num);
	
	return 0;
}

