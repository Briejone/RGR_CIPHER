#include "UserInterface.h"

void passInput() {
  const string password = "1234";
  string pass;
  cin >> pass;
  if (pass == password) {
    cout << "Верный пароль. Вы вошли в систему" << endl;
  }
  else {
    cout << "Неверный пароль. Попробуйте еще раз" << endl;
    passInput();
  }
}

string textInput() {
//  SetConsoleCP(1251);
  cout << "Введите текст с клавиатуры. Для окончания ввода нажмите Tab + Enter" << endl;
  string text;
  cin.ignore();
  getline(cin, text, char(9));
  return text;
}

void textToFile(string text) {
  cout << "Введите имя файла" << endl;
  string fileName;
  cin >> fileName;
  ofstream fout;
  fout.open("texts/" + fileName + ".txt");
  fout << text;
  fout.close();
}

string fileToText() {
  string fileName;
  cout << "Введите имя файла" << endl;
  string text;
  cin >> fileName;
  ifstream fin;
  fin.open("texts/" + fileName + ".txt");
  while (!fin.eof()) {
    string a;
    getline(fin, a);
    text += a;
    text += '\n';
  }
  fin.close();
  return text;
}

string encryption_menu(int cipherNum, string text) {
  string result;
  int key;
  char key_char_word [100];
  float key_f = 0;
  string key_word;

  switch (cipherNum) {
  case 1:
    result = encodeAtbash(text);
    break;
  case 2: 
    cout << "Введите cдвиг";
    cin >> key;
    result = encryptCaesar(text, key);
    break;
  case 3:

    cout << "введите кодовое слово";
    scanf("%s", key_char_word);
    result = encodeCodeword(text, key_char_word);
    break;
  case 4:
    cout << "Введите cдвиг";
    cin >> key;
    result = encodeGronsfeld(text, key);
    break;
  case 5:
    result = encodeMatrix(text);
    break;
  case 6:
    
    cout << "Введите диаметр";
    cin >> key_f;
    result = encodeSkitala(text, key_f);
    break;
  case 7:
    getline(cin, key_word);

    result = encryptTable(text, key_word);
    break;
  case 8:
    result = encodeTarabar(text);
  case 9:
    int tableArr[26][26];
    createVigenereTable();
  default:
    cout << "введите число от 1 до 9";
    break;
  }
  return result;
}

string decryption_menu(int cipherNum,string text) {
  string result;
  int key;
  char key_char_word [100];
  float key_f = 0;
  string key_word;

  switch (cipherNum) {
  case 1:
    result = decodeAtbash(text);
    break;
  case 2: 
    cout << "Введите cдвиг";
    cin >> key;
    result = decryptCaesar(text, key);
    break;
  case 3:

    cout << "введите кодовое слово";
    scanf("%s", key_char_word);
    result = decodeCodeword(text, key_char_word);
    break;
  case 4:
    cout << "Введите cдвиг";
    cin >> key;
    result = decodeGronsfeld(text, key);
    break;
  case 5:
    result = decodeMatrix(text);
    break;
  case 6:
    
    cout << "Введите диаметр";
    cin >> key_f;
    result = decodeSkitala(text, key_f);
    break;
  case 7:
    cout << "Введите ключевое слова";
    getline(cin, key_word);

    result = decryptTable(text, key_word);
    break;
  case 8:
    result = decodeTarabar(text);
  case 9:
    cout << "Введите ключевое слова";
    getline(cin, key_word);
    decodeVizhiner(text, key_word);
  default: 
    cout << "введите число от 1 до 9";
    break;
  }
  return result;
}
string en_de_cryption_menu(int i, int cipherNum, string text) {
  string result;
  switch (i)
  {
  case 1:
    result = encryption_menu(cipherNum, text);
    break;
  case 2:
    result = decryption_menu(cipherNum,text);
  default:
    exit(1);
    break;
  }
  return result;
}

