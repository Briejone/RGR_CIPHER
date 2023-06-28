#include "cipher.h"

string encodeTarabar(const string& text) {
    const string russianAlphabet = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя.,-:…+= ";
    const string encodedAlphabet = "АЩШЧЦЕЁХФИЙТСРПОНМЛКУЗЖДГВБЪЫЪЭЮЯащшчцеёхфийтсрпонмлкузждгвбъыьэюя.,-:…+= ";
    string encodedText;
    for (char c : text) {
        size_t index = russianAlphabet.find(tolower(c));
        if (index != string::npos) {
            encodedText += encodedAlphabet[index];
        }
        else {
            encodedText += c;
        }
    }
    return encodedText;
}

string decodeTarabar(const string& encodedText) {
    const string russianAlphabet = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя.,-:…+= ";
    const string encodedAlphabet = "АЩШЧЦЕЁХФИЙТСРПОНМЛКУЗЖДГВБЪЫЪЭЮЯащшчцеёхфийтсрпонмлкузждгвбъыьэюя.,-:…+= ";
    string decodedText;
    for (char c : encodedText) {
        size_t index = encodedAlphabet.find(c);
        if (index != string::npos) {
            decodedText += russianAlphabet[index];
        }
        else {
            decodedText += c;
        }
    }
    return decodedText;
}

bool isRussianText(const string& text) {
    const string russianAlphabet = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя.,-:…+= ";
    const string encodedAlphabet = "АЩШЧЦЕЁХФИЙТСРПОНМЛКУЗЖДГВБЪЫЪЭЮЯащшчцеёхфийтсрпонмлкузждгвбъыьэюя.,-:…+= ";
    for (char c : text) {
        if (russianAlphabet.find(tolower(c)) == string::npos) {
            return false;
        }
    }
    return true;
}

int main() {
    string word = "ьыЈаІЁ";
    cout << encodeTarabar(word);
}