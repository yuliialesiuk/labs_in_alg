#include <iostream>
#include <clocale>
#include <algorithm> 
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

using namespace std;

struct Worker
{
    char pib[40];
    char posada[40];
    int year;
};

void insertion(Worker* array, int n)// how to write the function of sorting
{

    Worker  tmp;

    for (int i = 1, j; i < n; i++)
    {

        tmp = array[i];
        for (j = i - 1; j >= 0 && strcmp(array[j].pib, tmp.pib) > 0; j--)

            array[j + 1] = array[j];
        array[j + 1] = tmp;

    }
}


int   main()
{
    int stazh, enteredStazh, fl;

    // Оголошення масиву на 10 структур
    Worker* array;
    int n;
    cout << "Number of employees";
    // Введення n (число працівників)
    cin >> n;
    array = new Worker[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Last name of employee\t";
        cin >> array[i].pib;
        cout << "Title of the post\t";
        cin >> array[i].posada;
        cout << "Year, when "<< array[i].pib<<" enter the post\t";
        cin >> array[i].year;
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Last name\t" << array[i].pib;
        cout << "Post \t" << array[i].posada;
        cout << " Year \t" << array[i].year;

    }
    insertion(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i].pib;
    }
    cout << endl;

    cout << "enter the entire length of time: ";
    cin >> enteredStazh;

    for (int i = 0; i < n; i++)
    {
        stazh = (2023 - array[i].year);

        if (stazh > enteredStazh)
        {
            fl = 1;
            cout << array[i].pib;
            cout << "\n";
        }
    }
    if (fl == 0)
        cout << "there aren'tsuitable workers ";

}