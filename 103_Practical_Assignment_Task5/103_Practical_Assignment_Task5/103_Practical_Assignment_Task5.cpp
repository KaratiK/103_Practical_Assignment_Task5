// 103_Practical_Assignment_Task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Kevin Karati 103 Task 5

#include<iostream>
using namespace std;

void Square() {

    std::cout << "* * * * * *\n";
    std::cout << "*         *\n";
    std::cout << "*         *\n";
    std::cout << "*         *\n";
    std::cout << "*         *\n";
    std::cout << "* * * * * *\n";
}

void Triangle() {

    std::cout << "       *\n";
    std::cout << "      * *\n";
    std::cout << "     *   *\n";
    std::cout << "    *     *\n";
    std::cout << "   *       *\n";
    std::cout << "  * * * * * *\n";

}
void Rectangle(int rectangleHeight, int rectangleWidth) {
    for (int width = 1; width <= rectangleHeight; width++)
    {
        if (width <= 1)
            for (int width = 1; width <= rectangleWidth; width++)
            {
                cout << "* ";
            }
        else if (width < rectangleHeight)
        {
            cout << endl;
            for (int width2 = 1; width2 <= rectangleWidth; width2++)
            {
                if (width2 == 1 || width2 == rectangleWidth)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        else
        {
            cout << endl;
            for (int width3 = 1; width3 <= rectangleWidth; width3++)
            {
                cout << "* ";
            }
        }
    }
}

int CalculateScore(int score) {
    score += 10;
    return score;
}


int main() {
    
    int userGuess;
    int score = 0;
    bool correct = false, active = true;
    int menuChoice;
    //int userCorrect = 10;

    //cout << "WELCOME TO THE GAME OF SHAPES\n*********************************\n\n";
    //cout << "WHAT WOULD YOU LIKE TO DO?\n\n";
    //cout << "1. PLAY GAME\n2. VIEW SCORE\n3. EXIT\n";
    //cin >> menuChoice;

  /*  srand((unsigned int)time(NULL));
    int randomShape = rand() % 3 + 1;*/

    while (active == true)
    {
 
        cout << "WHAT WOULD YOU LIKE TO DO?\n\n";
        cout << "1. PLAY GAME\n2. VIEW SCORE\n3. EXIT\n";
        cin >> menuChoice;

        srand((unsigned int)time(NULL));
        int randomShape = rand() % 3 + 1;
        switch (menuChoice) {
        case 1:

            switch (randomShape)
            {
            case 1:
                Rectangle(5, 10);
                cout << "\nWhich shape is this?\n\n";
                cout << "1. Square\n2. Triangle\n3. Rectangle\n4. None of the above\n";
                cin >> userGuess;
                if (userGuess == 3)
                {
                    cout << "Congratulations, you got it right!\n\n";
                    score = CalculateScore(score);
                    //cout << "Score: " << score << endl;
                }
                else
                    cout << "You guessed wrong\n";
                break;

            case 2:
            {
                Square();
                cout << "\nWhich shape is this?\n\n";
                cout << "1. Square\n2. Triangle\n3. Rectangle\n4. None of the above\n";
                cin >> userGuess;
                if (userGuess == 1)
                {
                    cout << "Congratulations, you got it right!\n\n";
                    score = CalculateScore(score);
                    //cout << "Score: " << score << endl;
                }
                else
                    cout << "You guessed wrong\n";
                break;
            }
            case 3:
            {
                Triangle();
                cout << "\nWhich shape is this?\n\n";
                cout << "1. Square\n2. Triangle\n3. Rectangle\n4. None of the above\n";
                cin >> userGuess;
                if (userGuess == 2)
                {
                    cout << "Congratulations, you got it right!\n\n";
                    score = CalculateScore(score);
                    //cout << "Score: " << score << endl;
                  
                }
                else
                    cout << "You guessed wrong\n";
                break;
            }
            default:
               cout << "please enter a valid option";
            }


            //return randomShape;
            break;
        case 2:
            cout << "You chose to view your current score\n\n";
            cout << "\nScore = " << score << endl;
            break;
        case 3:
            cout << "\nThank you for playing!\n\nGoodbye!";
            active = false;
            break;
        default:
            cout << "please enter a valid option";
        }

    }
}

  /*  Rectangle(5, 10);
    cout << endl;
    Square();
    Triangle();
}*/