#include <iostream>
#include <string>
#include <vector>

using namespace std;

//edits the values of the inputted characters
char translateChar(char varied, const vector<char>&code){
    //changes the values of capital letters according to the cypher wanted
    if (varied >= 65 && varied <= 90){
        return code[varied-65];
    }
    //ensures that lowercase letters are lowercase letters
    else if (varied >= 97 && varied <= 122){
        char capitalLetter = varied - 32;
        char capitalCode = code[capitalLetter - 65];
        return capitalCode + 32;
    }
    //returns the same value for anything that is not a letter (spaces, ., ect.)
    else{
        return varied;
    }
}

int main() {
    cout << "Enter text to cypher: ";
    //sets up our cypher array to pull from later
    vector <char>code = { 'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E' };
    string text;
    //requests the user input for a line of text
    getline(cin, text);
    string result = "";
    //initializes the reordering cypher structure above
    for (size_t i = 0; i < text.length(); i++){
        result += translateChar(text[i], code);
    }
    cout << "Your encoded message: " << result << endl;
}