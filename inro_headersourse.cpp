#include <iostream>
#include <string>
#include <cctype>
#include "inro_header.h"
#include <conio.h>
#include <windows.h>

using namespace std;

int take_level()
{
    int level;
    do{
        cout<<"tell us what level are you? (1-2-3-4) : "<<endl<<"\t (1) for beginner ."<<endl<<"\t (2) for intermediate ."<<endl<<"\t (3) for advance ."<<endl<<"\t(4) for mini quiz"<<endl;
        cout<<"\t";
        cin>>level;
        if(level!=1 && level!=2 &&level!=3 &&level!=4){
            cout<<"invalid entry"<<endl; 
            return take_level();  //Recursion function
        }else{ 
            return level;  
        }

    }while(level!=1 && level!=2 &&level!=3 &&level!=4);  

    return 0;   
}


char check_upper(char *c) //using pointer
{ 
    if (isupper(*c)) 
      return (char)tolower(*c);
      
    else
    return *c;

}

void changeColor(int desiredColor)
{ 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),desiredColor ); 
}

