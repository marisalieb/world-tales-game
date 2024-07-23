
#include "../include/GarmentFactory.h"

const string GarmentFactory::DESCRIPTION = "\nYou are in Dhaka, Bangladesh, in a bustling garment factory with rows of sewing machines and lots of fabrics.\nThe air is filled with the hum of sewing machines and workers are focused on their tasks.";
const string GarmentFactory::TASK1 = "Go through a hidden passage behind fabric rolls to a dimly lit alley with a faint sea breeze.";
const string GarmentFactory::TASK2 = "Open a door labeled \'Management Office\' leading to a hallway with fresh earth scents.";
const string GarmentFactory::TASK3 = "Support a worker\'s petition for better working conditions and get a symbolic cloth patch representing unity.";

GarmentFactory::GarmentFactory() {
    description = DESCRIPTION;
    task1 = TASK1;
    task2 = TASK2;
    task3 = TASK3;
    nextRoom1 = 2; // go to fishing dock
    nextRoom2 = 3; // go to community garden
}


void GarmentFactory::display(const vector<vector<bool>>& tasksCompleted, bool showFullDescription) const {
        if (showFullDescription) {
                cout << description << endl;
        } else {
                cout << "\nDecide where to go next." << endl;
        }
        cout << "1. " << task1 << endl;
        cout << "2. " << task2 << endl;
        if (!tasksCompleted[1][2]) {
                cout << "3. " << task3 << endl;
        }
}

int GarmentFactory::getNextRoom(int choice) const {
        if (choice == 1) return nextRoom1;
        if (choice == 2) return nextRoom2;
        if (choice == 3) return 1;
        return -1;
}

