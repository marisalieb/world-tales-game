
#ifndef HERITAGEHALL_H
#define HERITAGEHALL_H
#include "Room.h"

class HeritageHall : public Room {
public:
    HeritageHall();
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
    string specialTaskDescription;
    int nextRoom1;
    int nextRoom2;
};


#endif //HERITAGEHALL_H
