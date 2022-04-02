#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    //Variable for human and computer
    
    int humanPick;
    int humanScore = 0;
    int computerScore = 0;
    int roundNumber = 1;

    //Game Message

    string rock1 = "Human Picks: Rock! - Computer picks: Rock!";
    string rock2 = "Human Picks: Rock! - Computer picks: Paper!";
    string rock3 = "Human Picks: Rock! - Computer picks: Scissor!";

    string paper1 = "Human Picks: Paper! - Computer picks: Rock!";
    string paper2 = "Human Picks: Paper! - Computer picks: Paper!";
    string paper3 = "Human Picks: Paper! - Computer picks: Scissor!";

    string Scissor1 = "Human Picks: Scissor! - Computer picks: Rock!";
    string Scissor2 = "Human Picks: Scissor! - Computer picks: Paper!";
    string Scissor3 = "Human Picks: Scissor! - Computer picks: Scissor!";
    
    //gameLoop
    
    while (humanScore != 3 || computerScore != 3){
        
        //condition for scores
    
        if (humanScore == 3 || computerScore == 3){
            break;
        }
        
        //Setting computer picks randomly
    
        srand(time(0));
        int computerPick = 1 + (rand() % 3);
        
        //game-display

        cout << endl << "Rock Paper Scissor!" << endl;
        cout << "Round Number: "<< roundNumber << endl;
        cout << "Human Score: " << humanScore << endl << "Computer Score: " << computerScore << endl;
        cout << "1. Rock, 2. Paper, 3. Scissor!" << endl;
        cout << "Pick: "; cin >> humanPick;
        
        //Conditions for Rock
        
        if (humanPick == 1 && computerPick == 1){
            cout << endl << "Draw!" << endl << rock1 << endl; 
            roundNumber +=1;
        }
        else if (humanPick == 1 && computerPick == 2){
            cout << endl << "Computer wins!" << endl << rock2 << endl;
            computerScore +=1;
            roundNumber +=1;
        }
        else if (humanPick == 1 && computerPick == 3){
            cout << endl << "Human wins!" << endl << rock3 << endl;
            humanScore +=1;
            roundNumber +=1;
        }

        //Conditions for Paper

        else if (humanPick == 2 && computerPick == 1){
            cout << endl << "Human wins!" << endl << paper1 << endl;
            humanScore +=1;
            roundNumber +=1;

        }
        else if (humanPick == 2 && computerPick == 2){
            cout << endl << "Draw!" << endl << paper2 << endl;
            roundNumber +=1;
        }
        else if (humanPick == 2 && computerPick == 3){
            cout << endl << "Computer wins!" << endl << paper3 << endl;
            computerScore +=1;
            roundNumber +=1;
        }

        //Conditions for Scissor

        else if (humanPick == 3 && computerPick == 1){
            cout << endl << "Computer wins!" << endl << Scissor1 << endl;
            computerScore +=1;
            roundNumber +=1;
        }
        else if (humanPick == 3 && computerPick == 2){
            cout << endl << "Human wins!" << endl << Scissor2 << endl;
            humanScore +=1;
            roundNumber +=1;
        }
        else if (humanPick == 3 && computerPick == 3){
            cout << endl << "Draw!" << endl << Scissor3 << endl;
            roundNumber +=1;
        }
        else {
            cout << endl;
            cout << "Invalid Pick!" << endl << roundNumber;
        }
    }   
    return 0;
}