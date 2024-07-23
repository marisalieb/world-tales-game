
#ifndef FILMSTUDIO_H
#define FILMSTUDIO_H

#include "Room.h"

class FilmStudio : public Room {
public:
    FilmStudio();
    void display(const vector<vector<bool>>& tasksCompleted, bool showFullDescription) const override;
    int getNextRoom(int choice) const override;

private:
    static const string DESCRIPTION;
    static const string TASK1;
    static const string TASK2;
    static const string TASK3;
    string description;
    string task1;
    string task2;
    string task3;
    int nextRoom1;
    int nextRoom2;
};

#endif //FILMSTUDIO_H
