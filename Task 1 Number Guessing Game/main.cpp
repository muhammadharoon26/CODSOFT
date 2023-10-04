#include <iostream>
#include <cstdlib>
#include <ctime> // Include this header for srand()

using namespace std;

int main() 
{
    srand(time(0)); // Seed the random number generator with the current time
    int randomNum=rand()%100 + 1; // Generates a random number between 1 and 100
    int gnumber;
    cout<<"\nGuess The Number (between 1 and 100)!\n";
    do
    {
        cin>>gnumber;
        if(gnumber>randomNum)
        {
            cout<<"Too High\n";
        }
        else if(gnumber<randomNum)
        {
            cout<<"Too Low\n";
        }
        else
        {
            cout<<"BINGO!\nYou Guessed It Right ! "<<endl;
        }
    }
    while(gnumber!=randomNum);

    return 0;
}
