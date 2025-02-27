#include <iostream>
using namespace std;
int main() {
    int num,sum=0;
    for (int i = 0; i <= 10; i++) {
        cin>>num;
        sum+=num;
    }
    cout<<sum;
    return 0;
}#include <iostream>
using namespace std;
/*double calculateTotal(int item, int quantity) {
    double price;
    switch (item) {
        case 1: price = 10.0; break; // Pizza
        case 2: price = 8.0; break;  // Burger
        case 3: price = 5.0; break;  // Salad
        default: return 0;
    }
    return price * quantity;
}

int main() {
    int item, quantity;
    char choice;

    do {
        cout << "Menu:\n1. Pizza - $10\n2. Burger - $8\n3. Salad - $5\n";
        cout << "Enter item number: ";
        cin >> item;
        cout << "Enter quantity: ";
        cin >> quantity;

        double total = calculateTotal(item, quantity);
        if (total > 0)
            cout << "Total Bill: $" << total << endl;
        else
            cout << "Invalid selection. Try again.\n";

        cout << "Do you want to order more? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for your order!\n";

    return 0;
}*/

//probelem 2
/*double calculateFee(int hours) {
    if (hours <= 2) return 0;
    if (hours <= 5) return (hours - 2) * 2;
    return (3 * 2) + (hours - 5) * 5;
}

int main() {
    int hours;
    char choice;

    do {
        cout << "Enter number of hours parked: ";
        cin >> hours;

        cout << "Fee: $" << calculateFee(hours) << endl;

        cout << "Process another customer? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}*/

//problem 3
/*double balance = 500;
void deposit(double amount) { balance += amount; }
void withdraw(double amount) {
    if (amount > balance) cout << "Insufficient Funds\n";
    else balance -= amount;
}
void checkBalance() { cout << "Balance: $" << balance << endl; }

int main() {
    int option;
    double amount;
    char choice;

    do {
        cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter option: ";
        cin >> option;

        switch (option) {
            case 1: cout << "Enter deposit amount: "; cin >> amount; deposit(amount); break;
            case 2: cout << "Enter withdrawal amount: "; cin >> amount; withdraw(amount); break;
            case 3: checkBalance(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid option.\n";
        }

        cout << "Perform another transaction? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}*/

//problem 4
/*double calculateCost(int movie, int tickets) {
    double price;
    switch (movie) {
        case 1: price = 8.0; break;
        case 2: price = 10.0; break;
        case 3: price = 12.0; break;
        default: return 0;
    }
    return price * tickets;
}

int main() {
    int movie, tickets;
    char choice;

    do {
        cout << "Movies:\n1. Movie A - $8\n2. Movie B - $10\n3. Movie C - $12\nSelect movie: ";
        cin >> movie;
        cout << "Enter number of tickets: ";
        cin >> tickets;

        double total = calculateCost(movie, tickets);
        if (total > 0)
            cout << "Total Cost: $" << total << endl;
        else
            cout << "Invalid selection.\n";

        cout << "Book another movie? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}*/
//problem 5
/*double calculateFare(int train, int tickets) {
    double price;
    switch (train) {
        case 1: price = 15.0; break;
        case 2: price = 20.0; break;
        case 3: price = 25.0; break;
        default: return 0;
    }
    return price * tickets;
}

int main() {
    int train, tickets;
    char choice;

    do {
        cout << "Trains:\n1. Train X - $15\n2. Train Y - $20\n3. Train Z - $25\nSelect train: ";
        cin >> train;
        cout << "Enter number of tickets: ";
        cin >> tickets;

        double total = calculateFare(train, tickets);
        if (total > 0)
            cout << "Total Fare: $" << total << endl;
        else
            cout << "Invalid selection.\n";

        cout << "Book another train? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}*/

//problem 6
/*bool isStrongPassword(string password) {
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    string specialChars = "!@#$%^&*()";

    if (password.length() < 8) return false;

    for (char ch : password) {
        if (isupper(ch)) hasUpper = true;
        if (islower(ch)) hasLower = true;
        if (isdigit(ch)) hasDigit = true;
        if (specialChars.find(ch) != string::npos) hasSpecial = true;
    }
    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    if (isStrongPassword(password))
        cout << "Strong Password\n";
    else
        cout << "Weak Password\n";

    return 0;
}*/


//problem 7
/*bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) daysInMonth[1] = 29;
    return (month >= 1 && month <= 12 && day >= 1 && day <= daysInMonth[month - 1]);
}

void nextDate(int &day, int &month, int &year) {
    if (!isValidDate(day, month, year)) {
        cout << "Invalid date!\n";
        return;
    }

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) daysInMonth[1] = 29;

    if (++day > daysInMonth[month - 1]) {
        day = 1;
        if (++month > 12) {
            month = 1;
            year++;
        }
    }

    cout << "Next Date: " << day << "/" << month << "/" << year << endl;
}

int main() {
    int day, month, year;
    cout << "Enter date (dd mm yyyy): ";
    cin >> day >> month >> year;
    nextDate(day, month, year);
    return 0;
}*/