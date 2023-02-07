// 10. Задано текстовий файл. Переписати у вихідний файл всі компоненти
//вхідного файлу із заміною в них символу ‘0’ на символ ‘1’ і навпаки.


#include <iostream>
#include <fstream>
//#include <string>
//#include <sstream>

using namespace std;
int show_file(const char*, const char*);
int change_file(const char*, const char*);
int main()
{
    char fn1[] = "f1.txt";
    char fn2[] = "f2.txt";
    if (show_file(fn1, " data file ") < 1) {
        cout << "Continue impossible";
        return 1;
    }
    if (!change_file(fn1, fn2)) {
        cout << "Continue impossible";
        return 1;
    }
    if (show_file(fn2, "result file")) {
        cout << "unsuccesed";
        return 1;
    }
    return 0;
}

int show_file(const char* fn, const char* msg)
{
    ifstream f(fn);
    if (!f) {
        cout << "Error! File " << fn << " dose not exist!" << endl;
        return 0;
    }
    cout << "Content of the file " << fn << "  " << msg << endl;
    char l;
    int flag = 0;
    l = f.get();
    while (!f.eof()) {
        cout << l;
        flag = 1;
        l = f.get();
    } cout << endl;
    if (!flag) {
        cout << "Is empty\n";
            return -1;
    }
    return 1;
}

int change_file(const char* fn1, const char* fn2)
{
    ifstream f1(fn1);
    if (!f1) {
        cout << "Error! File" << fn1 << " dose not exist!" << endl;
        return 0;
    }
    ofstream f2(fn2);
    if (!f2) {
        cout << "Error! Path to file" << fn2 << " dose not exist!" << endl;
        return 0;
    }
    char s = f1.get();
    while (!f1.eof()) {
        if (s == '1') s = '0';
        else if (s == '0') s = '1';
        f2 << s;
        s = f1.get();
    }
    f2 << endl;
    f1.close();
    f2.close();
    return 1;
}
