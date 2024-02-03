// Найти произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры : 1 <= a <= 20)


#include <iostream>
#include<windows.h>
using namespace std;


int main()
{
    SetConsoleCP(12510);
    SetConsoleOutputCP(1251);

    int border = 20,
    userInputA;
    cout << "Помогу найти произведение (факториал) целых чисел от а до 20, введите чему равно а: ";
    cin >> userInputA;

    // Проверка на корректность ввода
    while (true)
    {        
        if (userInputA > border)
        {
            cout << "Некорректное значение a. Введите значение от a до 500, (a  не может быть больше) " << border << " введите корректное значение" << endl;
            cin >> userInputA;
        }            
        else
        {
            break; 
        }
        

    }

    int accum = 0;

    for (int i = userInputA; i <= border; ++i) {
        accum *= i;
    }

    cout << "Сумма целых чисел (факториал) от " << userInputA << " до: " << border << accum << endl;

}
