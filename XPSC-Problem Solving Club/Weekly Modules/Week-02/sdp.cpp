#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Donor {
    string id, name, bloodGroup, district, contact;

    void input() {
        cout << "Enter Name: "; getline(cin, name);
        cout << "Enter Blood Group: "; getline(cin, bloodGroup);
        cout << "Enter District: "; getline(cin, district);
        cout << "Enter Contact: "; getline(cin, contact);
        id = "D" + to_string(rand() % 1000 + 100); // Simple ID generator
    }

    void saveToFile() {
        ofstream file("data/donors.txt", ios::app);
        file << id << "," << name << "," << bloodGroup << "," 
             << district << "," << contact << "\n";
        file.close();
    }
};

void registerDonor() {
    cin.ignore(); // clear buffer
    Donor d;
    d.input();
    d.saveToFile();
    cout << "✅ Donor Registered Successfully. ID: " << d.id << endl;
}

void searchDonor() {
    cin.ignore();
    string group, dist;
    cout << "Enter Blood Group to Search: ";
    getline(cin, group);
    cout << "Enter District: ";
    getline(cin, dist);

    ifstream file("data/donors.txt");
    string line;
    bool found = false;

    cout << "\n🔍 Matching Donors:\n";
    while (getline(file, line)) {
        size_t pos = 0;
        vector<string> fields;
        while ((pos = line.find(',')) != string::npos) {
            fields.push_back(line.substr(0, pos));
            line.erase(0, pos + 1);
        }
        fields.push_back(line);

        if (fields.size() >= 5 && fields[2] == group && fields[3] == dist) {
            cout << "ID: " << fields[0] << " | Name: " << fields[1]
                 << " | Contact: " << fields[4] << endl;
            found = true;
        }
    }
    if (!found) cout << "❌ No matching donors found.\n";
}

void donorMenu() {
    int ch;
    do {
        cout << "\n=== Donor Menu ===\n";
        cout << "1. Register as Donor\n";
        cout << "2. Search Donor\n";
        cout << "0. Back\n> ";
        cin >> ch;
        switch (ch) {
            case 1: registerDonor(); break;
            case 2: searchDonor(); break;
        }
    } while (ch != 0);
}

int main() {
    int choice;
    do {
        cout << "\n=== BUBT ROKTO ===\n";
        cout << "1. Patient/Caregiver\n";
        cout << "2. Donor\n";
        cout << "3. Hospital Authority\n";
        cout << "4. Admin\n";
        cout << "0. Exit\n> ";
        cin >> choice;

        switch (choice) {
            case 2: donorMenu(); break;
            default: cout << "🚧 Feature Coming Soon!\n";
        }
    } while (choice != 0);
    
    return 0;
}
