#pragma once
class Fraction
{
private:

    int numerator;//���������
    int denominator;// �����������
    int sign;// ���� �����
    int intPart;// ����� ����� �����
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
                // ���������� ���(���������, �����������)
                // ���������� �������
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
                // ���������� ���(���������, �����������)
                // ���������� �������
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


    // ����� �������� ���� ������
    Fraction operator + (Fraction);
    // ����� ��������� ���� ������
    Fraction operator - (Fraction);
    // ����� ��������� ���� ������
    Fraction operator * (Fraction);
    // ����� ������� ���� ������
    Fraction operator / (Fraction);
    // ����� ��������� �� (-1)
    Fraction operator - ();
    // ������������� �������
    // ������� �������� ������ ����� � �����
    friend Fraction operator + (int, Fraction);
    // ������� ��������� ����� �� ������ �����
    friend Fraction operator - (int, Fraction);
    // ������� ��������� ������ ����� � �����
    friend Fraction operator * (int, Fraction);
    // ������� ������� ������ ����� �� �����
    friend Fraction operator / (int, Fraction);

};

