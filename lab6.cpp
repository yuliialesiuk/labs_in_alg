
//Ввести стрічку довільної довжини, яку трактуватимемо як текст, у якому
//слова відокремлені одним або кількома інтервалами(довжина слів,
//    загалом, довільна).Вважаючи, що текст може містити слова, які
//    складаються як з букв, так із цифр, а також слова, у які цифри не входять,
//    вивести у вигляді стрічки всі слова, що не містять цифр.Слова у стрічці
//    відокремити трьома інтервалами.

//how to call a word to find words with num?

#include <iostream>  
#include <cstring>  
#include<ctype.h>
using namespace std;

bool analise_word(char*);

int main()
{
    const int s_len = 100;
    char str[s_len+1];   
    cout << " Enter a string: " << endl;
    cin.getline(str, s_len); 
    char rsd[] = " .,";
    char* ptr; 
    ptr = strtok(str, rsd); 

    int flag = 0;
    int flag_d = 1;

    while (ptr != NULL)
    {
        flag = 1;
        if (analise_word(ptr)) {
            cout << ptr << endl;
            flag_d = 0;
        }
        ptr = strtok(NULL, rsd);
    }
    if (!flag) {
        cout << "text is enpty\n";
    }
    else if (flag_d) {
        cout << "All words are digital\n";
    }
    cout << "end of program\n";




    return 0;
}

bool analise_word(char* w)
{
    for (int i = 0; w[i]; i++) {
        if (isdigit(w[i]))
            return false;
    }
    return true;
}
