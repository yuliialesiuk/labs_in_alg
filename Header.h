#pragma once
#include <iostream>
#include <clocale>
#include<iomanip>
#pragma warning(disable:4996)
using namespace std;
const int s_len = 40;
enum{finish, createarray, outputarray, sortArray,findworker };
struct WORKER
{
    char pib[s_len+1];
    char post[s_len];
    int year;
    void input_data(const char*);
    void output_data(const char*);

};
void create_array(WORKER*&, int&, const char*);
void output_array(WORKER*, int, const char*);
void sort_array_by_pib(WORKER*, int);
void find_worker_by_exp(WORKER*, int);
int menu();//можливі дії
int enter_variant(WORKER*&, int&, int);
int input_num(const char*);