
template <typename T>
class Complex {
    public:
        T value1;
        T value2; // complex part
    
        Complex();
        Complex(T value1, T value2);

        void print();

        T get_real_part() {
            return value1;
        }

        T get_complex_part() {
            return value2;
        }

        //Complex operator+(Complex num1) const; 

};

template <typename T>
std::ostream& operator<<(std::ostream &out, Complex<T> &number);

template <typename T>
Complex<T> operator+(const Complex<T> &number1, const Complex<T> &number2);