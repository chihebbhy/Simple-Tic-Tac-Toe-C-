#include <iostream>

using namespace std;

class Game
{
public:

    int score[3] = {0,0,0};
    char Board[3][3];           // T holder , X for x , O for o
    bool GameOver = false;
    int TurnsPlayed = 0;
    string Winner;
    int Turn = 1;               // Turn == 1 : X plays ; else -1 plays ;


    void InitBoard()            // Initialise Board with T
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                Board[i][j] = '0' + 3*i + j + 1;
            }
        }
    }
    Game()                      // Constructor
    {
        InitBoard();
    }

    void Init()
    {
        InitBoard();
        GameOver = false;
        TurnsPlayed = 0;
        Turn = 1;
    }
    void PrintGame()
    {
        for(int i = 0 ; i<3 ; i++)
        {
            cout << ' ' << Board[i][0]  << " | " << Board[i][1] << " | " << Board[i][2] << endl;
            if(i!=2)
            {
                cout << "---+---+---"<< endl;
            }
        }
    }
    bool PlayTurn()
    {
        char Player = (Turn == 1) ? 'X' : 'O';
        int Choice ;

        cout << Player << "'s turn to play." << endl;
        cout << "Choose Case number: ";
        cin >> Choice;
        while( Choice < 1 || Choice > 9 || Board[(Choice-1) / 3][(Choice-1)%3 ] != ('0'+Choice) )
        {
            cout << "This case is either already filled or out of bounds [1-9] " << endl;
            cout << "Choose Case number: ";
            cin >> Choice;
        }
        Board[(Choice-1) / 3][(Choice-1)%3 ] = Player;
        Turn *= -1; // X = 1 -> -1 = O      O = -1 -> 1 = X
        TurnsPlayed ++;
        CheckWin();
        return true;
    }
    void CheckWin()
    {
        bool ok = false;
        for(int i=0; i<3; i++)
        {
            ok |= Board[i][0] == Board[i][1] && Board[i][1]==Board[i][2];
        }
        for(int j=0; j<3; j++)
        {
            ok |= Board[0][j] == Board[1][j] && Board[1][j]==Board[2][j];
        }
        ok |= Board[0][0] == Board[1][1] && Board[1][1] ==Board[2][2];
        ok |= Board[0][2] == Board[1][1] && Board[1][1] ==Board[2][0];
        if(ok)
        {
            GameOver = true;
            if(Turn == 1)
            {
                Winner = "O";
                score[1]++;
            }
            else
            {
                Winner = "X";
                score[0]++;
            }
        }
        else if(TurnsPlayed >=9)
        {
            GameOver = true;
            Winner = "Draw";
            score[2]++;
        }
        else
        {
            GameOver = false;
        }

    }
    void Play()
    {
        //system("clear");
        while(!GameOver)
        {
            PrintGame();
            PlayTurn();
            system("cls");
        }
        cout << "GAME OVER CONGRATS " << Winner << endl;
        cout << "SCORE " << score[0] << " | " << score[2] << " | " << score[1];
        if(Winner != "Draw")
        {
            cout << " won fair and square ";
        }
        cout << endl;
        cout << "ENTER 1 TO PLAY AGAIN : ";
        int again;
        cin >> again ;
        if(again == 1)
        {
            Init();
            Play();
        }
    }

};

int main()
{
    Game g;
    g.Play();
    return 0;
}
