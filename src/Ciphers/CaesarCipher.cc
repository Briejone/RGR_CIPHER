#include "cipher.h"

string encryptCaesar(string message, int key) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (isalpha(message[i])) {
            if (message[i] >= 'a' && message[i] <= 'z') {
                char ch = (message[i] + key - 'a') % 26 + 'a';
                result += ch;
            }
            else {
                char ch = (message[i] + key - 'A') % 26 + 'A';
                result += ch;
            }
        }
    }
    return result;
}

bool _isEnglish_(string str) {
    for (int i = 0; i < str.length(); i++) {
        int asciiCode = (int)str[i];
        if (asciiCode < 65 || (asciiCode > 90 && asciiCode < 97) || asciiCode>122) {
            return false;
        }
    }
    return true;
}


string decryptCaesar(string message, int key) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        char ch = message[i];
        if (isalpha(ch)) {
            if (islower(ch)) {
                ch -= key;
                if (ch < 'a') {
                    ch += 26;
                }
            }
            else {
                ch -= key;
                if (ch < 'A') {
                    ch += 26;
                }
            }
        }
        result += ch;
    }
    return result;
}
