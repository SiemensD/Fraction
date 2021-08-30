#include <iostream>
#include <string>
#include"Fraction.h"
#include"Human.h"
#include"MyString.h"

using namespace std;

int Human::Count = 0;

void FRACTION()
{
    int x, y, sign;
    cout << "Введите числитель: ";
    cin >> x;
    cout << endl;
    cout << "Введите знаменатель: ";
    cin >> y;
    cout << endl; cout << "если дробь лтрицательна введите (-1), если положительная введите (1) ";
    cin >> sign;
    cout << endl;
    

    Fraction d1(x, y,sign);       
    cout << "d1 = ";
    d1.Print();
    Fraction d2(3, 8);     // создание дроби 2 3/8
    cout << "d2 = ";
    d2.Print();
    Fraction d3;

    d3 = d1 - d2;
    cout << "d3 = ";
    d3.Print();
}

void HUMAN()
{
    Human a("Иванов Иван Иванович", "март", 5, 2012, 1212121212);
    a.Print();
    cout << "--------------------------------------------------------" << endl;
    Human b("Сидоров Петр Петрович", "январь", 12, 1998, 1567982493);
    b.Print();
    cout << "--------------------------------------------------------"<<endl;
    Human c("Протасова Ирина Павловна", "июнь", 03, 1989, 65932547832);
    c.Print();
    cout << endl;
    cout << "Количество созданных объектов: " << Human::ShowCount() << endl;
}

void MYSTRING()
{
    MyString a;

}




int main()
{
    setlocale(LC_ALL, "ru");
    
   //FRACTION();
   //HUMAN();
  

    return 0;

}

