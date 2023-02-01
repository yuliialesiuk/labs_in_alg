#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    ofstream foptr;
    ifstream fiptr;

    string line;
    foptr.open("file_for_lab8");
    fiptr.open("file_for_getting_lab8");

    if (!foptr) {
        cout << "Error! File dose not exist!" << endl;
        return 0;
    }
    if (!fiptr) {
        cout << "Error! File dose not exist!" << endl;
        return 0;
    }
    
    getline(fiptr, line);

    int len = line.length();

    for (int i = 0; i < len; i++) {
        if (line[i] = 1) {
            line[i] = 0;
        }
        else if (line[i] = 0) {
            line[i] = 1;
        }

    }

    foptr << line << endl;

    foptr.close();
    fiptr.close();
    return 0;
}

