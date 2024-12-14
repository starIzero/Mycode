#include <iostream>
#include <cmath>
using namespace std;

const double Ra=5.0;
const double Rb=67.5;
const double U0=10.00;

double calculate(const double U);
double calculateError(double r_theoretical, double r_experimental);


int main()
{
    double u1=2.00,u2=4.00,u3=6.00,u4=8.00;
    double r1,r2,r3,r4;
    double r1_exp, r2_exp, r3_exp, r4_exp;
    double error1, error2, error3, error4;

    r1=calculate(u1);
    r2=calculate(u2);
    r3=calculate(u3);
    r4=calculate(u4);

    r1_exp = 24.70/* 实验值 */;
    r2_exp = 14.35/* 实验值 */;
    r3_exp = 8.90/* 实验值 */;
    r4_exp = 7.14/* 实验值 */;

    error1 = calculateError(r1, r1_exp);
    error2 = calculateError(r2, r2_exp);
    error3 = calculateError(r3, r3_exp);
    error4 = calculateError(r4, r4_exp);

    cout<<"u1="<<u1<<",r1="<<r1<<", error1="<<error1<<"%"<<endl;
    cout<<"u2="<<u2<<",r2="<<r2<<", error2="<<error2<<"%"<<endl;
    cout<<"u3="<<u3<<",r3="<<r3<<", error3="<<error3<<"%"<<endl;
    cout<<"u4="<<u4<<",r4="<<r4<<", error4="<<error4<<"%"<<endl;

    system("pause");
    return 0;
}
double calculate(const double u)
{
    double r;
    r=Rb*(pow((Rb/Ra),-u/U0));
    return r;
}

double calculateError(double r_theoretical, double r_experimental) {
    return fabs((r_theoretical - r_experimental) / r_theoretical) * 100;
}
