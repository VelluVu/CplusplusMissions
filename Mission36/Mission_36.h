#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Writable {

public:

	virtual void WriteState(char *filename) = 0;

};

class Readable {

public:

	virtual void ReadState(char *filename) = 0;

};

class MyClass : Writable,Readable {

private:

	char* _fileName;
	char* _tekstia;
	int _numero;


public:

	char* GetFileName() {

		return _fileName;

	}

	char* GetText() {

		return _tekstia;

	}

	int GetNumero() {

		return _numero;

	}

	void WriteState(char *filename) {
		ofstream myfile(filename);
		if (myfile.is_open()) {
			myfile << _tekstia << " " << _numero << endl;
			myfile.close();
		}
		else {
			cout << "Eipä oo auki nyt tää tiedosto..." << endl;		
		}
	}

	void ReadState(char *filename) {
		string line;
		ifstream myfile(filename);
		if (myfile.is_open()) {
			while (getline(myfile, line)) {
				cout << line << endl;
			}
			myfile.close();
		}
		else {
			cout << "Eipä oo auki nyt tää tiedosto..." << endl;		
		}
	}

	MyClass(char* fileName, char* tekstia, int numero) {
		_fileName = fileName;
		_tekstia = tekstia;
		_numero = numero;
	}
	~MyClass() {}
};