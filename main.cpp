#include <iostream>
#include <time.h>

int main()
{
    const unsigned int doorNum = 3;
    const unsigned int iterations = 1000;
    
    int wins = 0;
    int overallPlays = 0;
    
    srand(time(NULL));

    int playerDoorGuess;
    int doorWithCar;

    for (size_t i = 0; i < iterations; i++)
    {
        playerDoorGuess = rand() % doorNum;
        doorWithCar = rand() % doorNum;

        if ( doorWithCar == playerDoorGuess )
        {
            //If player guessed the door with car, presenter leaves one door with scooter unopened, player switches and loose
            overallPlays++; 
        }        
        else
        {
            //Player didn't guess the door with cat, presenter leaves one door with car unopened, player swithes and wins a car
            overallPlays++;
            wins++;
        }
    }
    
    std::cout << "Total rounds:" << overallPlays << "\nWinned rounds:" << wins << "\nEstimated probability to win:" <<  (float) wins / overallPlays << "\n";
    return 0;
}
