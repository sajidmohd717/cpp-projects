#include <iostream>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

int main()
{
//    string play;
    string answer;
    int points = 0;
    float percentage;
//    cout<<"enter answer"<<endl;
//    cout<<"do you want to play (yes/no)"<<endl;
//    cin>>play;
//    if (play == "yes")
//        cout<<"Great"<<endl;
//    else
//        exit(1);

    cout<<"Instructions:\nThere will be 4 questions for you, try to answer as many as you can"<<endl;
    cout<<"Remember to have spacing at the correct places and use only small letters"<<endl;
    cout<<"Good luck!"<<endl;

    cout<<"What does CPU stand for? ";
    getline(cin, answer);
    if(answer == "central processing unit")
    {
        cout<<"Correct!"<<endl;
        points += 1;
    }
    else
        cout<<"Wrong answer :("<<endl;

    cout<<"What does GPU stand for? ";
    getline(cin, answer);
    if(answer == "graphical processing unit")
    {
        cout<<"Correct!"<<endl;
        points += 1;
    }
    else
        cout<<"Wrong answer :("<<endl;

    cout<<"What does RAM stand for? ";
    getline(cin, answer);
    if(answer == "random access memory")
    {
        cout<<"Correct!"<<endl;
        points += 1;
    }
    else
        cout<<"Wrong answer :("<<endl;

    cout<<"What does ROM stand for? ";
    getline(cin, answer);
    if(answer == "read only memory")
    {
        cout<<"Correct!"<<endl;
        points += 1;
    }
    else
        cout<<"Wrong answer :("<<endl;

    cout<<"congratulations, you managed to score "<< points/4.0 *100<<"%."<<endl;


}
