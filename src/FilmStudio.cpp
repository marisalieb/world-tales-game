
#include "../include/FilmStudio.h"

const string FilmStudio::DESCRIPTION = "\nYou are in Rotorua, New Zealand, in a vibrant film studio filled with reels and scripts.\nYou see an editing screen displaying various film scenes and movie posters adorning the walls.";
const string FilmStudio::TASK1 = "Go through a modern door labeled \'Editing Suite\' with distant machinery sounds.";
const string FilmStudio::TASK2 = "Open an old wooden door marked \'Props Storage\' with a faint saltwater scent.";
const string FilmStudio::TASK3 = "Help the director recreate a Maori scene for a film and receive a traditional Maori carving.";


FilmStudio::FilmStudio() {
    description = DESCRIPTION;
    task1 = TASK1;
    task2 = TASK2;
    task3 = TASK3;
    nextRoom1 = 1; // go to garment factory
    nextRoom2 = 2; // go to fishing dock
}

void FilmStudio::display(const vector<vector<bool> > &tasksCompleted, bool showFullDescription) const {
    if (showFullDescription) {
        cout << description << endl;
    } else {
        cout << "\nChoose one of these two doors." << endl;
    }
    cout << "1. " << task1 << endl;
    cout << "2. " << task2 << endl;
    if (!tasksCompleted[0][2]) {
        cout << "3. " << task3 << endl;
    }
}

int FilmStudio::getNextRoom(int choice) const {
    if (choice == 1) return nextRoom1;
    if (choice == 2) return nextRoom2;
    if (choice == 3) return 0; // remain in current room so room 0 for task 3
    return -1; // invalid choice
}
