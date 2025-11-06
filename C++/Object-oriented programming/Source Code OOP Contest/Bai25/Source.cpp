#pragma once
#include<iostream>
#include<math.h>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;

class RoomType {
private:
	string _nameRoom;
public:
	RoomType();
	RoomType(string name);
	string getName();
};

RoomType::RoomType() {};
RoomType::RoomType(string name) : _nameRoom(name) {};
string RoomType::getName() { return _nameRoom; }

//---------------------------------------
class Room {
private:
	string _idRoom;
	RoomType* _roomType;
public:
	Room();
	Room(string id, RoomType* type);
	string getId();
	RoomType* getType();
};
Room::Room() {};
Room::Room(string id, RoomType* type) : _idRoom(id), _roomType(type) {}
string Room::getId() { return _idRoom; }
RoomType* Room::getType() { return _roomType; }


class RoomConfer : public Room{
private:
	unordered_map<string, Room*> _room;
	string _conferName;
public:
	RoomConfer();
	RoomConfer(string id, RoomType* type, string name);
	void addRoom(Room* room);
	string getConferName();
	unordered_map<string, Room*> getRooms();
};

RoomConfer::RoomConfer() {};
RoomConfer::RoomConfer(string id, RoomType* type, string name) : Room(id, type), _conferName(name) {}
void RoomConfer::addRoom(Room* room) { _room[room->getId()] = room; }
string RoomConfer::getConferName() { return _conferName; }
unordered_map<string, Room*> RoomConfer::getRooms() { return _room; }

//---------------------------------------
class Floor {
private:
	string _idFloor;
	unordered_map<string, Room*> floor;
public:
	Floor(string id);
	void addRoom(Room* room);
	string getId();
	unordered_map<string, Room*> getRoom();
};

Floor::Floor(string id) : _idFloor(id) {}
void Floor::addRoom(Room* room) { floor[room->getId()] = room; }
string Floor::getId() { return _idFloor; }
unordered_map<string, Room*> Floor::getRoom() { return floor; }

//---------------------------------------------

class Booking {
private:
	Room* _room;
	string _startTime;
	string _endTime;
public:
	Booking(Room* r, string start, string end);
	Room* getRoom();
	string getStartTime();
	string getEndTime();
};

Booking::Booking(Room* r, string start, string end) : _room(r), _startTime(start), _endTime(end) {}
Room* Booking::getRoom() { return _room; }
string Booking::getStartTime() { return _startTime; }
string Booking::getEndTime() { return _endTime; }

class Customer {

private:
	string _name;
	string _id;
	vector<Booking*> booking;
public:
	Customer();
	Customer(string name, string id);
	void bookRoom(string startTime, string endTime, Room * room);
	string getName();
	string getId();
	vector<Booking*> getBooking();
};

Customer::Customer() {};
Customer::Customer(string name, string id) : _name(name), _id(id) {};
void Customer::bookRoom(string startTime, string endTime, Room * room) {
	Booking* newRoom = new Booking(room, startTime, endTime);
	booking.push_back(newRoom);
}
string Customer::getName() { return _name; }
string Customer::getId() { return _id; }
vector<Booking*> Customer::getBooking() { return booking; };

//--------------------------------------------------
class Hotel {
private:
	unordered_map<string, Floor*> hotel;
public:
	void addFloor(Floor* floor);
	unordered_map<string, Floor*> getFloor();
};

void Hotel::addFloor(Floor* floor) { hotel[floor->getId()] = floor; };
unordered_map<string, Floor*> Hotel::getFloor() { return hotel; }
//-------------------------------------------------

int main() {
    //Tao laoi phong
    RoomType* roomType1 = new RoomType("Phong hoc");
    RoomType* roomType2 = new RoomType("Phong doc sach");
    RoomType* roomType3 = new RoomType("Phong y te");

    // Tao cac phong
    Room* room101 = new Room("101", roomType1);
    Room* room201 = new Room("201", roomType1);
    RoomConfer* conferRoom301 = new RoomConfer("301", roomType2, "Hoang Sa");

    // Them cac phong vao tung tang
    Floor* floor1 = new Floor("1");
    floor1->addRoom(room101);

    Floor* floor2 = new Floor("2");
    floor2->addRoom(room201);
    floor2->addRoom(conferRoom301);

    // Them tang vao khach san
    Hotel* hotel = new Hotel();
    hotel->addFloor(floor1);
    hotel->addFloor(floor2);

    // Khach hang dat phong
    Customer* customer1 = new Customer("Nguyen Xuan Viet Duc", "22280014");
	customer1->bookRoom("20/06/2024", "25/06/2024", room201);
	customer1->bookRoom("26/06/2024", "30/06/2024", room101);

    // Hien thi thong tin khach san
	cout << "\n******************* HOTEL *******************\n";
    cout << "Thong tin khach san:" << endl;
    for (const auto& floor : hotel->getFloor()) {
        Floor* floorInfor = floor.second;
        cout << "Tang " << floorInfor->getId() << ":" << endl;
        for (const auto& room : floorInfor->getRoom()) {
            Room* roomInfor = room.second;
            cout << " + Phong " << roomInfor->getId() << ": " << roomInfor->getType()->getName()<< endl;
        }
    }

    // Khach hang da dat phong
	cout << "\n******************* CUSTOMER *******************\n";
	cout << "Khach hang: " << customer1->getName() <<endl;
	cout << "CCCD: " << customer1->getId() << endl;
	cout << "Cac phong da dat: "<<endl;
	for (const auto& booking : customer1->getBooking()) {
		cout << " + Phong " << booking->getRoom()->getId() << ", Time:  "
			<< booking->getStartTime() << " - " << booking->getEndTime() << endl;
	}
    return 0;
}