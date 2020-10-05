#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //�������� PI � ����������� ��������� �� ������� �����
    double PI_1;
    double mp = sqrt(2);
    double res1 = mp/2;

    for(int i = 0; i < 100; i++){ // ��� ������ �������� � �����, ��� ������ �������� PI, ������ ����� ���������� ����������� �������������
        mp = sqrt(2 + mp);
        res1 *= mp;
        res1 /= 2;
    }
    PI_1 = 2/res1;

    cout << setprecision(100) << PI_1 << '\n';

    //�������� PI � ����������� ��������� �� ������� �������
    double PI_2;
    double num = 2.0;
    double denom = 1.0;
    double res2 = 2.0;
    for(long long i = 1; i <= 1000000000; i++){ // ��� ������ �������� � �����, ��� ������ �������� PI, ������ ����� ���������� ����������� �������������
        if(i % 2 != 0) denom += 2;
        else num += 2;
        res2 *= (num*1.0/denom);
    }

    PI_2 = 2.0*res2;

    cout << setprecision(100) << PI_2 << '\n';

    //�������� PI � ����������� ��������� � ������� ���� ��������
    double PI_3;
    double denominator = 1.0;
    double res3 = 1.0/denominator;
    for(long long i = 1; i <= 1000000000; i++){ // ��� ������ �������� � �����, ��� ������ �������� PI, ������ ����� ���������� ����������� �������������
        denominator += 2;
        res3 = ((i % 2 != 0) ? res3 - 1.0/denominator : res3 + 1.0/denominator);
    }

    PI_3 = 4.0*res3;

    cout << setprecision(100) << PI_3 << '\n';

    //�������� PI � ����������� ��������� � ������� ���� �������� ���������
    double PI_4;
    double res4 = 1.0;
    for(int i = 2; i < 100000000; i++){ // ��� ������ �������� � �����, ��� ������ �������� PI, ������ ����� ���������� ����������� �������������
        res4 += (1.0/pow(i,2));
    }

    PI_4 = sqrt(6.0*res4);

    cout << setprecision(100) << PI_4 << '\n';

    //�������� PI � ����������� ��������� � ������� ����������-����
    double PI_5 = 2.0*sqrt(3);
    double summ = 0.0;

    for(int i = 0; i < 10000000; i++){ // ��� ������ �������� � �����, ��� ������ �������� PI, ������ ����� ���������� ����������� �������������
        summ += pow(-1.0,i)/(pow(3.0,i)*(2.0*i + 1.0));
    }

    PI_5 *= summ;

    cout << setprecision(100) << PI_5 << '\n';

    return 0;
}
