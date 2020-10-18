#include <iostream>
using namespace std;

char Screen[3][3] = {'1','2','3','4','5','6','7','8','9'};
char Player = 'X';
bool GameOver = false;

int screen_draw()
    {
        system("cls");
        cout << "TIC TAC TOE" << endl;
        for(int i=0 ; i<3 ; i++)
            {
                for(int j=0 ; j<3 ; j++)
                    {
                        cout << Screen[i][j] << " ";
                    }
                cout << endl;
            }
    }
int input_screen()
    {
        int input;
        cout << "Enter the number in the screen you want to fill in :";
        cin >> input;
        if(input == 1)
            Screen[0][0] = Player;
        else if (input == 2)
            Screen[0][1] = Player;
        else if (input == 3)
            Screen[0][2] = Player;
        else if (input == 4)
            Screen[1][0] = Player;
        else if (input == 5)
            Screen[1][1] = Player;
        else if (input == 6)
            Screen[1][2] = Player;
        else if (input == 7)
            Screen[2][0] = Player;
        else if (input == 8)
            Screen[2][1] = Player;
        else if (input == 9)
            Screen[2][2] = Player;
    }

int Active_Player()
    {
        if (Player == 'X')
            Player = 'O';
        else
            Player = 'X';
    }

int winning_condition_X()
    {
        /* 1 2 3
           4 5 6
           7 8 9 */
        if (Screen[0][0] == 'X' && Screen[0][1] == 'X' && Screen[0][2] == 'X')
            return 9;
        if (Screen[1][0] == 'X' && Screen[1][1] == 'X' && Screen[1][2] == 'X')
            return 9;
        if (Screen[2][0] == 'X' && Screen[2][1] == 'X' && Screen[2][2] == 'X')
            return 9;
        if (Screen[0][0] == 'X' && Screen[1][0] == 'X' && Screen[2][0] == 'X')
            return 9;
        if (Screen[0][1] == 'X' && Screen[1][1] == 'X' && Screen[2][1] == 'X')
            return 9;
        if (Screen[0][2] == 'X' && Screen[1][2] == 'X' && Screen[2][2] == 'X')
            return 9;
        if (Screen[0][0] == 'X' && Screen[1][1] == 'X' && Screen[2][2] == 'X')
            return 9;
        if (Screen[0][2] == 'X' && Screen[1][1] == 'X' && Screen[2][0] == 'X')
            return 9;
        return '/';
    }
char winning_condition_O()
    {
        /* 1 2 3
           4 5 6
           7 8 9 */
        if (Screen[0][0] == 'O' && Screen[0][1] == 'O' && Screen[0][2] == 'O')
            return 'O';
        if (Screen[1][0] == 'O' && Screen[1][1] == 'O' && Screen[1][2] == 'O')
            return 'O';
        if (Screen[2][0] == 'O' && Screen[2][1] == 'O' && Screen[2][2] == 'O')
            return 'O';
        if (Screen[0][0] == 'O' && Screen[1][0] == 'O' && Screen[2][0] == 'O')
            return 'O';
        if (Screen[0][1] == 'O' && Screen[1][1] == 'O' && Screen[2][1] == 'O')
            return 'O';
        if (Screen[0][2] == 'O' && Screen[1][2] == 'O' && Screen[2][2] == 'O')
            return 'O';
        if (Screen[0][0] == 'O' && Screen[1][1] == 'O' && Screen[2][2] == 'O')
            return 'O';
        if (Screen[0][2] == 'O' && Screen[1][1] == 'O' && Screen[2][0] == 'O')
            return 'O';
        return '/';
    }

int main()
    {
        while(!GameOver)
            {
                screen_draw();
                input_screen();
                if(winning_condition_X() == 9)
                    {
                        screen_draw();
                        cout << "Player 1 Wins!" <<endl;
                        GameOver = true;
                    }
                if (winning_condition_O() == 'O')
                    {
                        screen_draw();
                        cout << "Player 2 Wins!"<<endl;
                        GameOver = true;
                    }
                Active_Player();
            }
        //screen_draw();
        system("pause");
        return 0;
    }