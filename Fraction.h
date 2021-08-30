#pragma once
class Fraction
{
private:

    int numerator;//числитель
    int denominator;// знаменатель
    int sign;// знак числа
    int intPart;// целое число дроби
    void GetIntPart();

public:
    void Print();

    Fraction(int pX, int pY, int s) : numerator{ pX }, denominator{ pY }, sign{ s }, intPart{ 0 }
    {
        void Cancellation();
        {

            if (numerator != 0)
            {
                int m = denominator,
                    n = numerator,
                    ost = m % n;
                // вычисление НОД(числитель, знаменатель)
                // алгоритмом Евклида
                while (ost != 0)
                {
                    m = n; n = ost;
                    ost = m % n;
                }
                int nod = n;
                if (nod != 1)
                {
                    numerator /= nod; denominator /= nod;
                }
            }
        }

    }

    Fraction(int pX, int pY) : Fraction{ pX,pY,1 }
    {


        void Cancellation();
        {
            if (numerator != 0)
            {
                int m = denominator,
                    n = numerator,
                    ost = m % n;
                // вычисление НОД(числитель, знаменатель)
                // алгоритмом Евклида
                while (ost != 0)
                {
                    m = n; n = ost;
                    ost = m % n;
                }
                int nod = n;
                if (nod != 1)
                {
                    numerator /= nod; denominator /= nod;
                }
            }
        }


    }

    Fraction(int pX) : Fraction{ pX,1,1 } {}

    Fraction() : Fraction{ 0,1,1 } {}

    ~Fraction(){}


    // метод сложения двух дробей
    Fraction operator + (Fraction);
    // метод вычитания двух дробей
    Fraction operator - (Fraction);
    // метод умножения двух дробей
    Fraction operator * (Fraction);
    // метод деления двух дробей
    Fraction operator / (Fraction);
    // метод умножения на (-1)
    Fraction operator - ();
    // дружественные функции
    // функция сложения целого числа и дроби
    friend Fraction operator + (int, Fraction);
    // функция вычитания дроби из целого числа
    friend Fraction operator - (int, Fraction);
    // функция умножения целого числа и дроби
    friend Fraction operator * (int, Fraction);
    // функция деления целого числа на дробь
    friend Fraction operator / (int, Fraction);

};

