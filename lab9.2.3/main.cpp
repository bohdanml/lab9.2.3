#include <iostream>
#include <Windows.h>
#include <string>
#include "Student.h"
using namespace std;


int main()
{
    int BinarySearch(Student * p, int low, int high, const std::string & prizv, double avgMark, int thirdMark, int N);
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int N, K = 3, menuItem;
    cout << "Введіть кількість студентів N: ";
    cin >> N;

    Student* p = new Student[N];
    cout << endl << endl << endl;
    do
    {
        cout << "\nОберіть дію:" << endl << endl;
        cout << "(1) – Створити таблицю \n(2) – Вивести таблицю, \n(3) – Вивести кількість студентів, які мають середній бал більше 4.5, з вказаною умовою \n(4) - Вивести предмет з найвищим середнім балом\n(0) - Вихід\nВведіть номер опції: ";
        cin >> menuItem;
        switch (menuItem)
        {
        case 1: Create(p, N); break;
        case 2: PrintTable(p, N); break;
        case 3:
        {
            std::string searchPrizv;
            double searchAvgMark;
            int searchThirdMark;
            
            cout << "Введіть прізвище студента: ";
            cin >> searchPrizv;
            cout << "Введіть середній бал: ";
            cin >> searchAvgMark;
            cout << "Введіть оцінку з третього предмету: ";
            cin >> searchThirdMark;

            // Сортування масиву перед використанням бінарного пошуку
            // (при необхідності)

            int result = BinarySearch(p, 0, N - 1, searchPrizv, searchAvgMark, searchThirdMark, N);

            if (result != -1)
            {
                cout << "Студент знайдений на позиції " << result + 1 << endl;
                // Додаткові дії зі знайденим студентом (якщо потрібно)
            }
            else
            {
                cout << "Студент не знайдений" << endl;
            }
            break;
        }
        case 4: cout << SubjmaxAvgMark(p, N, K); break;
        case 0: break;
        }
    } while (menuItem != 0);

    cout << endl << endl << endl;
}