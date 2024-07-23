
#include "../include/HeritageHall.h"

const string HeritageHall::DESCRIPTION = "\nYou are in a spacious, elegantly decorated hall in a beautifully restored historical building.\nThe room features display tables and walls showcasing cultural artefacts.\nAround the building there are various gardens.";
const string HeritageHall::TASK1 = "Go through an old door at the end of the hall. You can hear machinery sounds on the other side of the it.";
const string HeritageHall::TASK2 = "Go into the garden and follow the smell of fresh herbs.";
const string HeritageHall::TASK3 = "Place all collected items (Maori carving, unity cloth patch, handwoven bracelet, plant seedling, recipe scroll) in the central showcase.";

HeritageHall::HeritageHall() {
    description = DESCRIPTION;
    task1 = TASK1;
    task2 = TASK2;
    specialTaskDescription = TASK3;
    nextRoom1 = 1; // go to fishing dock
    nextRoom2 = 4; // go to kitchen
}

void HeritageHall::display(const vector<vector<bool>>& tasksCompleted, bool showFullDescription) const {
    if (showFullDescription) {
        cout << description << endl;
    } else {
        cout << "\nFollow one of these paths." << endl;
    }
    cout << "1. " << task1 << endl;
    cout << "2. " << task2 << endl;
    // only if all tasks are completed show task 3
    if (tasksCompleted[0][2] && tasksCompleted[1][2] && tasksCompleted[2][2] && tasksCompleted[3][2] && tasksCompleted[4][2] && !tasksCompleted[5][2]) {
        cout << "3. " << specialTaskDescription << endl;
    }
}

int HeritageHall::getNextRoom(int choice) const {
    if (choice == 1) return nextRoom1;
    if (choice == 2) return nextRoom2;
    if (choice == 3) return 5; // special task choice in current room so room 5
    return -1;
}