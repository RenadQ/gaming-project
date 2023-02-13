#include <iostream>
#include <string>
#include <cctype>
#include "inro_header.h"
#include <conio.h>
#include <windows.h>
#include <fstream> //to apply files in and out
using namespace std;



//Structure to store user name ,score and id 
struct table { int id,score;string name;};//to take info from0 file
int compare_calculatescore (char answerkey2[])//answer array
{
	double correct=0;
	for(int num=0;num<10;num++)
	{
		cout<<endl<<"The answer of question "<<num+1<<" is : ";
		cin>>answerkey2[num];
		check_upper(&answerkey2[num]);
	}

char answerkey1[10] ={'a','b','a','a','b','a','a','b','a','c'};
for(int i =0 ; i<10 ; i++)
{
	if(answerkey1[i]==answerkey2[i])
	correct++;
}
correct=(correct/10)*100;
cout<<" you finish all the qustion!"<<endl<<"your score is : "<<correct<<"%"<<endl;
return correct;
}


//  Swap function for  struct array
void swap (table &first,table &second)
{
   table temp;
    temp = second;    
    second= first;
    first = temp;
}

void bubble_sort (table list[]) 
{
    for (int i=0;i<10-1;i++)
        for (int j=0;j<10-i-1;j++)
        if (list[j].score< list[j+1].score) 
        swap (list[j],list[j+1]); // Our swap function                     
}
int pass_count=0, fail_count=0, counter=0; //global variables
void counters(bool answer)
{

	if(answer==true)
	pass_count++;
	else
	fail_count++;

counter++;

}

namespace first   // using namespace
{
void updateArray(user_info &user)
{

    string temp;
    int answer; 
    cout << "if you want to update your user name please enter number 1 if not press 0 :" << endl;
    cin >> answer;
    switch (answer)
    {

    case 1:
	 {
        cout << "pls enter your old name :\t";
        cin >> temp;
        
            if (user.username == temp)
			 {  
                cout << "enter your new user name" << endl;  
                cin >> user.username;
                break;
			}  

    } 
	case 0:
	break; 
}
}	
}

namespace second
{
void updateArray(user_info &user) 
{
    int temp;
    int answer; 
    cout << "if you want to update your level enter number 1 if not press 0 :" << endl;
    cin >> answer;
    switch (answer)
    {

    case 1:
	 {
        cout << "pls enter what level you're in' :\t";
        cin >> temp;
        
		
            if (user.level== temp)
			 {  
                cout << "which level do you want to enter" << endl;  
                cin >> user.level;
                break;
			}  
		
    }
    case 0: 
    break;
}
}
}


