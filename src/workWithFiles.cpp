#include "workWithFiles.h"

string textInput() {
	cout << "¬ведите текст с клавиатуры. ƒл€ выхода нажмите TAB:" << endl;
	string text = "";
	char symbs[10000];
	int i = 0;
	do {
		symbs[i] = _getch();
		if (symbs[i] == 13)
			symbs[i] = '\n';
		cout << symbs[i];
		i++;
	} while (symbs[i - 1] != 9);
	cout << endl;
	for (int j = 0; j < i; j++) {
		text += symbs[j];
	}
	return text;
}

void createFile() {
	ofstream fout;
	string fileName;
	cout << "¬ведите им€ файла: ";
	cin >> fileName;
	fout.open(fileName + ".txt");
	fout.close();
}

void textToFile() {
	ofstream fout;
	string fileName;
	cout << "¬ведите им€ файла: ";
	cin >> fileName;
	fout.open(fileName + ".txt");
	fout << textInput();
	fout.close();
}

void textFromFile() {
	ifstream fin;
	string fileName;
	cout << "¬ведите им€ файла: ";
	cin >> fileName;
	getline(fin,);
}

void clearFile() {

}