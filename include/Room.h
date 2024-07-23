
#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Room {
public:
    virtual ~Room() = default;

    virtual void display(const vector<vector<bool>>& tasksCompleted, bool showFullDescription) const = 0;
    virtual int getNextRoom(int choice) const = 0;
    virtual bool specialTask() const {
        return false;
    }
};

#endif //ROOM_H