int main() 
{
	system(" color F1");
	bool right=true;
	bool wrong=false;
	string press;
	char playagain;
	char answer;//to check if user want to play again

	user_info user;
    cout<<"\tWelcome to intro to c++ languge\t"<<endl<<"\tPlease tell us what's your name? ";	
	cin>>user.username;
	cout<<endl<<"\tHello "<<user.username<<", hope you enjoy your time learning with us! \n"<<endl;
//take user's level
cout<<"\t"<<user.username<<", ";
user.level=take_level();



do
{


	int q1;
if(user.level==1)
{
	 double q11;
	 cout<<"\t---------------------------------------------------------------------"<<endl<<"\tSince you're a beginner, we're gonna learn about the variables. \n";
		cout<<endl<<"\tthere are so many variable types in c++:"<<endl<<"\t--------------------------------------------"<<endl;
		changeColor(0xfd);
		cout<<"\t1- int (integer)=whole number e.g. :1,2,-3."<<endl<<"\t2- double or float=numeric numbers with decimal points e.g:3.45."<<endl<<"\t3- char =a display unit of one alphabetic letter or symbol e.g.:'f' '&' ."<<endl<<"\t4- string= sequence of characters e.g.: \"computer science\" ."<<endl;
		changeColor(0xf1);
		cout<<endl<<"Now that you've learned about the variables, you'll have tasks to check your understanding (press any letter to continue"<<endl;
		cin>>press;
		cout<<"-----------------------------------------------------------------------------------------------------";
		cout<<endl<<"Q1: "<<endl<<"int x = 13;"<<endl<<"double y=3.1;"<<endl<<"sub=x/y;"<<endl<<"cout<<sub;"<<endl<<"\nguess the output:\n";
		cin>>q11;

		if (q11==4.1)
		{//if the user enter right ans 
		counters(right);
		cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;
		}
		else
		 {
		 	changeColor(0xfc);
		 	counters(wrong);
			cout<<"uncorrect "<<user.username<<endl<<"the right answer is : 4.1 "<<endl<<"why ?"<<endl<<"because when you divide an integer with a double variable you will get a double anwser "<<endl;

			changeColor(0xf1);

		}

		cout<<endl<<"Q2: \nchar r;"<<endl<<"cin>>r;"<<endl<<"cout<<r"<<endl<<"known that the user entered: c "<<endl<<"\nguess the output:\n";
		char r;
		cin>>r;
		if (r=='c'){//if the user enter right ans
		counters(right);
		cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;
		}
		else
		 {
		 	changeColor(0xfc);
		 	counters(wrong);
			cout<<"uncorrect "<<user.username<<endl<<"the right answer is : c "<<endl<<"why ?"<<endl<<"a display unit of one alphabetic letter or symbol "<<endl;

			changeColor(0xf1);

		}


		cout<<"\nQ3: \nstring r;"<<endl<<"cin>>r;"<<endl<<"cout<<r"<<endl<<"known that the user enter :computer "<<endl<<"\nguess the output:\n";
		string r2;
		cin>>r2;
		if (r2=="computer"){//if the user enter right ans
		counters(right);
		cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;
		}
		else 
		{
			counters(wrong);
			changeColor(0xfc);
			cout<<"uncorrect "<<user.username<<endl<<"the right answer is : computer "<<endl<<"why ?"<<endl<<"sequence of characters  "<<endl;	
			changeColor(0xf1);


		}

changeColor(0xfd);
		cout<<endl<<"\tas we learned % is for the rest of the division, in other words, remainder."<<endl;
		changeColor(0xf1);
		cout<<endl<<"\nQ4: \nint x=5,y=15;"<<endl<<"double sum;"<<endl<<"sum=(y%2)*x;"<<endl<<"cout<<sum;"<<endl<<"\nguess the output:"<<endl;
		cin>>q1;
		changeColor(0xf1);
		if (q1==5){//if the user enter right ans
		counters(right);
		cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;
		}
		else
		 {
		 	counters(wrong);
		 	changeColor(0xfc);
			cout<<"uncorrect "<<user.username<<endl<<"the right answer is : 5 "<<endl<<"why ?"<<endl<<"becuse 15%2=1 so 1*5=5 "<<endl;	
			changeColor(0xf1);

			//cout<<"uncorrect "<<user.username[0]<<endl<<"the right answer is : 5 "<<endl<<"why ?"<<endl<<"becuse 15%2=1 so 1*5=5 "<<endl;
		}
		changeColor(0xfd);
		cout<<"Now that you're done with variables we'll go to the next part (press any letter to continue) \n";
		cin>>press;
		cout<<"-----------------------------------------------------------------------------------------------"<<endl;


//waad part 
//getline function
changeColor(0xf1);

cout<<"------------------------------------------------------------------------------------------------"<<endl;
cout<<"|\t \t getline function                                                              |"<<endl;
cout<<"|\tthe syntax : getline(cin,str);                                                         |"<<endl;
cout<<"|\twhen working with strings, we often use the getline() function to read                 |\n|\ta line of text It takes cin as the first parameter, and the string variable as second. |"<<endl;
cout<<"------------------------------------------------------------------------------------------------"<<endl<<endl;

//cin.get function
cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
cout<<"|\t \t cin.get function                                                                     |"<<endl;
cout<<"|\tthe syntax : cin.get(str, size);                                                              |"<<endl;
cout<<"|\tcin.get() is used for accessing character array,cin.get() reads a string with the whitespace. |"<<endl;
cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

//cin.ignore function 
cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
cout<<"|\t \t cin.ignore function                                                              |"<<endl;
cout<<"|\tthe syntax: cin.ignore(str, size);                                                        |"<<endl;
cout<<"|\tThe cin.ignore() function is used which is used to ignore or clear one or more characters.|\n|\tfrom the input buffer.\t\t\t\t\t\t\t\t\t  |"<<endl;
cout<<"---------------------------------------------------------------------------------------------------"<<endl;


cout<<"\nNow that you've learned about the 3 functions,you'll solve some tasks (press any letter to continue) \n";
		cin>>press;
		cout<<"---------------------------------------------------------------------------------------------------"<<endl;	

//Q1****
cout<<"Q1: \nstring str;"<<endl<<"cout << \"Please enter your name:\";"<<endl<<" getline(cin, str);"<<endl<<"cout << \"Hello, "" <<str ;"<<endl;
cout<<"what would be the output if the user entered waad majed?"<<endl;
changeColor(0xfd);
cout<<"1-waad"<<"\t 2-waad majed"<<"\t 3-Hello, waad majed"<<"\t 4-Hello, waad"<<endl;
cin>>q1;
changeColor(0xf1);
		if (q1==3){//if the user enter right ans
		counters(right);
		cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;	
		}
		else
		 {
		 	counters(wrong);
		 	changeColor(0xfc);
			cout<<"uncorrect "<<user.username<<endl<<"the right answer is : Hello, waad majed "<<endl<<"why ?"<<endl<<"Because we used getline function "<<endl;
			changeColor(0xf1);

		}

//Q2*****
cout<<"\nQ2: \nchar name[100];"<<endl<<"cin.get(name, 3);"<<endl<<"cout << name; ";
cout<<"choose the output if the user enter CSC?"<<endl;
changeColor(0xfd);
cout<<"1-CSC"<<"\t 2-CS"<<"\t 3-SC"<<"\t 4-C"<<endl;
cin>>q1;
changeColor(0xf1);
		if (q1==2){//if the user enter right ans
		counters(right);
		cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;	
		}
		else
		 {
		 	counters(wrong);
		 	changeColor(0xfc);
			cout<<"uncorrect "<<user.username<<endl<<"the right answer is : CS "<<endl<<"why ?"<<endl<<"Because we used cin.get function "<<endl;

			changeColor(0xf1);

		}

//Q3****
cout<<"\nQ3: \ncout << \"Enter a number: \";"<<endl<<"cin >> num;"<<endl<<"cin.ignore();"<<endl<<"cout << \"You entered: \" << num;"<<endl;
cout<<"choose the output if the user enter 32 54cs?"<<endl;
changeColor(0xfd);
cout<<"1-32"<<"\t 2-3"<<"\t 3-32 45"<<"\t 4-cs"<<endl;
cin>>q1;
changeColor(0xf1);
		if (q1==1)

		{//if the user enter right ans
		counters(right);
		cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;	
		}
		else 
		{
			counters(wrong);
			changeColor(0xfc);
			cout<<"uncorrect "<<user.username<<endl<<"the right answer is : 32 "<<endl<<"why ?"<<endl<<"Because we will ignore anything after the space"<<endl;	
			changeColor(0xf1);

		}
cout<<"\nNow that you're done with the 3 functions, we'll go to the next part (press any letter to continue) \n";
		cin>>press;
		cout<<"-----------------------------------------------------------------------------------------------"<<endl;

//haya part 
//if statment
		string q2;
		cout<<"Ok now we're gonna learn about the if-statement: \n";
        cout<<endl<<"\tWe use the if-statement to specify a block of code to be executed,if a specified condition is true"<<endl<<"\tUse else to specify a block of code to be executed, if the same condition is false"<<endl<<"\tUse else if to specify a new condition to test, if the first condition is false"<<endl<<"\tUse switch to specify many alternative blocks of code to be executed"<<endl;
        cout<<"\nNow that you've learned about the if-statement,you'll solve some tasks (press any letter to continue) \n";
		cin>>press;
		cout<<"---------------------------------------------------------------------------------------------------"<<endl<<endl;	
	    cout<<"Q1: \nExample:"<<endl<<"int x = 20;"<<endl<<"int y = 18;"<<endl<<"if (x > y) {cout << \"x>y\"; }"<<endl;//if condional1 is true .
	// output for the example
	changeColor(0xfd);
	    cout<<"the output of this code is: "<<endl;
     	cin>>q2;
	   if (q2=="x>y")
	   {//if the user enter right ans
	   changeColor(0xf1);
	   counters(right);
	    cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;
	   }
	else
	{
	counters(wrong);
	changeColor(0xfc);
	cout<<"uncorrect "<<user.username<<endl<<"the right answer is : x>y "<<endl<<"why ?"<<endl<<" Because the condition1 20 is greater than 18 "<<endl;	
	changeColor(0xf1);

	}

cout<<"Another Example:"<<endl<<"int time = 22;"<<endl<<"if (time < 10) {"<<endl<<"cout << \"Good morning\"; "<<endl<<"} else if (time < 20){"<<"cout<<\"Good day\"; "<<endl<<"} else { cout << \"Good evening\"; ";//both condional1 and condional2 are false 
	// output for the example
	changeColor(0xfd);
	cout<<"the output of this code is: "<<endl;
	cin>>q2;
	if (q2=="Good evening")
	{//if the user enter right ans
	changeColor(0xf1);
	 counters(right);
	cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;
	}

	else 
	{
	changeColor(0xfc);
	cout<<"uncorrect "<<user.username<<endl<<"the right answer is : Good evening "<<endl<<"why ?"<<endl<<"time (22) is greater than 10, so the first condition is false. The next condition, in the else if statement, is also false, so we move on to the else condition since condition1 and condition2 is both false - and print to the screen Good evening"<<endl;
	counters(wrong);

	changeColor(0xf1);

	}


		//print(username,fail,success, level,4);//to print all the anwser
}
	else if(user.level==2)
{
 //khozama's part
cout<<"\t-----------------------------------------------------------"<<endl;
cout<<"\tCongrats you've been upgraded to an intermediate level!!!"<<endl<< "\tSo, now you're gonna learn about the repetition structure, in other words, loops."<<endl;
cout<<"\n\tFirst of all, what is a loop?";
cout<<"\n\tA loop is a program construction that repeats a statement or sequence of statements a number of times."<<endl;
cout<<" \n\tIn c++ there are 3 types of loops:"<<endl<<"\t1- for loop"<<endl<<"\t2- while loop"<<endl<<"\t3- do-while loop" ;
cout<<"\n\n\tThe general format of the for loop is:  for(initialization; test; update)";
cout<<"\t\t\t\t\t\t\t\t\t\t                        statement;";
cout<<endl<<"\n        note:use block { } if there is more than one statement\n"<<endl;
cout<<"\t|-----------------------------------------------------|";
cout<<"\n\t|for example: for(int count = 1; count <= 10; count++)|";
cout <<"\n\t|\t     cout<<  Hello;                           |\n";
cout<<"\t|-----------------------------------------------------|"<<endl;
cout<<"\n\tThis will print out Hello 10 times."<<endl;
cout<<"\n\tAfter learning how to make a for loop, we'll go now to the while loop. (press any letter to continue)\n";
cin>>press;
cout<<"\t--------------------------------------------------------------------------------"<<endl;
cout<<"\tThe while loop is actually quite similar to the for loop in the way it functions."<<endl;
cout<<"\n\tThe general format of the while loop is: while (condition)";
cout<<"\t\t\t\t\t\t\t\t\t\t                     statement;";
cout<<"\n       note:use block { } if there is more than one statement\n"<<endl;
cout<<"\t|---------------------------------------------|";
cout<<"\n\t|\tfor example:                          |";
cout<<"\n\t|\tint number=1                          |";
cout<<"\n\t|\twhile(number<=6)                      |";
cout<<"\n\t|\t{cout<<Hello;                         |";
cout<<"\n\t|\ti++;}                                 |"<<endl;
cout<<"\t|---------------------------------------------|"<<endl;
cout<<"\n\tThis will print out Hello 6 times."<<endl<<endl;
//anfal part 
// definition of do-while
changeColor(0xfd);
cout<<" You'll now learn about the do-while loop. (press any letter to continue)\n";
cin>>press;
changeColor(0xf1);
cout<<"\t--------------------------------------------------------------------------------"<<endl;
	cout<<"\tdo while: is a posttest loop - execute the loop, then test the expression."<<endl<<"\n\t note: it always iterates at least once."<<endl;
	//general form
	cout<<"\n\t General format:"<<endl<<"\n\t do { "<<endl<<"\t statments ; }"<<endl<<"\t while (expression) ;"<<endl<<"\n\t note: a semicolon is required after (expression)."<<endl;
changeColor(0xfd);
cout<<"\tNow that you've learned about the three types of loops we've got some tasks for you :)(press any letter to continue)\n";
cin>>press;
changeColor(0xf1);
cout<<"\n\tFirst question: \n";
cout<<"\n\t|-----------------------------------------------------|";
cout<<"\n\t|for(int num= 7 ; num< 1; num++)                      |";
cout<<"\n\t|cout<< I love programming;                           |";
cout<<"\n\t|-----------------------------------------------------|";
changeColor(0xfd);
cout<<"\n\tWhat is the output of this code? ";
cout<<"\n\tA- it will print I love programming 7 times";
cout<<"\n\tB- it will print I love programming 1 time";
cout<<"\n\tC- it will print I love programming 3 times";
cout<<"\n\tD- there will be no output";
char answer1;
changeColor(0xf1);
cout<<endl;
cin>>answer1;
check_upper(&answer1);
if (answer1=='d')
{ //if the user enter right ans
counters(right);
cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;		
}

else
{
changeColor(0xfc);
cout<<"uncorrect "<<user.username<<endl<<"the right answer is : D "<<endl<<"why ?"<<endl<<"because the condition is less than the initial number."<<endl;
counters(wrong);
changeColor(0xf1);

}


cout<<"\n\tSecond question: \n";
cout<<"\n\t|-----------------------------------------------------|";
cout<<"\n\t|for(int num= 3 ; num> 1; num--)                      |";
cout<<"\n\t|cout<< I love programming;                           |";
cout<<"\n\t|-----------------------------------------------------|";
changeColor(0xfd);
cout<<"\n\tWhat is the output of this code? ";
cout<<"\n\tA- it will print I love programming 2 times";
cout<<"\n\tB- it will print I love programming 1 time";
cout<<"\n\tC- it will print I love programming 3 times";
cout<<"\n\tD- there will be no output";
char answer2;
changeColor(0xf1);
cout<<endl;
cin>>answer2;
check_upper(&answer2);
if (answer2=='a')
{ //if the user enter right ans
counters(right);
cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;		
}
else
{
changeColor(0xfc);
cout<<"uncorrect "<<user.username<<endl<<"the right answer is : A "<<endl<<"why ?"<<endl<<"because it will run two times first when num=3 then when num=2"<<endl;
counters(wrong);
changeColor(0xf1);

}


cout<<"\n\tThird question: \n";
cout<<"\n\t|-----------------------------------------------------|";
cout<<"\n\t|int num=1                                            |";
cout<<"\n\t|while(int num< 4);                                   |";
cout<<"\n\t|cout<< I love programming;                           |";
cout<<"\n\t|num++                                                |";
cout<<"\n\t|-----------------------------------------------------|";
changeColor(0xfd);
cout<<"\n\tWhat is the output of this code? ";
cout<<"\n\tA- it will print I love programming 2 times";
cout<<"\n\tB- there will be no output";
cout<<"\n\tC- it will print I love programming 3 times";
cout<<"\n\tD- it will print I love programming 4 times";
char answer3;
changeColor(0xf1);
cout<<endl;
cin>>answer3;
check_upper(&answer3);
if (answer3=='b')
{ //if the user enter right ans
counters(right);
cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;		
}

else
{
changeColor(0xfc);
cout<<"uncorrect "<<user.username<<endl<<"the right answer is : B "<<endl<<"why ?"<<endl<<"because there is a semicolon at the of the while"<<endl;
counters(wrong);

changeColor(0xf1);

}


cout<<"\n\tFourth question: \n";
cout<<"\n\t|-----------------------------------------------------|";
cout<<"\n\t|int num=1                                            |";
cout<<"\n\t|while(int num< 4)                                    |";
cout<<"\n\t|cout<< I love programming;                           |";
cout<<"\n\t|num++                                                |";
cout<<"\n\t|-----------------------------------------------------|";
changeColor(0xfd);
cout<<"\n\tWhat is the output of this code? ";
cout<<"\n\tA- it will print I love programming 3 times";
cout<<"\n\tB- there will be no output";
cout<<"\n\tC- it will print I love programming 2 times";
cout<<"\n\tD- it will print I love programming 4 times";
char answer4;
cout<<endl;
cin>>answer4;
check_upper(&answer4);
changeColor(0xf1);
if (answer4=='a')
{ //if the user enter right ans
counters(right);
cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;		
}

else
{
changeColor(0xfc);
cout<<"uncorrect "<<user.username<<endl<<"the right answer is : A "<<endl<<"why ?"<<endl<<"because it will run three times first when num=1 then when num=2 then when num=3"<<endl;
counters(wrong);

changeColor(0xf1);

}


	// example do-while
	cout<<"Example:"<<endl<<"int x = 1;"<<endl<<"do"<<endl<<"{"<<endl<<"	cout << x << endl; "<<endl<<"}"<<endl<<"while ( x < 0 );"<<endl;
	// output for the example
	changeColor(0xfd);
	cout<<"the output of this code is: "<<endl;
	cin>>q1;
	if (q1==1)
	{//if the user enter right ans
	changeColor(0xf1);
	counters(right);
	cout<<"\tgood job "<<user.username<<endl<<"let's go to the next qusion"<<endl;
	}

	else
	{
	changeColor(0xfc);
	cout<<"uncorrect "<<user.username<<endl<<"the right answer is : 1 "<<endl<<"why ?"<<endl<<"test expression is false, this loop will execute one time because do while posttest loop "<<endl;
	counters(wrong);

	changeColor(0xf1);

	}

	cout<<"---------------------------------"<<endl;		
	cout<<"\nExample 2 :"<<endl;
	cout<<"int i = 11;"<<endl;
	cout<<"do"<<endl;
	cout<<"{"<<endl;
	cout<<"cout << i << " "; "<<endl;
	cout<<"i = i + 5; "<<endl;
	cout<<"}"<<endl;
	cout<<"while ( i <= 10 );"<<endl;
	cout<<"cout << endl;"<<endl;
	// output for the example
	changeColor(0xfd);
	cout<<"the output of this code is: "<<endl;
	cin>>q1;
	changeColor(0xf1);
	if (q1==11)
	{//if the user enter right ans
	counters(right);
	cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;
	}

	else
	{
	changeColor(0xfc);
	cout<<"uncorrect "<<user.username<<endl<<"the right answer is : 11 "<<endl<<"why ?"<<endl<<"the do while loop outputs the number 11 and change the value of i to 16"<<endl;
	counters(wrong);
	changeColor(0xf1);

	}


}

else if(user.level==3)
{
string q1,q2;
//Array
cout<<"---------------------------------------------------------------------\n";
cout<<"You're now in level 3!!!\n ";
cout<<"Ok now you're gonna learn about the array"<<endl;
cout<<endl<<"First of all what is an array?"<<endl<<"An array is a collection of elements of the same type placed in contiguous memory locations that can be individually    referenced by using an index to a unique identifier. It can be 1d, 2d, or multidimensional";
cout<<endl<<"\nArrays are used to store multiple values in a single variable, instead of declaring separate variables for each value."<<endl;
cout<<"To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:"<<endl;
cout<<"\n\t\tOne dimensional array";
cout<<"\n------------------\n";
cout<<"| For example:    |\n";
cout<<"| string cars[4]; |"<<endl;
cout<<"------------------\n\n";

cout<<"To insert values to it, we can use an array literal - place the values in a comma-separated list, inside curly braces:"<<endl;
cout<<"\n-------------------------------------------------------\n";
cout<<"| For example:                                        |\n";
cout<<"| string cars[4] = {\"Volvo\", \"BMW\", \"Ford\", \"Mazda\"}; |"<<endl;
cout<<"-------------------------------------------------------\n";
cout<<"(press any letter to continue)\n";
cin>>press;
cout<<"------------------------------------------------------------------------------------------------------\n";

cout<<"\nTo create an array of three integers, you could write:\n"<<endl;
cout<<"--------------------------------\n";
cout<<"| For example:                 |\n";
cout<<"| int myNum[3] = {10, 20, 30}; |"<<endl;
cout<<"--------------------------------\n";
cout<<"\nYou access an array element by referring to the index number inside square brackets [] This statement accesses the value of the first element in cars:\n"<<endl;
cout<<"-----------------------------------------------------\n";
cout<<"| For example:                                      |\n";
cout<<"| string cars[4]={\"Volvo\", \"BMW\", \"Ford\", \"Mazda\"}; |"<<endl;
cout<<"| cout<<cars[0]; // Outputs Volvo                   |\n";
cout<<"-----------------------------------------------------"<<endl<<"Note: Array indexes start with 0: [0] is the first element. [1] is the second element, etc."<<endl;
cout<<"\nTo change the value of a specific element, refer to the index number: \n"<<endl;
cout<<"-------------------------------------------------------\n";
cout<<" |string cars[4] = {\"Volvo\", \"BMW\", \"Ford\", \"Mazda\"}; |"<<endl;
cout<<" |cars[0] = \"Opel\";                                   |"<<endl;
cout<<" |cout<<cars[0];// Now outputs Opel instead of Volvo  |"<<endl;
cout<<"-------------------------------------------------------\n";
cout<<"\nNow that you've learned about the 1d array you'll have tasks to solve (press any letter to continue)\n";
cin>>press;
cout<<"------------------------------------------------------------------------------------------------------\n";

cout<<endl<<"Q1:"<<endl<<"[4] = {\"Volvo\", \"BMW\", \"Ford\", \"Mazda\"};";//example array
	// output for the example
	cout<<endl<<"Create an array of type string called cars"<<endl;
	cin.ignore(1,'\n');//to oved getline problem
	getline(cin,q1);
	if (q1=="string cars"){//if the user enter right ans
    counters(right);		
    cout<<"\n\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;		

	}
	else 
	{
	changeColor(0xfc);
	cout<<"uncorrect "<<user.username<<endl<<"the right answer is : string cars"<<endl<<"why ?"<<endl<<" First data type then the name"<<endl;
    counters(wrong);    
	changeColor(0xf1);

	}


cout<<endl<<"Q2: "<<endl<<"string names[3]={\"haya\",\"sarah\",\"maha\"};"<<endl<<" for(int i = 0; i < 3; i++){ "<<endl<<"cout<<names[i] }"<<endl;
	// output for the example
	cout<<"\nthe output of this code is: "<<endl;
	cin.ignore(1,'\n');//to oved getline problem
	getline(cin,q2);

	if (q2=="haya sarah maha")
	{//if the user enter right ans
    counters(right);	
    cout<<"\n\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;		

	}
	else 
	{
	changeColor(0xfc);
	cout<<"uncorrect "<<user.username<<endl<<"the right answer is : haya sarah maha"<<endl<<"why ?"<<endl<<" i increases each time until stops at 2"<<endl;
    counters(wrong);
    changeColor(0xf1);
	}
	changeColor(0xfd);
	cout<<"\nNow that you've learned about the 1d array we'll go to the 2d array (press any letter to continue)\n";
cin>>press;
changeColor(0xf1);
cout<<"------------------------------------------------------------------------------------------------------\n";
	cout<<"		two dimension array		"<<endl;
	cout<<"\ntwo dimension array is use two size declarators in definition"<<endl;
	cout<<"\nSyntax:: "<<endl;
	cout<<"data_type array_name[i][j];"<<endl;
	cout<<"\n-----------------";
	cout<<"\n|for example:   |"<<endl;
	cout<<"|int A[10][20]; |"<<endl;
	cout<<"-----------------";
	cout<<"\nThe first declarators is number of rows, while the second is the number of columns."<<endl;
	changeColor(0xfd);
	cout<<"\nNow that you've learned about the 2d array you'll have tasks to solve (press any letter to continue)\n";
cin>>press;
changeColor(0xf1);
cout<<"------------------------------------------------------------------------------------------------------\n";

	int qq1;

	cout<<"Q1:"<<endl;
	cout<<"what is the number of element of the matrix[4][4]? Choose a number(1,2,3)."<<endl;
	cout<<"(1).15"<<endl;
	cout<<"(2).16"<<endl;
	cout<<"(3).8"<<endl;

	cout<<"The answer is "<<endl;
	cin>>qq1;
	if (qq1==2)
	{//if the user enter right ans
	counters(right);
	cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;	
	}
		else
    {changeColor(0xfc);
	counters(wrong);
	cout<<"uncorrect "<<user.username<<endl<<"the right answer is : (2).16 "<<endl<<"why ?"<<endl<<"Because We will multiply the number of rows by the columns "<<endl;
	changeColor(0xf1);
	}

	cout<<"Q2:"<<endl;
	cout<<"double values[3] [3]  ={ {1.2, 9.0, 3.2},{9.2, 0.5, -1.2},{7.3, 7.9, 4.8} } ;"<<endl;
	cout<<"cout<<values[2][1];"<<endl;
	cout<<"\nwhat is in values[2][1] ?"<<endl;
	cout<<"the output of this code is: "<<endl;
	cin>>qq1;
	if (qq1==7.9)
	{//if the user enter right ans
	counters(right);
	cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;	
	}
	else
    {changeColor(0xfc);
	counters(wrong);
	cout<<"uncorrect "<<user.username<<endl<<"the right answer is : 7.9 "<<endl<<"why ?"<<endl<<"Because (we start to count the index from 0) 2 represent to the third columns and 1 to the second cell. "<<endl;
	changeColor(0xf1);
	}

	cout<<"Q3:"<<endl;
	cout<<"int matrix[3][3]={ {1,2,3} , {4,5,6} , {7,8,9}};"<<endl;
	cout<<"for(int i=0 ; i<3 ; i++)"<<endl;
	cout<<"cout<< matrix .............;"<<endl;
	cout<<"the output of this code is: 1 4 7 "<<endl;
	cout<<"what's line you will use to print first elment from each row? "<<endl;
	cout<<"1. matrix[i][0];"<<endl;
	cout<<"2. matrix[i][1];"<<endl;
	cout<<"3. matrix[0][0];"<<endl;
	cin>>qq1;
	if (qq1==1)
	{//if the user enter right ans
	counters(right);
	cout<<"\tgood job "<<user.username<<endl<<"let's go to the next question"<<endl;	
	}
	else
    {changeColor(0xfc);
	counters(wrong);
	cout<<"uncorrect "<<user.username<<endl<<"the right answer is : 1. matrix[i][0]; "<<endl<<"why ?"<<endl<<"Because row will change and the columns still on the first element. "<<endl;
	changeColor(0xf1);
	}		



}
else if (user.level==4){

	//working with file-renad&&anfal
	int n = 10,score;// Number of users to read from the file.

	//string name;
    table score_table[n];
	changeColor(0xfd);
 // Creating an input filestream
	ifstream file("mcq_c++.txt");

  // Checking if the file is open
  if (file.is_open()) {
	string line;// to get evry line in txt file
    // Looping until all lines are read
    while (getline(file, line)) {cout<<"\t \t\t"<<line<<endl;}
    file.close(); // Closing the file 
	} else {cout << "Unable to open file";} // Error message 
  	changeColor(0xf1);


   	// Open a file2 in read mode then update new user place in score_table txt file .  
 	 ifstream file2("score_table.txt");  
 	 char answerkey2[n];
    score=compare_calculatescore (answerkey2);
	for (int i = 0; i < n; i++) { file2 >> score_table[i].id>> score_table[i].name >> score_table[i].score;  }// Read user name and level from the file and store it in array of users. 
	for(int i=0;i<n;i++){cout<<score_table[i].id <<" ,  "<<score_table[i].name<<" ,  "<< score_table[i].score<<endl;}//print score table that are in array

    score_table[9].name=user.username;
    score_table[9].score=score;

	bubble_sort(score_table);// Sort the array according to score     
    cout << "Score_table after your score added !!" << endl;    
    for (int i = 0; i < 10; i++) {cout <<i+1<< " Name: " << score_table[i].name << " score: " << score_table[i].score << endl; }  

   file2.close();// Closing the file 
}
	cout<<"\nYay you completed all the levels!! \n";
	cout<<"You had "<<counter<<" questions to test your understanding \n";
	changeColor(0xf3);
	cout<<"You got a total of "<<pass_count<<" correct answers :) \n";
	cout<<"You got a total of "<<fail_count<<" uncorrect answers :( \n";
	changeColor(0xf1);
	cout<<"Do yo want to play again (y/n)"<<endl<<endl;//to play the game again
	cin>>playagain;

	check_upper(&playagain);
	cout<<"this is your information :"<<endl<<"your name is : "<<user.username<<endl<<"you were in level: "<<user.level<<endl;

if(playagain=='y')
{
    first::updateArray(user); //namespace
    second::updateArray(user);
}
else
break;
	}while(playagain=='y');
	
	cout<<"thank you for playing with us !"<<endl<<"at the end i want you to write a cheer comment to the next person who will play this game. "<<endl;//crate a file that take comment from user
	ofstream outfile; 
	string comment; 
    cout << "Please enter your comment: "; 
    outfile.open("comments.txt", ios::app); 
    if(outfile.is_open()){
    cin.ignore(1,'\n');//to oved getline problem
    getline(cin,comment); 
    outfile <<comment <<endl; 
	outfile.close();
	}
	else{ cout<<"unable to open file";};
    

	return 0;
}
