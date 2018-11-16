#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    
    int p,q,Money,Win,Loose,Bet;
    

    Money = 500;


    cout << "--------------------------------" << endl;
    cout << "--------------------------------" << endl;
    cout << "!!Welcome to the Game!!" << endl;
    cout << "---------------------------------" << endl;
    cout << "---------------------------------" << endl;
     do

    {

    cout << "Select Amount for the Game = " << Money <<endl;
    cout << "Choose either Number 1 or 0 = " << endl;

    cin>>p ;
    cout << "How much you want to Bet = " <<endl;

    cin>>Bet;

    if (Bet > Money) 


{
  cout << "Ohh!! You Loose" << endl;
  cout << "You are cashing out" << endl;

  return 0;
}

if (p == 1) 
	
{
    
cout << "Ohh!! You Loose" << endl;

Loose = Money - Bet;

cout << "You left with = " << Loose << endl;

Money= Loose;

cout << "Press 1 to continue the Game" << endl;

cin>>q;

}


else if (p == 0) 

{

cout << "Yeah!! You are the Winner" << endl;

Win = 2 * Bet + Money;
Money = Win ;

cout << "You left with = " << Win << endl;

cout << "Press 1 to continue the Game" << endl;

cin>>q;

}


  else
	
	{

cout << "Ohh!! You Loose" << endl;
cout << "You are cashing out" << endl;


return 0;

  } 
}  


  while (q==1); 
  
while(Bet>=Money || Loose==Money);

return 0;
  
}