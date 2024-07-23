
#ifndef GARMENTFACTORY_H
#define GARMENTFACTORY_H
#include "Room.h"


class GarmentFactory : public Room {
public:
    GarmentFactory();
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

#endif //GARMENTFACTORY_H
