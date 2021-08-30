#pragma once
#include <iostream>
#include <string>

using namespace std;

class MyString
{
private:
	char *str;
	int length;
public:
	
	
	MyString(char *str)
	{
		length = strlen(str);
		this->str = new char[length + 1];

		for (int i = 0; i < length; i++)
		{
			this->str[i] = str[i];
		}
		this->str[length] = '\0';
	} 

	MyString() : MyString{ nullptr }{}
	
	~MyString()
	{
		delete[] this->str;
	}

	MyString(const MyString& other)
	{
		length = strlen(other.str);
		this->str = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			this->str[i] = other.str[i];
		}
		this->str[length] = '\0';
	}

	//������������� �������� + ��� ������������
	MyString operator+(const MyString& other)
	{
		// ������� ����� ������ ������ ��� �������� ���������� ������������ �����
		MyString newStr;

		//�������� ���������� �������� � �������� �������
		int thisLength = strlen(this->str);
		int otherLength = strlen(other.str);

		//�������� ����� �� ������������ ������ ����� ������

		newStr.str = new char[thisLength + otherLength + 1];

		//�������� ������ �� ���� ��������������� ����� � ����� ������

		int i = 0;
		for (; i < thisLength; i++)
		{
			newStr.str[i] = this->str[i];
		}
		for (int j = 0; j < otherLength; j++)
		{
			newStr.str[i] = other.str[j];
		}

		newStr.str[thisLength + otherLength] = '\0';

		return newStr;
	}

	//������������� �������� = ��� �����������
	MyString operator=(const MyString& other)
	{
		if (this->str!=nullptr)
		{
			delete[] str;
		}

		//�������� ���������� �������� 
		int thisLength = strlen(this->str);
		this->str = new char[length + 1];

		for (int i = 0; i < length; i++)
		{
			this->str[i] = other.str[i];
		}
		this->str[length] = '\0';
	}

	void Print()
	{
		cout << str;
	}
};

