
#include <iostream>
using namespace std;

// Update bank balance using a pointer
void addScholarshipUsingPointer(int* balance, int amount)
{
    *balance += amount;
}

// Update bank balance using a reference
void addScholarshipUsingReference(int& balance, int amount)
{
    balance += amount;
}

int main()
{
    // Real-life example: Student bank account
    int balance = 5000;

    // Store the address of balance
    int* ptr = &balance;

    cout << "=== Student Bank Account ===" << endl;
    cout << "Initial balance: Rs. " << balance << endl;
    cout << "Address of balance: " << ptr << endl;
    cout << "Value using pointer: Rs. " << *ptr << endl;

    addScholarshipUsingPointer(ptr, 1000);
    cout << "\nAfter scholarship using pointer: Rs. "
         << balance << endl;

    addScholarshipUsingReference(balance, 500);
    cout << "After scholarship using reference: Rs. "
         << balance << endl;

    cout << "\nFinal balance: Rs. " << balance << endl;

    return 0;
}
