#include <iostream>
#include <cmath>

using namespace std;

class Complex
{
private:
double re, im;
public:

Complex(double r)
{
re = r;
im = 0;
}

Complex(double r, double i)
{
re = r;
im = i;
}
// оператор сложения
Complex operator + (const Complex& c)
{
return Complex(re + c.re, im + c.im);
}

// оператор вычитания
Complex operator - (const Complex& c)
{
return Complex(re - c.re, im - c.im);
}

// оператор умножения
Complex operator * (const Complex& c)
{
return Complex(re * c.re - im * c.im, re * c.im + im * c.re);
}
// Модуль комплексного числа
double abs()
{
return sqrt(re * re + im * im);
cout << re * re + im * im;
}
~Complex() {}
};

int main() {
int n;
cin >> n;
double* array = new double[n];
double a, b, c;
for (int i = 0; i < n; ++i) {
cout << "Enter the real part";
cin >> a;
cout << "Enter the imaginary part";
cin >> b;
Complex c = Complex(a, b);
array[i] = c.abs();
}
for (int i = 0; i < n; ++i)
cout << array[i] << " ";

int j = 0;
double tmp = 0;
for (int i = 0; i < n; i++) {
j = i;
for (int k = i; k < n; k++) {
if (array[j] > array[k]) {
j = k;
}
}
tmp = array[i];
array[i] = array[j];
array[j] = tmp;
}
cout << endl;
for (int i = 0; i < n; ++i)
cout << array[i] << " ";
}
