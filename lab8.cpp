// lab8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#pragma warning(disable:4996)
using namespace std;

int main()
{
    FILE* fptr;
    string line;
    fptr = fopen("file_for_lab8", "w+");

    if (fptr == NULL) {
        cout << "Error! File dose not exist!" << endl;
        return 0;
    }
    
    getline(fin, line);

    fclose(fptr);
    return 0;
}
