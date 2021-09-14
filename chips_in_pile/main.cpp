/*How to play game?
Game starts off with a number of chips randomized from 1-100, each player can take up to half the chips on the pile,
player who has to take the last chip loses.
*/



#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    cout<<"Game Instructions: "<<endl;
    cout<<"How to play game? \nGame starts off with a number of chips randomized from 1-100";
    cout<<"\neach player can take up to half the chips on the pile";
    cout<<"\nplayer who takes the last chip loses.\n\n\n";

    bool player1_turn = true;
    int total_chips;
    int max_taken;
    int chips_want;
    int chips_left;
    string player[2];
    char play_again = 'y';

    cout<<"Player 1, please enter your name : ";
    cin>>player[0];
    cout<<"Good luck "<<player[0];
    cout<<"\nPlayer 2, please enter your name : ";
    cin>> player[1];
    cout<<"Good luck "<< player[1];


    while(play_again == 'y' || play_again == 'Y')
    {
        srand(time(0));
        total_chips = rand()%100 + 1;
        max_taken = total_chips *0.5;


        cout<<endl<<endl<<"This game of chips will start with "<< total_chips<<" chips";
        cout<<"\nYou can take up to "<< max_taken<<" chips\n";
        while(total_chips != 0)
        {
            if(player1_turn)
            {
                do
                {
                cout<<"Please enter the number of chips you want to take "<< player[0]<< " : ";
                cin>>chips_want;
                player1_turn = false;
                }
                while(chips_want > max_taken);
            }
            else
            {
                do
                {
                cout<<"Please enter the number of chips you want to take "<< player[1]<< " : ";
                cin>>chips_want;
                player1_turn = true;
                }
                while(chips_want > max_taken);
            }
            total_chips = total_chips - chips_want;
            cout<< "Total chips left is " << total_chips<<endl;
            if(total_chips>1)
                max_taken =  total_chips*0.5;
            else
                max_taken = total_chips;
            if(total_chips>0)
                cout<<"\nYou can take up to "<< max_taken<<" chips\n";

        }
            if(player1_turn)
            {
                cout<<"\nCongratulations you won " <<player[0];
            }
            else
            {
                cout<<"\nCongratulations you won " <<player[1];
            }
            cout<<"\n\nDo you want to play again? (y/n)";
            cin>>play_again;
    }


}
