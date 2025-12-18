#include <iostream>
#include <string>
#include <fstream>
#include<iomanip>
// here encrypt is used in change of  decrypt
using namespace std;
int main() {
    string message;
    char key;
    int option;
    cout << "Enter 1 to decrypt or 0 to encrypt:\n";
    cin >> option;
    cin.ignore();
    if (option == 1) {
        cout << "Enter the message you want to decrypt:\n";
        getline(cin, message);
        cout << "Enter the key:\n";
        cin >> key;
        for (int i = 0; i < message.length(); i++) {
            message[i] = message[i] ^ key;
        }
        ofstream offile("decrypt.txt", ios::app);
        offile << "Here is the decrypted code:" << setw(5)<<message <<setw(5)<< "Key" <<setw(5)<< key << endl;;
        offile.close();
        cout << "Result: " << message << endl;
    }
    else {
        cout << "Enter the message you want to encrypt:\n";
        getline(cin, message);
        cout << "Enter the key:\n";
        cin >> key;
        for (int i = 0; i < message.length(); i++) {
            message[i] = message[i] ^ key;
        }
        ofstream infile("encrypt.txt", ios::app);
        infile << " encrypted code: " << setw(5)<<message <<setw(5)<< "Key" <<setw(5)<< key << endl;
        infile.close();
        cout << "Result: " << message << endl;
    }
    return 0;
}
