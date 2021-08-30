#pragma once
#include <iostream>
#include <string>

using namespace std;


//class Date
//{
//	int day;
//	int year;
//	string month;
//public:
//
//	Date(int dayP, int yearP, string monthP) : day{ dayP }, year{ yearP }, month{ monthP } {}
//	Date() : Date{0,0,""} {}
//
//
//};

class Human
{
private:
	string name;
	string month;
	int day;
	int year;
	long  SocialID;
	static int Count;

public:
	

	Human(string nameP, string monthP, int dayP, int yearP, long codP)
		: name{ nameP }, month{ monthP }, day{ dayP }, year{ yearP }, SocialID{ codP } {Count++;}
	Human() : Human{ "","",0,0,0,} {}
	
	Human(const Human& object)
		: name{ object.name }, month{ object.month }, day{ object.day }, year{ object.year }, SocialID{ object.SocialID } {Count++; }

	~Human() { Count--; }

	string GetName() { return name; }
	void SetName(string nameP) { name = nameP; }
	string GetMonth() { return month; }
	void SetMonth(string monthP) { month = monthP; }
	int GetDay() { return day; }
	void SetDay(int datP) { day = datP; }
	int GetYear() { return year; }
	void SetYear(int yearP) { year = yearP; }
	long GetSocialID() { return SocialID; }
	void SetSocialID(int codP) { SocialID = codP; }



	void Print()
	{
		
		cout << "Имя: " << name << endl;
		cout << "Дата рождения: " << day << " " << month << " " << year << endl;
		cout << "Идентификационный номер: " << SocialID << endl;

	}

	static int ShowCount() { return Count; }
	
};

