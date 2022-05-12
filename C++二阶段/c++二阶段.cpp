

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
#include"模板.hpp"
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

////int main()
////{
////	/*string s = "hello wrold";
////	cout << s.begin() << endl;*/
////	vector<int>v;
////	for (int i = 0; i < 6; i++)
////		v.push_back(i + 1);
////	del(v, sizeof(int), i);
////	return 0; 
////}
//
//class Player
//{
//public:
//	Player(string name, int score)
//	{
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//
//	string m_Name;
//
//	int m_Score;
//};
//
//void creatPlayer(vector<Player>& v)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		Player p("选手", 0);
//		p.m_Name += ('A' + i);
//		v.push_back(p);
//	}
//}
//
//void setScore(vector<Player>& v)
//{
//	for (int i = 0; i < v.size(); i++)
//	{
//		deque<int>queue;
//		for (int j = 0; j < 10; j++)
//		queue.push_back(rand() % 41 + 60);
//		sort(queue.begin(), queue.end());
//		queue.pop_back();
//		queue.pop_front();
//		int sum = 0;
//		for (int j = 0; j < queue.size(); j++)
//		sum += queue[i];
//		v[i].m_Score = sum / (int)queue.size();
//	}
//}
//
//void PlantPlayer(vector<Player>& v)
//{
//	for (int i = 0; i < v.size(); i++)
//		cout << "name:  " << v[i].m_Name << "\tScore:  " << v[i].m_Score << endl;
//}
//
//
//void test1()
//{
//	vector<Player>v;
//	creatPlayer(v);
//
//	setScore(v);
//
//	PlantPlayer(v);
//}
//
//void List()
//{
//	list<int>L1;
//	for (int i = 0; i < 10; i++)
//		L1.push_back(10 * i);
//	L1.insert(++L1.begin(),1000);
//	list<int>L2(L1.begin(),L1.end() );
//}
//
////class Person
////{
////public:
////	string m_Name;
////	int m_Age;
////};
////
////void test2()
////{
////	set<Person>s;
////
////}
//
//void test3()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(5, 50));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	for (int i = 1; i <= m.size(); ++i)
//		cout << m[i] << "  ";
//	for (map<int,int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << it->first << "  " << it->second << "  " << endl;
//	}
//	map<int, int>m1(m);
//	for (map<int, int>::iterator it = m1.begin(); it != m1.end(); it++)
//	{
//		cout << it->first << "  " << it->second << "  " << endl;
//	}
//	map<int, int>m2 = m1;
//	for (map<int, int>::iterator it = m2.begin(); it != m2.end(); it++)
//	{
//		cout << it->first << "  " << it->second << "  " << endl;
//	}
//
//}
//
//class Emplayee
//{
//public:
//	Emplayee(string name, int salary)
//	{
//		this->m_Name = name;
//		this->m_Salary = salary;
//	}
//
//	
//
//	string m_Name;
//
//	int m_Salary;
//
//	string m_Branch;
//
//	int m_Size;
//};
//
//void operator<<(ostream& cout,Emplayee& p)
//{
//	cout << "姓名: " << p.m_Name << "\t所属部门: " << p.m_Branch << "\t薪资: " << p.m_Salary << endl;;
//}
//
//void CreatEmplayee(vector<Emplayee>& v)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		string s = "ABCDEFGHIJ";
//		string name = "员工";
//		name += s[i];
//		Emplayee p(name, 0);
//		v.push_back(p);
//	}
//}
//
//void DisEmp(vector<Emplayee>&v,multimap<int,Emplayee>&m)
//{
//	for (int i = 0; i < v.size(); ++i)
//	{
//		v[i].m_Size = rand() % 3 + 1;
//		switch (v[i].m_Size)
//		{
//		case 2:
//			v[i].m_Branch = "研发";
//			v[i].m_Salary = rand() % 5000 + 8000;
//			break;
//		case 3:
//			v[i].m_Branch = "策划";
//			v[i].m_Salary = rand() % 5000 + 5000;
//			break;
//		case 1:
//			v[i].m_Branch = "美术";
//			v[i].m_Salary = rand() % 5000 + 11000;
//			break;
//		default:
//			break;
//		}
//		m.insert(pair<int,Emplayee>(v[i].m_Size,v[i]));
//	}
//}
//
//void PrintEmp(multimap<int, Emplayee>& m)
//{
//	for (multimap<int, Emplayee>::iterator it = m.begin(); it != m.end(); ++it)
//	{
//		cout << it->second;
//	}
//}
//
//void test4()
//{
//	vector<Emplayee>v;
//	multimap<int, Emplayee>m;
//	CreatEmplayee(v);
//	DisEmp(v, m);
//	PrintEmp(m);
//	//v[0].m_Size = 1;
//	//v[0].m_Salary = 3000;
//	//v[0].m_Branch = "美术";
//	//cout << v[0];
//}
//
//void Build_Tree(int arr[], int tree[], int end, int start, int node)
//{
//	if (end == start)
//	tree[node] = arr[end];
//	else {
//		int mid = (start + end) / 2;
//		int node_left  = node * 2 + 1;
//		int node_right = node * 2 + 2;
//
//		Build_Tree(arr, tree, mid, start, node_left);
//		Build_Tree(arr, tree, end, mid + 1, node_right);
//		tree[node] = tree[node_left] + tree[node_right];
//	}
//}
//
//void updata_tree(int arr[], int tree[], int end, int start, int node, int idx, int val) {
//	if (end == start && end == idx)
//	{
//		arr[idx] = val;
//		tree[node] = arr[idx];
//	}
//	else {
//		int mid = (start + end) / 2;
//		if (idx > mid)
//		updata_tree(arr, tree, end, mid + 1, 2 * node + 2, idx, val);
//		else 
//		updata_tree(arr, tree, mid,start, 2 * node + 1, idx, val);
//		tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
//	}
//}
//
//void test()
//{
//	int arr[] = { 1,3,5,7,9,11 };
//	int size = 6;
//	int tree[15] = { 0 };
//
//	Build_Tree(arr, tree, size - 1, 0, 0);
//
//	updata_tree(arr, tree, size - 1, 0, 0, 4, 6);
//	for (int i = 0; i < 15; i++)
//	{
//		cout << tree[i] << " ";
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}

