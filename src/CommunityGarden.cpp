
#include "../include/CommunityGarden.h"

const string CommunityGarden::DESCRIPTION = "\nYou are in London, England, in a lush community garden surrounded by urban sprawl, featuring various plants and flowers.\nThere are garden beds, compost bins and a small tool shed.";
const string CommunityGarden::TASK1 = "Enter an ivy-covered archway revealing a tunnel with echoes.";
const string CommunityGarden::TASK2 = "Go through a small iron gate leading to a cobblestone path with cooking scents.";
const string CommunityGarden::TASK3 = "Assist in building a tool shed and get a plant seedling with conservation significance.";

CommunityGarden::CommunityGarden() {
    description = DESCRIPTION;
    task1 = TASK1;
    task2 = TASK2;
    task3 = TASK3;
    nextRoom1 = 0; // go to film studio
    nextRoom2 = 4; // go to kitchen
}

void CommunityGarden::display(const vector<vector<bool>>& tasksCompleted, bool showFullDescription) const {
    if (showFullDescription) {
        cout << description << endl;
    } else {
        cout << "\nDecide which path to take next." << endl;
    }
    cout << "1. " << task1 << endl;
    cout << "2. " << task2 << endl;
    if (!tasksCompleted[3][2]) {
        cout << "3. " << task3 << endl;
    }
}

int CommunityGarden::getNextRoom(int choice) const {
    if (choice == 1) return nextRoom1;
    if (choice == 2) return nextRoom2;
    if (choice == 3) return 3;
    return -1;
}