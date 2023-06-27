#include <iostream>  
#include <fstream>  
#include <algorithm>  
#include <string>  
#include <math.h>   
#include <clocale>
using namespace std;
string mappedKey;
string text;

int tableArr[26][26];
void createVigenereTable() {
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            int temp;
            if ((i + 65) + j > 90) {
                temp = ((i + 65) + j) - 26;

                //adding ASCII of alphabet letter in table index position
                tableArr[i][j] = temp;
            }
            else {
                temp = (i + 65) + j;

                //adding ASCII of alphabet letter in table index position
                tableArr[i][j] = temp;
            }
        } // for j loop
    } // for i loop

}

string encodeVizhiner(string text, string mappedKey) {
    createVigenereTable();
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == 32 && mappedKey[i] == 32) {
            result += " ";
        }
        else {
            int x = (int)text[i] - 65;
            int y = (int)mappedKey[i] - 65;
            result += (char)tableArr[x][y];
        }
    }

    return result;
}

int itrCount(int key, int msg) {
    int counter = 0;
    string result = "";

    //starting from ASCII of letter of Key and ending at letter of message
    // to get full 26 letters of alphabet
    for (int i = 0; i < 26; i++) {
        if (key + i > 90) {
            result += (char)(key + (i - 26));
        }
        else {
            result += (char)(key + i);
        }
    } //for

    for (int i = 0; i < result.length(); i++) {
        if (result[i] == msg) {
            break;
        }
        else {
            counter++;
        }
    }
    return counter;
}

string decodeDecryption(string text, string mappedKey) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == 32 && mappedKey[i] == 32) {
            result += " ";
        }
        else {
            int temp = itrCount((int)mappedKey[i], (int)text[i]);
            result += (char)(65 + temp);
        }
    }

    return result;
}


