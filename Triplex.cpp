#include <iostream>

void PrintIntroduction (int Difficulty)
{
    std::cout << "\n\n You are helping MR Robot hack into a level " << Difficulty; << " Server \n";
    std::cout << "Help him by cracking the code and entering the correct numbers, Enter the correct code to continue" << "\n";
}


bool PlayGame (int Difficulty)
{

    PrintIntroduction();

    int a = 2;
    int b = 5;
    int c = 3;

    int Sum = a + b + c;
    int MultSum = a * b * c;

    std::cout << Sum << "\n";
    std::cout << MultSum << "\n";

    std::cout << "Please enter 3 numbers with each one seperated by a space..." << "\n";
    std::cout << "The 3 numbers of the code add up to make: " << Sum << "\n";
    std::cout << "The 3 numbers multiply to make: " << MultSum << "\n";

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB  >> GuessC;

    // Take the 3 Guess inputs and store the values of the sum of them added and multiplied
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;


    // If the guess is correct, Print "You Win" If the guess is wrong, Print "You Lose!"
    if (GuessSum == Sum && GuessProduct == MultSum)
    {
        std::cout << "Good job, keep going and getting those codes! \n";
        return true;
    }
    else 
    {
        std::cout << "You need to be careful, try again and see if you can do it! \n";
        return false;
    }
}





int main()
{

    int LevelDifficulty;
    const int MaxLevel = 5;

    while (LevelDifficulty <= MaxLevel) // Always loop until LevelDifficulty is above MaxLevel
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear(); // Clear all the errors
        std::cin.ignore(); // Discards the buffer allowing the game to not loop

        if (bLevelComplete) {

            ++LevelDifficulty;

        }

    }


    std::cout << "Congratulations, Mr robot has hacked into the system and is one step closer to defeating the dark army!";

    return 0;
}
