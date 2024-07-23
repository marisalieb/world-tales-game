
#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Room.h"
#include "FilmStudio.h"
#include "GarmentFactory.h"
#include "FishingDock.h"
#include "CommunityGarden.h"
#include "Kitchen.h"
#include "HeritageHall.h"

class Game {
public:
    Game();
    ~Game();
    void play();

private:
    vector<Room*> rooms;
    vector<vector<bool>> tasksCompleted;
    int currentRoom;
};

#endif //GAME_H
