
#include "../include/Kitchen.h"

const string Kitchen::DESCRIPTION = "\nYou are on Jeju Island, South Korea, in a cosy kitchen filled with the aroma of Korean cooking.\nThere is a large wooden table and fresh ingredients for preparing bibimbap.";
const string Kitchen::TASK1 = "Open a sliding door labeled \'Backyard Exit\' leading to a mist-covered wooden path.";
const string Kitchen::TASK2 = "Choose the side door labeled \'Pantry\' opening to a stone corridor.";
const string Kitchen::TASK3 = "Help prepare bibimbap and receive a traditional recipe scroll with insights into Korean culinary heritage.";

Kitchen::Kitchen() {
    description = DESCRIPTION;
    task1 = TASK1;
    task2 = TASK2;
    task3 = TASK3;
    nextRoom1 = 3; // go to community garden
    nextRoom2 = 5; // go to heritage hall
}

void Kitchen::display(const vector<vector<bool>>& tasksCompleted, bool showFullDescription) const {
    if (showFullDescription) {
        cout << description << endl;
    } else {
        cout << "\nChoose one of these doors to continue." << endl;
    }
    cout << "1. " << task1 << endl;
    cout << "2. " << task2 << endl;
    if (!tasksCompleted[4][2]) {
        cout << "3. " << task3 << endl;
    }
}

int Kitchen::getNextRoom(int choice) const {
    if (choice == 1) return nextRoom1;
    if (choice == 2) return nextRoom2;
    if (choice == 3) return 4;
    return -1;
}