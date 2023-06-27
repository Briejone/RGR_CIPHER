#include <iostream>        
#include <fstream>        
#include <string>        
#include <algorithm> // для функции replace    
#include <cstring> 
 
using namespace std; 
 
const int ALPHABET_SIZE = 26; 
 
 
void createNewAlphabet(char* newAlphabet) { 
    char originalAlphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
    char word[ALPHABET_SIZE + 1]; 
    bool validInput = false; 
    while (!validInput) { 
        std::cout << "Введите ключ: "; 
        std::cin >> word;
        validInput = true; 
        int wordLength = strlen(word); 
        for (int i = 0; i < wordLength; i++) { 
            if (!isupper(word[i])) { // Проверяем, что символ является заглавной буквой 
                validInput = false; 
                break; 
            } 
        } 
        if (!validInput) { 
            std::cout << "Ошибка: введите только заглавные буквы английского алфавита" << std::endl; 
        } 
    } 
 
    // Добавляем буквы из слова в новый алфавит 
    int wordLength = strlen(word); 
    for (int i = 0; i < wordLength; i++) { 
        newAlphabet[i] = word[i]; 
    } 
 
    // Добавляем остальные буквы из исходного алфавита 
    int j = wordLength; 
    for (int i = 0; i < ALPHABET_SIZE; i++) { 
        char letter = originalAlphabet[i]; 
        if (strchr(word, letter) == nullptr) { // Проверяем, что буква не была добавлена ранее 
            newAlphabet[j] = letter; 
            j++; 
        } 
    } 
    newAlphabet[ALPHABET_SIZE] = '\0'; 
} 
 
 
string encodeCodeword(string source_text, char* ALPHABET_ENCODED) { 
    string text_encoded; // строка для хранения закодированного текста 
    string encoded_text; 
    char ALPHABET_DECODED[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
     
    for (auto c : source_text) { 
        auto it = std::find(std::begin(ALPHABET_DECODED), std::end(ALPHABET_DECODED), std::toupper(c)); 
        if (it != std::end(ALPHABET_DECODED)) { 
            int index = std::distance(std::begin(ALPHABET_DECODED), it); 
            text_encoded += std::toupper(ALPHABET_ENCODED[index]); 
        } 
        else { 
            text_encoded += c; 
        } 
        encoded_text += text_encoded + "\n"; 
         
    } 
    cout << "\nКодированный текст: \n\n" << text_encoded << std::endl; 
    return text_encoded; 
} 
 
string decodeCodeword(string encoded_text, char* ALPHABET_ENCODED) { 
    string decoded_text; 
    char ALPHABET_DECODED[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
 
    for (int i = 0; i < encoded_text.size(); i++) { 
        char c = encoded_text[i]; 
        bool found = false; 
        for (int j = 0; j < ALPHABET_SIZE; j++) { 
            if (toupper(c) == ALPHABET_ENCODED[j]) { 
                decoded_text += toupper(ALPHABET_DECODED[j]); 
                found = true; 
                break; 
            } 
        } 
        if (!found) { 
            decoded_text += c; 
        } 
         
    } 
    cout << "\nДекодированный текст: \n\n" << decoded_text << std::endl; 
    return decoded_text; 
} 