// Chapter 6, Programming Challenge 24: Rock, Paper, Scissors Game
//
// Purpose:Players plays a game of rock, paper, scissors with computer
//
//
// Date:3/6/2022
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void displayMenu();
int computersRock(int);
int computersPaper(int);
int computerScissors(int);

int main()
{

const int rock=1, paper=2, scissors=3, quit=4;
int choice;


do
{
    	displayMenu();
	cin >> choice;
	cout << endl;



	// Respond to the user's menu selection.
	switch (choice)
	{
		case rock:

    computersRock(rock);

			break;

		case paper: 
		
    computersPaper(paper);
			break;

		case scissors: 
		
		computerScissors(scissors);

			break;
			
			
		case quit:
		
		   quit;

			break;

		default: 
			cout << "Only choose the 4 options.\n";
   }
}
while( choice != quit );

return 0;

}


void displayMenu()
{

cout << "rock\n\n";
cout <<"paper\n\n";
cout <<"scissors\n\n";
cout <<"quit\n"<<endl;
cout<<"Enter 1 for rock, 2 for paper, and 3 for scissors"<<endl;

}


int computersRock(int rock)
{
    
	unsigned seed = time(0);

    srand(seed);

    int pcChoice = rand() % 3+1;
    
    int choice;
    
    do{
    if(choice==1 || pcChoice==3)
{
cout <<"You win, rock smashes scissors\n"<< endl;
return rock;
}

    else if(choice==1 || pcChoice==2)
{
	cout<<"You lose, paper covers rock\n"<<endl;
	return rock;

}
    else

	cout<<"it's a tie, try again\n"<<endl;
	cin>>choice;

}while (choice==pcChoice);
return rock;
}


int computersPaper(int paper)
{

   
	unsigned seed = time(0);

    srand(seed);

    int pcChoice = rand() % 3+1;
    
    int choice;
    
    do{
    if(choice==2 || pcChoice==1)
{
cout <<"You win, paper covers rock\n"<< endl;
return paper;
}

    else if(choice==2 || pcChoice==3)
{
	cout<<"You lose, scissors cut paper\n"<<endl;
	return paper;

}
    else

	cout<<"it's a tie, try again\n"<<endl;
	cin>>choice;

}while (choice==pcChoice);
return paper;

}

int computerScissors(int scissors)
{

   
	unsigned seed = time(0);

    srand(seed);

    int pcChoice = rand() % 3+1;
    
    int choice;
    
    do{
    if(choice==3 || pcChoice==1)
{
cout <<"You lose, rock smashes scissors\n"<< endl;
return scissors;
}

    else if(choice==3 || pcChoice==2)
{
	cout<<"You win, scissors cuts paper\n"<<endl;
	return scissors;

}
    else

	cout<<"it's a tie, try again\n"<<endl;
	cin>>choice;

}while (choice==pcChoice);
	   return scissors;
}
