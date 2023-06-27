#include "cipher.h"

string encryptCaesar(string message, int key) { //шифрование
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (isalpha(message[i])) { //проверка на букву алфавита
            if (message[i] >= 'a' && message[i] <= 'z') { //для нижнего регистра
                char ch = (message[i] + key - 'a') % 26 + 'a';
                result += ch;
            }
            else { //для верхнего регистра
                char ch = (message[i] + key - 'A') % 26 + 'A';
                result += ch;
            }
        }
        else { //обработка ошибки
            cout << "Ошибка! Сообщение должно состоять только из букв английского алфавита." << endl;
            exit(1); //прерывание программы при ошибке
        }
    }
    return result;
}


string decryptCaesar(string message, int key) { //дешифрование
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        char ch = message[i];
        if (isalpha(ch)) { //проверка на то, является ли буквой
            if (islower(ch)) { //для нижнего регистра
                ch -= key;
                if (ch < 'a') {
                    ch += 26;
                }
            }
            else { //для верхнего регистра
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
