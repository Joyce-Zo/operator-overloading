#include<iostream>
using namespace std;
#include<string>
// +号重载
//class number
//{
//public:
//	// 成员函数重载+号
//	/*number operator+(number& n)
//	{
//		number tmp;
//		tmp.m_a = this->m_a + n.m_a;
//		tmp.m_b = this->m_b + n.m_b;
//		return tmp;
//	}*/
//	int m_a;
//	int m_b;
//};
//	// 全局函数重载+号
//number operator+(number& n1, number& n2)
//{
//	number tmp;
//	tmp.m_a = n1.m_a + n2.m_a;
//	tmp.m_b = n1.m_b + n2.m_b;
//	return tmp;
//}
//void test01()
//{
//	number n1;  	number n2;
//	n1.m_a = 10;	n2.m_a = 5;
//	n1.m_b = 10;	n2.m_b = 6;
//
//	number n3;
//	n3 = n1 + n2;
//	cout << n3.m_a << endl;
//	cout << n3.m_b << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

// << 左移运算符重载

//class person
//{
//	friend ostream& operator<<(ostream& cout, person& p);
//	friend void test01();
//private:
//	int m_a;
//	int m_b;
//};
//
//ostream& operator<<(ostream& cout, person& p)
//{
//	cout << p.m_a << p.m_b;
//	return cout;
//}
//void test01()
//{
//	person p;
//	p.m_a = 10;
//	p.m_b = 5;
//	cout << p << "hello world"<<"2023"<<endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}

// ++ 递增运算符重载

//class myInteger
//{
//public:
//	// 前置递增
//	myInteger& operator++()
//	{
//		m_a++; // 先自增
//		return *this; // 再返回自身
//	}
//	// 后置递增
//	myInteger operator++(int) // int 占位参数
//	{
//		myInteger tmp = *this;
//		m_a++; // 先自增
//		return tmp; // 再返回自身
//	}
//	myInteger()
//	{
//		m_a = 5;
//	}
//	int m_a;
//};
//ostream& operator<<(ostream& cout, myInteger myint)
//{
//	cout << myint.m_a;
//	return cout;
//}
//void test01()
//{
//	myInteger myint;
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//}
//void test02()
//{
//	myInteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}

// 赋值运算符重载

//class person
//{
//public:
//	person(int age)
//	{
//		m_age = new int(age);// 堆区开辟空间存储
//	}
//	~person()
//	{
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//
//	person& operator=(person& p1) // 复制运算符的重载,返回引用才是返回自身
//	{
//		if (m_age != NULL) // 判断是否有属性在堆区，有则释放
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//		m_age = new int(*p1.m_age);
//		return *this;
//	}
//
//	int *m_age;
//};
//
//void test01()
//{
//	person p1(10);
//	//cout << *p1.m_age << endl;
//	
//	person p2(12);
//	//cout << *p2.m_age << endl;
//
//	person p3(15);
//	p3 = p2 = p1;
//	cout << *p3.m_age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}


// 关系运算符重载

//class person
//{
//public:
//	person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	bool operator==(person& p)
//	{
//		if (this->m_age == p.m_age && this->m_name == p.m_name)
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	string m_name;
//	int m_age;
//};
//void test01()
//{
//	person p1("joyce", 22);
//	person p2("tatina", 22);
//	if (p1 == p2)
//	{
//		cout << "相等" << endl;
//	}
//	else
//	{
//		cout << "不等" << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}

// 函数调用运算符重载

//class func
//{
//public:
//
//	void operator()(string line)
//	{
//		cout << line << endl;
//	}
//
//
//
//
//	string line;
//};
//void print(string line)
//{
//	cout << line << endl;
//}
//void test01()
//{
//	func fun;
//	fun("hello,nana");
//	print("hello,nana");
//}

class my_add
{
public:
	int operator()(int x, int y)
	{
		return x + y;
	}
};
void test01()
{
	my_add myadd;
	int ret = myadd(100, 200);
	cout << ret << endl;
	// 匿名函数对象
	cout << my_add()(200, 300) << endl;
}
int main()
{
	test01();
	return 0;
}