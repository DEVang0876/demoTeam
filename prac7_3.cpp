#include<iostream>
using namespace std;
 /fsufyqwuwervtugbtitivutbetijetq3
class Complex {
private:
    int real;
    int imaginary;
public:
    Complex(int r, int i) : real(r), imaginary(i) {}

    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imaginary + c.imaginary);
    }

    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imaginary - c.imaginary);
    }

    Complex operator*(const Complex& c) {
        return Complex(real * c.real - imaginary * c.imaginary, real * c.imaginary + imaginary * c.real);
    }

    Complex operator/(const Complex& c) {
        int denominator = c.real * c.real + c.imaginary * c.imaginary;
        int realPart = (real * c.real + imaginary * c.imaginary) / denominator;
        int imaginaryPart = (imaginary * c.real - real * c.imaginary) / denominator;
        return Complex(realPart, imaginaryPart);
    }

    Complex operator-() {
        return Complex(-real, -imaginary);
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    int r1, r2, b1, b2;
    char c;
    cout << "Enter real part: ";
    cin >> r1;
    cout << "Enter Imaginary part: ";
    cin >> b1;
    cout << "Enter real part: ";
    cin >> r2;
    cout << "Enter Imaginary part: ";
    cin >> b2;
    cout << "Choose the operation" << endl;
    cout << "(+) Addition" << endl << "(-) Subtraction" << endl << "(/) Division" << endl << "(x) Multiplication" << endl << "(!) Negation" << endl;
    cout << "Enter your choice: ";
    cin >> c;

    Complex complex1(r1, b1);
    Complex complex2(r2, b2);
    Complex result(0, 0);
    Complex result1(0, 0);
  
    switch (c) {
    case '+': result = complex1 + complex2; break;
    case '-': result = complex1 - complex2; break;
    case '/': result = complex1 / complex2; break;
    case 'x': result = complex1 * complex2; break;
    case '!': result = -complex1; result1 = -complex2; break;
    }
    
    result.display();
    result1.display();

    return 0;
}
