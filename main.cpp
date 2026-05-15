#include <iostream>
using namespace std;

void showMenu() {
    cout << "\nVehicle Management System" << endl;
    cout << "1. Add Vehicle" << endl;
    cout << "2. Show Vehicles" << endl;
    cout << "3. Update Mileage" << endl;
    cout << "4. Check Maintenance Status" << endl;
    cout << "5. Exit" << endl;
}

int main() {
    int choice;

    while (true) {
        showMenu();

        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Add Vehicle feature will be added later." << endl;
        }
        else if (choice == 2) {
            cout << "Show Vehicles feature will be added later." << endl;
        }
        else if (choice == 3) {
            cout << "Update Mileage feature will be added later." << endl;
        }
        else if (choice == 4) {
            cout << "Check Maintenance Status feature will be added later." << endl;
        }
        else if (choice == 5) {
            cout << "Exiting program..." << endl;
            break;
        }
        else {
            cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}