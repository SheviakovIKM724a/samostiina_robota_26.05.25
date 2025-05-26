#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("chcp 1251 > nul"); // Підключення української мови в консолі

    vector<int> numbers; // створюємо вектор цілих чисел

    // Заповнюємо вектор числами від 1 до 10
    for (int i = 1; i <= 10; ++i) {
        numbers.push_back(i);
    }

    // Виводимо елементи вектора на екран
    cout << "Елементи вектора: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
