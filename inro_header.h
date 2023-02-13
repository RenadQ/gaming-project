#include <iostream>
#include <string>
#include <cctype>
#include <conio.h>
#include <windows.h>

using namespace std;


struct user_info 
{ 
    int level; 
    string username; 
};

int take_level();
void changeColor(int desiredColor);
char check_upper(char *c);

