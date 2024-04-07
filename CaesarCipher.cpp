#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

string encryptCaesar(string text, int key)
{
    string result;

    for (char ch : text)    // for every character in string
    {
        if (isalpha(ch))
        {
            if (islower(ch))
                ch = 'a' + (ch - 'a' + key) % 26;
            else
                ch = 'A' + (ch - 'A' + key) % 26;
        }
        result = result + ch;
    }
    return result;
}

string decryptCaesar(string text, int key)
{
    string result;

    for (char ch : text)
    {
        if (isalpha(ch))
        {
            if (islower(ch))
                ch = 'a' + (ch - 'a' - key + 26) % 26;
            else
                ch = 'A' + (ch - 'A' - key + 26) % 26;
        }
        result = result + ch;
    }
    return result;
}

int main()
{
    int choice, key;
    string text;

    while(1)
    {
        cout << "Caesar Cipher\n1: Encryption\n2: Decryption \n3: Exit\nEnter a choice: ";
        cin >> choice;
        cin.ignore(); // Ignore newline character left in input buffer

        switch (choice)
        {
        case 1:
            cout << "Enter text to encrypt: ";
            getline(cin, text);
            cout << "Enter the key: ";
            cin >> key;
            cout << "Encrypted text: " << encryptCaesar(text, key) <<endl<<endl;
            break;

        case 2:
            cout << "Enter text to decrypt: ";
            cin.ignore(); // Ignore newline character left in input buffer
            getline(cin, text);
            cout << "Enter the key: ";
            cin >> key;
            cout << "Decrypted text: " << decryptCaesar(text, key) <<endl<<endl;
            break;

        case 3:
            exit(0);

        default: cout<<"Invalid Input"<<endl;
        }
    }

    return 0;
}
