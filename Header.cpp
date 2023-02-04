

#include "Header.h"



void create_array(WORKER*& array, int& m, const char* msg)
{
    cout << msg;
    /*cout << "Number of employees";
    cin >> m;*/
    do {
        m = input_num(" count employers ");
    } while (m<1);

    array = new WORKER[m];
    for (int i = 0; i < m; i++)
    {
        array[i].input_data("\nCurrent info about worker\n");
       
    }
}

void output_array(WORKER* array, int m, const char* msg)
{
    cout << msg;
    if (!m) {
        cout << "Information absent\n";
        return;
    }
    for (int i = 0; i < m; i++)
    {
        array[i].output_data("\n");

    }
}

void sort_array_by_pib(WORKER* array, int m)
{
    if (!m) {
        cout << "Data about worker absent\n";
        return;
    }
    WORKER  tmp;
    int flag = 1;
    while(flag && m )
    {
        flag = 0;
        m--;
        /*tmp = array[i];*/
        for (int j = 0; j < m; j++) {
            if (strcmp(array[j].pib, array[j+1].pib) > 0) {
                flag = 1;
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
    /*for (int i = 0; i < m; i++)
    {
        cout << array[i].pib;
    }
    cout << endl;*/
}

void find_worker_by_exp(WORKER* array, int m)
{
    if (!m) {
        cout << "Data about worker absent\n";
        return;
    }
    int flag=0, stazh, period;
    
    do period = input_num("the entire length of time: "); while (period < 1);
    cout << "Info about worker witn expiriance more then " << period <<"\n";
    for (int i = 0; i < m; i++)
    {

        stazh = (2023 - array[i].year);

        if (stazh > period)
        {
            flag = 1;
            array[i].output_data("\n");
        }
    }  if (flag == 0) {
        cout << "there aren't suitable workers \n";
    }
}

int menu()
{
    cout << "\nChoice variant of task\n";
    cout << createarray << " - Enter an array;" << endl;
    cout << outputarray << " - Show entered array;" << endl;
    cout << sortArray << " - Sort the workers in alphabetical order;" << endl;
    cout << findworker << " - Find worker by expiriace;" << endl;
    cout << finish << " - or other - Exit;" << endl;

    return input_num("variant");
}

int enter_variant(WORKER*& array, int& n, int k)
{
    

    switch (k)
    {
    case createarray:
        create_array(array, n, "Created data about worker\n");
        break;
    case outputarray:
        output_array(array, n, "\nData about worker\n");
        break;
    case sortArray:
        sort_array_by_pib(array, n);
        break;
    case findworker:
        find_worker_by_exp(array, n);
        break;
    default:
        k = 0;
        break;
        
    }
    return k;
}

int input_num(const char* msg)
{
    cout << "Enter " << msg << " = ";
    const int s_len = 5;
    char number[s_len + 1];
    cin.getline(number, s_len);
    return atoi(number);
}



void WORKER::input_data(const char* msg)
{
    cout << msg;
    cout << "Last name of employe: ";
    cin.getline(pib, s_len);
    cout << "Title of the post: ";
    cin.getline(post, s_len);
    year = input_num("Year, when enter the post ");
}

void WORKER::output_data(const char* msg)
{
    cout << msg;
    int p = 10;
    cout << "|Last name:" << setw(p) << pib << " ";
    cout << "|Post :" << setw(p) << post << " ";
    cout << " |Year :" << year << endl;
}
