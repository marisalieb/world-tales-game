
#include "../include/FishingDock.h"

const string FishingDock::DESCRIPTION = "\nYou are in Elmina, Ghana, at a serene coastal dock with fishing boats, drying nets and seagulls overhead.\nFishermen are seen preparing their gear and mending nets.";
const string FishingDock::TASK1 = "Follow a costal trail to a small lake.";
const string FishingDock::TASK2 = "Follow a narrow path through tall grass to a serene garden.";
const string FishingDock::TASK3 = "Help repair fishing nets and receive a handwoven bracelet symbolising traditional fishing practices.";

FishingDock::FishingDock() {
    description = DESCRIPTION;
    task1 = TASK1;
    task2 = TASK2;
    task3 = TASK3;
    nextRoom1 = 0; // go to film studio
    nextRoom2 = 5; // go to heritage hall
}

void FishingDock::display(const vector<vector<bool>>& tasksCompleted, bool showFullDescription) const {
    if (showFullDescription) {
        cout << description << endl;
    } else {
        cout << "\nChoose your next direction." << endl;
    }
    cout << "1. " << task1 << endl;
    cout << "2. " << task2 << endl;
    if (!tasksCompleted[2][2]) {
        cout << "3. " << task3 << endl;
    }
}

int FishingDock::getNextRoom(int choice) const {
    if (choice == 1) return nextRoom1;
    if (choice == 2) return nextRoom2;
    if (choice == 3) return 2;
    return -1;
}

