
//10. Описати структуру з ім’ям «WORKER», що містить наступні поля :
//«П.І.Б.працівника»;
//«Назва посади»;
//«Рік прийняття на роботу».
//Написати програму для реалізації таких дій :
//A.Ввід даних в масив структур типу «WORKER» та сортування
//записів в алфавітному порядку по полю «П.І.Б.працівника;
//B.Вивід «П.І.Б.працівника» тих працівників, чий стаж роботи
//перевищує введене користувачем значення.
//Якщо таких працівників немає – вивести відповідне повідомлення.


#include "Header.h"
int main()
{
    /*WORKER a = { "Last name", "post", 2022 };
    a.output_data("a");
    return 0;*/
    WORKER* array = 0;
    int n = 0, variant;
    do {
        variant = menu();
        variant = enter_variant(array, n, variant);
    } while (variant);
    cout << "end of program" << endl;
    return 0;
}