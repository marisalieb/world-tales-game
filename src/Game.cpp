
#include "../include/Game.h"

Game::Game() {
    rooms.push_back(new FilmStudio());
    rooms.push_back(new GarmentFactory());
    rooms.push_back(new FishingDock());
    rooms.push_back(new CommunityGarden());
    rooms.push_back(new Kitchen());
    rooms.push_back(new HeritageHall());
    currentRoom = 0;
    tasksCompleted.resize(rooms.size(), vector<bool>(3, false));
}

Game::~Game() {
    for (Room* room : rooms) {
        delete room;
    }
}

void Game::play() {
    int choice = 0;
    bool showFullDescription = true;

    while (true) {
        rooms[currentRoom]->display(tasksCompleted, showFullDescription);
        cout << "Choose an action (1, 2";
        if (currentRoom == 0 || currentRoom == 1 || currentRoom == 2 || currentRoom == 3 || currentRoom == 4) {
            if (!tasksCompleted[currentRoom][2]) {
                cout << " or 3";
            }


        // if in room 5 and all task in other rooms complete
        } else if (currentRoom == 5 && tasksCompleted[0][2] && tasksCompleted[1][2] && tasksCompleted[2][2] && tasksCompleted[3][2] && tasksCompleted[4][2] && !tasksCompleted[5][2]) {
            cout << " or 3";
        }
        cout << ") or 0 to quit:";
        cin >> choice;

        if (choice == 0) {
            cout << "Thank you for playing!" << endl;
            break;
        }

        string congrats = "\nCongrats! You completed the game!\nYour contributions completed the detailed exhibit that illustrates how each culture contributes to global heritage.\nIt is highlighting shared values and fostering cross-cultural appreciation.";
        if (choice == 3 && currentRoom == 5) { // special task
            if (tasksCompleted[0][2] && tasksCompleted[1][2] && tasksCompleted[2][2] && tasksCompleted[3][2] && tasksCompleted[4][2]) {
                cout << congrats << endl;
                tasksCompleted[5][2] = true;
                break;
            } else {
                cout << "You need to collect all items before attempting this task." << endl;
                continue;
            }

        }

        if (choice == 3 && (currentRoom == 0 || currentRoom == 1 || currentRoom == 2 || currentRoom == 3 || currentRoom == 4)) {
            tasksCompleted[currentRoom][2] = true;
            showFullDescription = false;
        } else {
            showFullDescription = true;
        }

        int nextRoom = rooms[currentRoom]->getNextRoom(choice);
        // make sure it's a valid choice and either 1,2 or 3
        if (nextRoom != -1) {
            if (choice == 1 || choice == 2 || choice == 3) {
                // choice -1 because choice is 1 based and array index is 0 based
                tasksCompleted[currentRoom][choice - 1] = true;
                currentRoom = nextRoom;
            }
        } else {
            cout << "\nInvalid choice. Try again." << endl;
        }


    }
}