
#include <iostream>
#include <random>
using namespace std;
int main()
{
    system("color F");
    setlocale(LC_ALL, "Russian");
    
    int num, left, right, count,i ,x , y;
    int choice;
    bool run;
    int summ = 0;
    cout << "ИГРА" << endl;
    cout << "ПРОВЕРКА ТАБЛИЦЫ УМНОЖЕНИЯ" << endl << endl;
    cout << "Выберите уровень сложности :" << endl;
    cout << "Лёгкий - 1" << endl;
    cout << "Средний - 2" << endl;
    cout << "Сложный - 3" << endl;
    cout << "Чтобы завершить , введите 0";
    cout << "Введите уровень сложности : ";
    cin >> choice;

    switch(choice)
    {
    case(0) :
        cout << "ТЫ ПОКИНУЛ ИГРУ :( " << endl;
        break;
    case(1) :
        cout << "ЛЁГКИЙ УРОВЕНЬ" << endl;
        left = 0;
        right = 4;
        count = 3;
        run = true;
    case(2):
        cout << "СРЕДНИЙ УРОВЕНЬ" << endl;
        left = 1;
        right = 6;
        count = 5;
        run = true;
    case(3):
        cout << "СЛОЖНЫЙ УРОВЕНЬ" << endl;
        left = 3;
        right = 9;
        count = 8;
        run = true;
    default:
        cout << "Неверный ход" << endl;
        run = false;
        break;
    
        cout << "Вам предстоит решить " << count << "примеров" << endl;
        for (i = 0; i < count; i++) {
            x = rand() % right + left;
            y = rand() % right + left;
            cout << x << "*" << y << "=";
            cin >> num;
            if (num == x * y) {
                summ++;
                cout <<"Правильных ответов" << summ << "из" << count;

            }

        }



    
      
    }
    system("pause");
    return 0;

}


