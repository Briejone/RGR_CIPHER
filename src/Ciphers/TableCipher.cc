#include "cipher.h"
// Функция шифрования
string encryptTable(string plaintext, string key) {
    string ciphertext = "";

    // Создаем таблицу замены
    vector<vector<char>> table(26, vector<char>(26));
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            table[i][j] = 'A' + (i + j) % 26;
        }
    }

    string key_only_letters = "";
    for (char c : key) {
        if (isalpha(c)) {
            key_only_letters += toupper(c);
        }
    }

    int col = 0;

    // Шифруем каждый символ открытого текста
    for (char c : plaintext) {
        if (isalpha(c)) {
            c = toupper(c);
            int row = key_only_letters[col % key_only_letters.length()] - 'A';
            ciphertext += table[row][c - 'A'];
            col++;
        }
    }

    return ciphertext;
}

// Функция расшифровки
string decryptTable(string ciphertext, string key) {
    string plaintext = "";

    // Создаем таблицу замены
    vector<vector<char>> table(26, vector<char>(26));
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            table[i][j] = 'A' + (i + j) % 26;
        }
    }

    string key_only_letters = "";
    for (char c : key) {
        if (isalpha(c)) {
            key_only_letters += toupper(c);
        }
    }

    int col = 0;

    // Расшифровываем каждый символ шифротекста
    for (char c : ciphertext) {
        if (isalpha(c)) {
            c = toupper(c);
            int row = key_only_letters[col % key_only_letters.length()] - 'A';
            for (int i = 0; i < 26; i++) {
                if (table[row][i] == c) {
                    plaintext += 'A' + i;
                    break;
                }
            }
            col++;
        }
    }

    return plaintext;
}
