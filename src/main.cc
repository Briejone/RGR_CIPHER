#include "UserInterface.h"
#include "Ciphers/cipher.h"

int main() {
    passInput();
    while(1) {

        // cout << "Выберите откуда считывается и куда выводится текст для шифровки/дешифровки";
        // cout << "1.Ввод из терминала, вывод в терминал\n";
        // cout << "2.Ввод из теринала, запись в файл\n";
        // cout << "3.Ввод из файла, вывод в терминал\n";
        // cout << "4.Ввод в файла, запись в файл\n";



        cout << "1 - шифровать\n2 - дешифровать\n";
        int en_de_crypt = 0;
        cin >> en_de_crypt;
        
        cout << "Выберите шифровку";
        cout << "1.Атбаш\n";
        cout << "2.Цезарь\n";
        cout << "3.Кодовым словом\n";
        cout << "4.Кронсфельд\n";
        cout << "5.Матричная\n";
        cout << "6.Скитала\n";
        cout << "7.Табличная\n";
        cout << "8.Тарабарская\n";
        cout << "9.Виженер\n";
        int crypt_num = 0;
        cin >> crypt_num;

        string text;
        getline(cin, text);

        
    }
}