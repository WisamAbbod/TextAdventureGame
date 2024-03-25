#include "Room.hpp"

using namespace std;


Room::Room(const std::string& desc)
{
    this->description = desc;
   
}


void Room::AddItem(const Item& item)
{

    items.push_back(item);
    cout << "Item added to room" << endl;

}


void Room::RemoveItem(const Item& item)
{
    for (auto it = items.begin(); it != items.end(); ++it) {
            items.erase(it);
            break;
        
    }
    cout << "Item removed from room" << endl;

}


void Room::AddExit(const std::string& compass, Room* room) {
    if (compass == "north" || compass == "south" || compass == "east" || compass == "west") {
        exits[compass] = room; //Add direction if it is valid
        std::string opposite = GetOppositeDirection(compass, opposite); //Get the opposite direction
        room->exits[opposite] = this; //Add the opposite direction to the other room

    }
    else {
        throw invalid_argument("Invalid direction");//Throw an error
    }

}

string GetOppositeDirection(const string& direction, string& opposite) {
    if (direction == "north") {
        return  "south";
    }
    else if (direction == "south") {
        return  "north";
    }
    else if (direction == "east") {
        return  "west";
    }
    else if (direction == "west") {
        return  "east";
    }
    return "Invalid direction";
}

