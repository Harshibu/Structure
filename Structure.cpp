#include <iostream>
#include <locale>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");

    struct Stud //создание структуры "Список Студентов"
    {
        char fio[20];
        float srbal;
        int dohod;
    };
    const int kvo = 1; // Обьявление переменной kvo - количество  студентов в списке
    int numd;
    cout << "Список студентов на заселение в общежитие: " << endl;
    Stud Fam[kvo] ; // Структура Stud с массивом Fam - кол-во студентов
    for (numd = 0; numd < kvo; numd++) {
        cout << "Введите Фамилию " << numd + 1 << "-го студента -> "; // Фамилию на англ.
        cin >> Fam[numd].fio;
        cout << "Введите средний балл " << numd + 1 << "-го студента -> ";
        cin >> Fam[numd].srbal;
        cout << "Введите доход на члена семьи  " << numd + 1 << "-го студента ->";
        cin >> Fam[numd].dohod;
    }
    cout << endl << endl;
    for (numd = 0; numd < kvo; numd++)
    {
        cout << "Студент - " << Fam[numd].fio << " , доход - " << Fam[numd].dohod << endl;
    }
    int mindohod = Fam[0].dohod;
    int number = 0;
    for (numd = 0; numd < kvo; numd++)
    {
        if (mindohod > Fam[numd].dohod)
        {
            mindohod = Fam[numd].dohod;
            number = numd;
        }
    }
    cout << endl << "Фамилия студента с минимальным доходом - " << Fam[number].fio << endl;
}
