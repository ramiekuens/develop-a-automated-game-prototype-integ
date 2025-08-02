#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct GamePrototype {
    string gameName;
    int numPlayers;
    string gameType; // e.g. action, adventure, puzzle, etc.
};

vector<GamePrototype> gamePrototypes;

void addGamePrototype(string name, int players, string type) {
    GamePrototype game;
    game.gameName = name;
    game.numPlayers = players;
    game.gameType = type;
    gamePrototypes.push_back(game);
}

void integrateGamePrototypes() {
    cout << "Integrated Game Prototypes:" << endl;
    for (const auto& game : gamePrototypes) {
        cout << "Game Name: " << game.gameName << endl;
        cout << "Number of Players: " << game.numPlayers << endl;
        cout << "Game Type: " << game.gameType << endl;
        cout << "------------------------" << endl;
    }
}

int main() {
    addGamePrototype("Adventure Game", 1, "Adventure");
    addGamePrototype("Multiplayer Shooter", 4, "Action");
    addGamePrototype("Puzzle Game", 2, "Puzzle");
    integrateGamePrototypes();
    return 0;
}