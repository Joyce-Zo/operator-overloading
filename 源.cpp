#include<iostream>
using namespace std;
#include<string>
// +������
//class number
//{
//public:
//	// ��Ա��������+��
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
//	// ȫ�ֺ�������+��
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

// << �������������

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

// ++ �������������

//class myInteger
//{
//public:
//	// ǰ�õ���
//	myInteger& operator++()
//	{
//		m_a++; // ������
//		return *this; // �ٷ�������
//	}
//	// ���õ���
//	myInteger operator++(int) // int ռλ����
//	{
//		myInteger tmp = *this;
//		m_a++; // ������
//		return tmp; // �ٷ�������
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

// ��ֵ���������

//class person
//{
//public:
//	person(int age)
//	{
//		m_age = new int(age);// �������ٿռ�洢
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
//	person& operator=(person& p1) // ���������������,�������ò��Ƿ�������
//	{
//		if (m_age != NULL) // �ж��Ƿ��������ڶ����������ͷ�
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


// ��ϵ���������

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
//		cout << "���" << endl;
//	}
//	else
//	{
//		cout << "����" << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}

// �����������������

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
	// ������������
	cout << my_add()(200, 300) << endl;
}
int main()
{
	test01();
	return 0;
}