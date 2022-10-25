
#include <iostream>

using namespace std;

int main()
{
    char text[] = {"HELLO MY FRIEND ALEX, SHOW ME Your coDE!"};
    char test;
    int number = 0;
    int i = 0;
    while (text[number] != '\0'){
        test = text[number];
        if (i % 2 == 0){
            if (int(test) < 97){
                cout << test;
            } else {
                test = text[number] - 32;
                cout<<test;}
        }else {
            if (int(test) >= 97 or text[number] == ' ' or text[number] == '.' or text[number] == ',' or text[number] == '!' or text[number] == '?' or text[number] == ':'){
                 cout << test;
            } else {
                test = text[number] + 32;
                cout << test;}
        }
        if (text[number] != ' ' and text[number] != '.' and text[number] != ',' and text[number] != '!' and text[number] != '?' and text[number] != ':'){
            i++;}
        number++;
    }
    return 0;
}
