#include<iostream>
#include<cctype>
#include<iomanip>
#include<string>
using namespace std;
class Encryptor {
	int key;
	string givenWord;
	char *encryptedWord=nullptr;
	char* decryptedWord = nullptr;
	int sizeOfWord;
	char arrOfalpha[26] = { 'a','b','c','d', 'e','f', 'g','h', 'i','j', 'k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

public:
	
	void getEncrypteArray() {
		
		for (int i = 0; i < sizeOfWord; i++)
		{	
			for (int j = 0; j < 26; j++){
			
				if (toupper(givenWord[i]) == toupper(arrOfalpha[j])){
					encryptedWord[i] = (arrOfalpha[((j + key) % 26)]);
					break;
				}
			}
		}
	}
	void printEncryptedArray(){
		sizeOfWord = givenWord.length();
		encryptedWord = new char[sizeOfWord];
		getEncrypteArray();
		for (int i = 0; i < sizeOfWord; i++){
			cout << encryptedWord[i];
		}
	}
	void getDecryptedArray() {
		int y = 0;
		for (int i = 0; i < sizeOfWord; i++)
		{
			for (int j = 0; j < 26; j++) {

				if (toupper(givenWord[i]) == toupper(arrOfalpha[j])) {
					if ((j - key) < 0)
					{
						 y=(j - key) + 26;
					}
					else 
					{
						 y = ((j - key) % 26);
					}
					decryptedWord[i] = (arrOfalpha[y]);
					break;
				}
			}
		}
	}
	void printDecrytedArray()
	{
		sizeOfWord = givenWord.length();
		decryptedWord = new char[sizeOfWord];
		getDecryptedArray();
		for (int i = 0; i < sizeOfWord; i++) {
			cout << decryptedWord[i];
		}
	}
	Encryptor(string wrd="\0", int k = 0) {
		key = k;
		givenWord = wrd;
		
	}

	void setWord(string s) { givenWord = s; }
	void setkey(int k) { key = k; }

};
int  mainmenu();
int main(){
	int key=0;
	int choice=4;
	string word = "\0";
	Encryptor test;
	do {

		choice = mainmenu();
		switch (choice)
		{
			case(1):
			{
				cout << "Enter Key for encryption in intiger :";
				cin >> key;
				test.setkey(key);
				cout << "Enter word WITHOUT SPACE to encrypt :";
				cin >> word;
				test.setWord(word);
				cout << "Encrypted word for given key is : ";
				test.printEncryptedArray();
				cout<<endl;
			}
			break;
			case(2):
			{
				cout << "Enter Key to decrypt : ";
				cin >> key;
				test.setkey(key);
				cout << "Enter Word to decrypt : ";
				cin >> word;
				test.setWord(word);
				cout << "Decrypted word for given key is : ";
				test.printDecrytedArray();
				cout << endl;
			}
		}
		
	} while (choice != 0);
}
int mainmenu()
{
	int choice=4;
	
		cout << setfill('#') << setw(30) << "\n";
		cout << "Hello how are you \n";
		cout << "select one of the following\n";
		cout << "1.Encrytion\n";
		cout << "2.Decryption\n";
		cout << "0.Exit : ";
		cin >> choice;
		return choice;
		cout << setfill('#') << setw(30) << " \n";
	
}