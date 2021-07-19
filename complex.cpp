#include <iostream>
#include "complex.h"

using namespace std;

template <typename T>
Complex<T>::Complex(T value1, T value2) {
    this->value1 = value1;
    this->value2 = value2;
}

template <typename T>
void Complex<T>::print() {
    cout << this->value1 << " + " << this->value2 << "i" << endl;
}

template <typename T>
std::ostream& operator<<(std::ostream &out, Complex<T> &number) {
    out << number.value1 << "+" << number.value2 << "i";
    return out;
}

template <typename T>
Complex<T> operator+(const Complex<T> &num1, const Complex<T> &num2) {
    int real_part;
    int complex_part;
    real_part = num1.value1 + num2.value1;
    complex_part = num1.value2 + num2.value2;

    Complex<T> result_complex(real_part, complex_part);
    return result_complex;
}

int main() {
    // test1: create and print complex number
    Complex<int> complex_num(1,2);
    complex_num.print();
    cout << complex_num << endl;

    // test2: overloaded operators
    Complex<int> complex_num2(2,3);
    Complex<int> complex_result = complex_num + complex_num2;
    cout << complex_result << endl;

    return 0;
}