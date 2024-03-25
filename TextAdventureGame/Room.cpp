#include "Room.hpp"

using namespace std;


Room::Room(const std::string& desc)
{
    this->description = desc;
   
}


void Room::AddItem(const Item& item)
{
    Item.push_back(item);
    cout << "Item added to room" << endl;

}


void Room::RemoveItem(const Item& item)
{


    cout << "Item removed from room" << endl;

}

void Room::AddExit(const std::string compass)
{
    cout << "if you travel" << compass << "you will reach" << room << endl;

}