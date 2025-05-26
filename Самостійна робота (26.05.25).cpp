#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    system("chcp 1251 > nul"); // Підключення української мови

    int x = 5, y = 10;
    cout << "До обміну: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "Після обміну: x = " << x << ", y = " << y << endl;

    double a = 3.14, b = 2.71;
    cout << "\nДо обміну: a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "Після обміну: a = " << a << ", b = " << b << endl;

    return 0;
}
