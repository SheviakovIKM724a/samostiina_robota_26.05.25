#include <iostream>
#include <string>

using namespace std;

// Шаблонна функція для порівняння двох значень
template <typename T>
bool compareValues(const T& a, const T& b) {
    return a == b;
}

int main() {
    cout << boolalpha; // Для виводу true/false замість 1/0

    int x = 5, y = 5;
    cout << "Рівні цілі числа: " << compareValues(x, y) << endl;

    double d1 = 3.14, d2 = 2.71;
    cout << "Рівні дробові числа: " << compareValues(d1, d2) << endl;

    string s1 = "hello", s2 = "hello";
    cout << "Рівні рядки: " << compareValues(s1, s2) << endl;

    return 0;
}
