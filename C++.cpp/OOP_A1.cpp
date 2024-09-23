#include <iostream>
using namespace std;

class Complex {
    double real;
    double img;

public:
    Complex(); // Default Constructor
    friend istream& operator>>(istream&, Complex&); // Input
    friend ostream& operator<<(ostream&, const Complex&); // Output
    Complex operator+(const Complex&) const; // Addition
    Complex operator*(const Complex&) const; // Multiplication
};

Complex::Complex() : real(0), img(0) {}

istream& operator>>(istream& in, Complex& c) {
    in >> c.real >> c.img;
    return in;
}

ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real;
    if (c.img >= 0) 
        out << " + " << c.img << "i";
    else 
        out << " - " << -c.img << "i";
    return out;
}

Complex Complex::operator+(const Complex& c) const {
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}

Complex Complex::operator*(const Complex& c) const {
    Complex temp;
    temp.real = real * c.real - img * c.img;
    temp.img = real * c.img + img * c.real;
    return temp;
}

int main() {
    Complex C1, C2, C3, C4;
    int flag = 1;
    char b;
	cout<<"enter your name ";
	string name;
	cin>>name;
    while (flag) {
        cout << "Enter Real and Imaginary part of the Complex Number 1:\n";
        cin >> C1;
        cout << "Enter Real and Imaginary part of the Complex Number 2:\n";
        cin >> C2;

        int f = 1;
        while (f) {
            cout << "Complex Number 1: " << C1 << endl;
            cout << "Complex Number 2: " << C2 << endl;
            cout << "**********MENU**********" << endl;
            cout << "1. Addition of Complex Numbers" << endl;
            cout << "2. Multiplication of Complex Numbers" << endl;
            cout << "3. Exit" << endl;

            int a;
            cout << "Enter your choice from above MENU (1 to 3): ";
            cin >> a;

            if (a == 1) {
                C3 = C1 + C2;
                cout << "Addition: " << C3 << endl;
            } else if (a == 2) {
                C4 = C1 * C2;
                cout << "Multiplication: " << C4 << endl;
            } else {
                cout << "Thanks for using this program!!\n";
                flag = 0;
                break;
            }

            cout << "Do you want to perform another operation (y/n): ";
            cin >> b;
            if (b == 'y' || b == 'Y') {
                f = 1;
            } else {
                cout << "Thanks for using this program!!\n";
                flag = 0;
                f = 0;
            }
        }
    }

    return 0;
}
