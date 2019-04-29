#include <iostream>

#include <string.h>
#include <stdio.h>

using namespace std;

int main()

{

    char str1[20], str2[20];

    int i, len = 0;

    cout << "Enter the string : ";

    gets(str1);

    len = strlen(str1);
    for (i=0; i<len; i++)

        str2[i] = str1[len-i-1];

    cout << str1 << ".    ."<< str2<<".      ."<<len<<"     ";
    i=0;
    while(str1[i]==str2[i] && i<len) i++;
    cout << i <<"   ";    
    if (i != len)

        cout << str1 << " is not a palindrome";

    else

        cout << str1 << " is a palindrome";

    return 0;
}
