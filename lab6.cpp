#include <iostream>  
#include <cstring>  
using namespace std;

int main()
{
    char str[100];   
    cout << " Enter a string: " << endl;
    cin.getline(str, 100); 

    char* ptr; 
    ptr = strtok(str, " "); 
    while (ptr != NULL)
    {
        cout << ptr << endl;
        ptr = strtok(NULL, " ");
    }



    return 0;
}

