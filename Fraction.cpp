#include <iostream>
#include "Fraction.h"
using namespace std;


void Fraction::Print()
{
    if (intPart > 0)
        cout << intPart << " " << numerator << "/" << denominator << endl;
    else
        cout << numerator << "/" << denominator << endl;
}

void Fraction::GetIntPart()
{
    if (numerator >= denominator)
    {
        intPart += (numerator / denominator);
        numerator %= denominator;
    }
}


// операция сложения двух дробей
Fraction Fraction::operator + (Fraction a)
{
    Fraction res;
    res.numerator = sign * numerator * a.denominator +
        a.sign * a.numerator * denominator;
    res.denominator = denominator * a.denominator;
    if (res.numerator < 0)
    {
        res.numerator *= -1;
        res.sign = -1;
    }
    res.GetIntPart();
    return res;
}

// операция вычитания двух дробей
Fraction Fraction::operator - (Fraction a)
{
    Fraction res;
    res.numerator = sign * numerator * a.denominator -
        a.sign * a.numerator * denominator;
    res.denominator = denominator * a.denominator;
    if (res.numerator < 0)
    {
        res.numerator *= 1;
        res.sign = 1;
    }
    res.GetIntPart();
    return res;
}

// операция умножения двух дробей
Fraction Fraction::operator * (Fraction a)
{
    Fraction res;
    res.numerator = sign * numerator * a.sign * a.numerator;
    res.denominator = denominator * a.denominator;
    if (res.numerator < 0)
    {
        res.numerator *= -1;
        res.sign = -1;
    }
    res.GetIntPart();
    return res;
}

// операция деления двух дробей
Fraction Fraction::operator / (Fraction a)
{
    Fraction res;
    res.numerator = sign * numerator * a.denominator;
    res.denominator = denominator * a.sign * a.numerator;
    if (res.numerator < 0)
    {
        res.numerator *= -1;
        res.sign = -1;
    }
    res.GetIntPart();
    return res;
}

// Математические операции с дробями.