#include <string.h>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <iostream>
#include <functional>
using namespace std;

//int main1()
//{
//	vector<int>nums = { 8,7,1,10,17,15,18,11,16,9,19,12,5,14,3,4,2,13,18,18 };
//	int sz = nums.size();
//	for (int i = 0; i < sz; ++i)
//	{
//		if (i + 1 != nums[i] && nums[nums[i] - 1] == nums[i])
//			cout << "Yes";
//		if (i + 1 != nums[i])
//		{
//			swap(nums[nums[i] - 1], nums[i]);
//			--i;
//		}
//	}
//	
//
//	return 0;
//}
//
//int main2()
//{
//	vector<int>nums = { 7,6,5,4,3,2,1,0,-1,-2 };
//	int k = 3;
//	int sz = nums.size();
//	//if (k == 1)
//		//return nums;
//	int r = -10086;
//	int l = -10086;
//	int i = 0;
//	int posr = 0;
//	int posl = 0;
//	for (i = 0; i < k; ++i)
//	{
//		if (nums[i] >= r)
//		{
//			if (nums[i] >= l)
//			{
//				l = nums[i];
//				posl = i;
//				r = -10086;
//			}
//			else
//			{
//				r = nums[i];
//				posr = i;
//			}
//		}
//	}
//	vector<int>ans;
//	ans.push_back(l);
//	for (; i < nums.size(); ++i)
//	{
//		if (nums[i] >= r)
//		{
//			if (nums[i] >= l)
//			{
//				l = nums[i];
//				posl = i;
//				r = -10086;
//			}
//			else
//			{
//				r = nums[i];
//				posr = i;
//			}
//		}
//		if (posl == i - k)
//		{
//			l = r;
//			posl = posr;
//			r = -10086;
//		}
//		ans.push_back(l);
//	}
//	//return ans;
//	return 0;
//}

class five
{
public:
	bool operator() (int val)
	{
		return val > 5;
	}
};

void test1()
{
	vector<int>v;
	for (int i = 0; i < 10; ++i)
		v.push_back(i);
	if (v.end() != find_if(v.begin(), v.end(), five()))
		cout << "Yes" << endl;
}
void test()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 5; ++i)
	{
		v1.push_back(i);
		v2.push_back(2 + i);
	}
	merge(v1.begin(), v1.end(), v2.begin(), v2.begin() + 5, v2.begin());
	for (int i = 0; i < v2.size(); ++i)
	cout << v2[i] << "  ";
	cout << endl;
}

int main()
{
	test();
	return 0;
}

