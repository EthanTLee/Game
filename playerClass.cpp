#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player {

    public:

    string playerChoice;
    string playerPosition;

    string getPlayerChoice(){

        return playerChoice;
    }

    void recievePlayerChoice(){

        cin >> playerChoice;
    }

    string getPlayerPosition(){

        return playerPosition;
    }

    // void movePlayerNextPosition(){
    //     if (playerChoice == choiceOne) {
    //         playerPosition = "left";
    //     }

    //     if (playerChoice == choiceTwo) {
    //         playerPosition = "right";
    //     }        
    // }
};

class Stage {

    public:

    string stageName;
    string stageDescription;
    vector<string> stageChoices;

    void printStageDescription(){

        cout << stageDescription;
    }

    void printStageChoices(){       //fix this one

        cout << stageChoices[0] << stageChoices[1]; 
    }

    void addStageChoice(string choice){

        stageChoices.push_back(choice);
    }

};

Player initPlayer(){

    Player player;
    player.playerPosition = "Jungle";
    return player;
}

Stage initStage(){

    Stage stage;

    stage.stageName = "Jungle";
    stage.stageDescription = "Welcome to the jungle.";
    stage.addStageChoice("walk left");
    stage.addStageChoice("walk right");
    return stage;
}



int main() {
    Player player = initPlayer();
    Stage stage = initStage();

    if (player.getPlayerPosition() == stage.stageName){

        stage.printStageDescription();
        stage.printStageChoices();
    }


    return 0;
} 
