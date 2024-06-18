#include <iostream>
#include <cstdlib>
using namespace std;
#include <iostream>
using namespace std;

class Hotel {
public:
    int Arooms = 0, Asteak = 0, Aburger = 0, Adrinks = 0, Adeserts = 0;
    int Srooms = 0, Ssteak = 0, Sburger = 0, Sdrinks = 0, Sdeserts = 0;
    int Price_rooms = 0, Price_steak = 0, Price_burger = 0, Price_drinks = 0, Price_deserts = 0;

    void setup();
    void displayInfo();
    void menu();

private:
    void handleRooms();
    void handleSteak();
    void handleBurger();
    void handleDrinks();
    void handleDeserts();
};

void Hotel::setup() {
    cout << "\t Amount of Items we have" << endl;
    cout << "Rooms: ";
    cin >> Arooms;
    cout << "Steak: ";
    cin >> Asteak;
    cout << "Burger: ";
    cin >> Aburger;
    cout << "Drinks: ";
    cin >> Adrinks;
    cout << "Deserts: ";
    cin >> Adeserts;
}

void Hotel::displayInfo() {
    cout << "\tInformation of sales and inventory" << endl;
    cout << "\nRooms we had: " << Arooms;
    cout << "\nNumber of Rooms currently occupied: " << Srooms;
    cout << "\nRooms available: " << Arooms - Srooms;
    cout << "\nTotal revenue from rooms: " << Price_rooms;

    cout << "\n\nSteaks we had: " << Asteak;
    cout << "\nNumber of steaks sold today: " << Ssteak;
    cout << "\nSteaks available: " << Asteak - Ssteak;
    cout << "\nTotal revenue from steaks: " << Price_steak;

    cout << "\n\nBurgers we had: " << Aburger;
    cout << "\nNumber of burgers sold: " << Sburger;
    cout << "\nBurgers available: " << Aburger - Sburger;
    cout << "\nTotal revenue from burgers: " << Price_burger;

    cout << "\n\nDrinks we had: " << Adrinks;
    cout << "\nNumber of drinks sold: " << Sdrinks;
    cout << "\nDrinks available: " << Adrinks - Sdrinks;
    cout << "\nTotal revenue from drinks: " << Price_drinks;

    cout << "\n\nDeserts we had: " << Adeserts;
    cout << "\nNumber of deserts sold: " << Sdeserts;
    cout << "\nDeserts available: " << Adeserts - Sdeserts;
    cout << "\nTotal revenue from deserts: " << Price_deserts;
}

void Hotel::menu() {
    int Choice;
    while (true) {
        cout << "\n\t\t\t Please select from the menu options";
        cout << "\n\n1) Rooms";
        cout << "\n2) Steak";
        cout << "\n3) Burger";
        cout << "\n4) Drinks";
        cout << "\n5) Deserts";
        cout << "\n6) Information regarding sales and amount of items";
        cout << "\n7) Exit";
        cout << "\n\nPlease make a selection: ";
        cin >> Choice;

        switch (Choice) {
            case 1:
                handleRooms();
                break;
            case 2:
                handleSteak();
                break;
            case 3:
                handleBurger();
                break;
            case 4:
                handleDrinks();
                break;
            case 5:
                handleDeserts();
                break;
            case 6:
                displayInfo();
                break;
            case 7:
                exit(0);
            default:
                cout << "Please select from the options above" << endl;
        }
    }
}

void Hotel::handleRooms() {
    int Amount;
    cout << "How many rooms would you like to check out: ";
    cin >> Amount;
    if (Arooms - Srooms >= Amount) {
        Srooms += Amount;
        Price_rooms += (Amount * 148);
        cout << "\n\n\t\t" << Amount << " Rooms you have booked";
    } else {
        cout << "\n\tOnly " << Arooms - Srooms << " Rooms remain";
    }
}

void Hotel::handleSteak() {
    int Amount;
    cout << "How many steaks would you like to order: ";
    cin >> Amount;
    if (Asteak - Ssteak >= Amount) {
        Ssteak += Amount;
        Price_steak += (Amount * 45);
        cout << "\n\n\t\t" << Amount << " Steaks you have ordered";
    } else {
        cout << "\n\tOnly " << Asteak - Ssteak << " steaks remain";
    }
}

void Hotel::handleBurger() {
    int Amount;
    cout << "How many burgers would you like to order: ";
    cin >> Amount;
    if (Aburger - Sburger >= Amount) {
        Sburger += Amount;
        Price_burger += (Amount * 20);
        cout << "\n\n\t\t" << Amount << " Burgers you have ordered";
    } else {
        cout << "\n\tOnly " << Aburger - Sburger << " burgers remain";
    }
}

void Hotel::handleDrinks() {
    int Amount;
    cout << "How many drinks would you like to order: ";
    cin >> Amount;
    if (Adrinks - Sdrinks >= Amount) {
        Sdrinks += Amount;
        Price_drinks += (Amount * 1.50);
        cout << "\n\n\t\t" << Amount << " Drinks you have ordered";
    } else {
        cout << "\n\tOnly " << Adrinks - Sdrinks << " drinks remain";
    }
}

void Hotel::handleDeserts() {
    int Amount;
    cout << "How many deserts would you like to order: ";
    cin >> Amount;
    if (Adeserts - Sdeserts >= Amount) {
        Sdeserts += Amount;
        Price_deserts += (Amount * 10);
        cout << "\n\n\t\t" << Amount << " Deserts you have ordered";
    } else {
        cout << "\n\tOnly " << Adeserts - Sdeserts << " deserts remain";
    }
}

int main() {
    Hotel hotel;
    hotel.setup();
    hotel.menu();
    return 0;
}