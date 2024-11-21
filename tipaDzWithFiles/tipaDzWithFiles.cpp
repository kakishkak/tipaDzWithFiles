#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class Text {
    string text;
public:
    Text() {
        text = "AAAAAAAAALorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    }

    void setText(string name) {    //
        this->text = name;         //
    }                              //
                                   //Аксесоры
    string getText() {             //
        return this->text;         //
    }                              //

    void WriteText() {                                 //
        ofstream outFile("users.txt", ios::app);       //Запись
        outFile << this->text << endl;                 //
        outFile.close();                               //
    }

    void ReadText() {                                      //
                                                           //
        ifstream inFile("users.txt");                      //
        string line;                                       //
        while (getline(inFile, line)) {                    //
            for (char& chekingLol : line) {                //
                if (chekingLol == 'A') {                   //Чтение
                    chekingLol = 'X';                      //
                }                                          //
            }                                              //
            cout << line;                                  //
        }                                                  //
        inFile.close();                                    //
    }                                                      //
};
int main()
{

    Text obj;
    obj.WriteText();
    obj.ReadText();
}