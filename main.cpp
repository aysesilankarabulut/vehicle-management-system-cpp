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

void checkMaintenanceStatus() {
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

    cout << "Enter vehicle number: ";
    int vehicleNumber;
    cin >> vehicleNumber;

    if (vehicleNumber < 1 || vehicleNumber > static_cast<int>(vehicles.size())) {
        cout << "Invalid vehicle number." << endl;
        return;
    }

    const Vehicle &vehicle = vehicles[vehicleNumber - 1];
    cout << "Vehicle: " << vehicle.brand << " " << vehicle.model << ", Mileage: " << vehicle.mileage << endl;

    if (vehicle.mileage >= 50000) {
        cout << "Maintenance required." << endl;
    } else {
        cout << "Maintenance not required yet." << endl;
    }
}

void updateMileage() {
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

    cout << "Enter vehicle number: ";
    int vehicleNumber;
    cin >> vehicleNumber;

    if (vehicleNumber < 1 || vehicleNumber > static_cast<int>(vehicles.size())) {
        cout << "Invalid vehicle number." << endl;
        return;
    }

    cout << "Enter new mileage: ";
    int newMileage;
    cin >> newMileage;

    if (newMileage < 0) {
        cout << "Mileage cannot be negative." << endl;
        return;
    }

    vehicles[vehicleNumber - 1].mileage = newMileage;
    cout << "Mileage updated successfully." << endl;
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
            updateMileage();
        }
        else if (choice == 4) {
            checkMaintenanceStatus();
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