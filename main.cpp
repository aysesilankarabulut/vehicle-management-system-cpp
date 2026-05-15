#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Vehicle {
    string brand;
    string model;
    int year;
    int mileage;
};

vector<Vehicle> vehicles;

void showMenu() {
    cout << "\nVehicle Management System" << endl;
    cout << "1. Add Vehicle" << endl;
    cout << "2. Show Vehicles" << endl;
    cout << "3. Update Mileage" << endl;
    cout << "4. Check Maintenance Status" << endl;
    cout << "5. Exit" << endl;
}

void addVehicle() {
    Vehicle vehicle;

    cout << "Enter vehicle brand: ";
    cin >> vehicle.brand;
    cout << "Enter vehicle model: ";
    cin >> vehicle.model;
    cout << "Enter vehicle year: ";
    cin >> vehicle.year;
    cout << "Enter vehicle mileage: ";
    cin >> vehicle.mileage;

    vehicles.push_back(vehicle);
    cout << "Vehicle added successfully." << endl;
}

void showVehicles() {
    if (vehicles.empty()) {
        cout << "No vehicles found." << endl;
        return;
    }

    cout << "\nSaved Vehicles:" << endl;
    for (size_t i = 0; i < vehicles.size(); ++i) {
        const Vehicle &vehicle = vehicles[i];
        cout << i + 1 << ". "
             << vehicle.brand << " "
             << vehicle.model << " - Year: "
             << vehicle.year << ", Mileage: "
             << vehicle.mileage << endl;
    }
}

int main() {
    int choice;

    while (true) {
        showMenu();

        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            addVehicle();
        }
        else if (choice == 2) {
            showVehicles();
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