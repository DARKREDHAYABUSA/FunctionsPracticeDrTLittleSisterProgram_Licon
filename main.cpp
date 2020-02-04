/*Folder: Little_Sister_Licon
CPP: Function_Practice_Little_Sister.cpp
Teacher: Dr. Tyson McMillan, 9-1-2019
Student: TYPE_YOUR_NAME_HERE

Description: Dr_T's little sister is smart.
She uses a divide and concur method to get $20 from the parents.
She asks mom and dad individually. Based upon their responses she can
earn $0, $20, or $40 from them.
Create a dad/mom yes/no (True/false) program to capture the possibilities.
Use functions and pass by value.
Also address the programming challenges in int main() make the appropriate
function prototypes, function definition, and functions calls to make the program work.
This completed work shall be uploaded to Extra Credit item 15: Little_Sister_YourLastName.zip
*/
#include<iostream>
#include<cstdlib>
using namespace std;

//$_earned       mom  dad
double MakeBank(bool,bool); //function prototype
void welcomeMessage();
void dayOfTheWeek(int);
double numberCube(double);

int main()
{
    int dayInput = 0;// accept day input from user
    welcomeMessage(); //function call
    //function calls (true = "yes", false="no"
    cout << "\nLittle Sister Function calls: ";
    cout << "\nOption 1, Little Sister Earns: $" << MakeBank(true,false);
    cout << "\nOption 2, Little Sister Earns: $" << MakeBank(false,true);
    cout << "\nOption 3, Little Sister Earns: $" << MakeBank(true,true);
    cout << "\nOption 4, Little Sister Earns: $" << MakeBank(false,false);

    /*Programming Challenges
      1. Extend this program to output how much Little Sister earns in each scenario.
      2. Create a void welcomeMessage(); function to show a nice greeting on screen to the program.
      3. Extend this program to write a void dayOfTheWeek(int); function given user input of the number (1 output Sunday);
      4. Output each day of the week in a different color.
      5. Extend this program create a function double numberCube(double); to output the cube of the number passed.
      6. Extend this program set the precision of the numberCube result to 4 decimal places
      7. Loop the program until exit conditions 'E' AND 'e', clear the screen upon each loop #include<cstdlib> system("cls");
    */
    cout << "\n\nPlease enter a day of the week (1-7) ";
    cin >> dayInput; //accept input of day
    dayOfTheWeek(dayInput); //pass argument provide by user
    
    return 0;
}

double MakeBank(bool mom, bool dad)
{
	double amtEarned = 0.0; //what sister can get from parents
	//handle each scenario How much does Little Sister earn $20 increments.
if(mom == true)
{
  amtEarned += 20.0;
}
if (dad == true)
{
  amtEarned += 20.0;
}
if(mom == false)
{
  amtEarned += 0.0;
  cout <<"\nAint!!!" << endl;
}
	return amtEarned;
}

void welcomeMessage()
{
  cout << "\n$$$ Cha-Ching  $$$  Cha-Ching  $$$\n$$ Dolla $ Dolla $$ Bills $ Yall$$" << endl;
  for(int i = 1; i <35; i++)
  {
    cout << "*";
  }
  cout << endl;
}

void dayOfTheWeek(int day)
{
string reset = "\x1b[0m\n";

string greenDrT = "\x1b[32;1m";
string Purp = "\x1b[35;1m";
string Or = "\x1b[33;1m";
string blu = "\x1b[34;1m";
string Yell = "\x1b[93;1m";
string Red = "\x1b[31;1m";
string lB = "\x1b[31;1m";
  
if(day == 1)

  {
    cout << greenDrT << "It's Sunday!!!" << reset;
  }
        
else if(day == 2)
  {
  cout << Purp << "It's Monday" << reset;
  }

else if(day == 3)
  {
    cout << Or << "It's Tuesday!!!" << reset;  
  }

else if(day == 4)
  {
  cout << blu << "It's Wednesday!!!" << reset;
  }

else if(day == 5)
  {
    cout << Yell << "It's Thursday!!!" << reset;
  }

else if(day == 6)
  {
  cout << Red << "It's Friday!!!" << reset;
  }

else if(day == 7)
  {
    cout << lB << "It's Saturday!!!" << reset;
  }
}

