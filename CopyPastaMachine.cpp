#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

void copyPasta(string input, string style, string insert){
    string output = "";
    if(style == "Spaced"){
        for(int unsigned i = 0; i < input.length(); i++){
            output += input.at(i) + " ";
        }
    }
    else if(style == "Backwards"){
        for(int unsigned i = 0; i < input.length(); i++){
            output += input.at(input.length()- 1 - i);
        }
    }
    else if(style == "Insert"){
        for(int unsigned i = 0; i < input.length(); i++){
            output += input.at(i) + insert;
        }
    }

    cout << output << endl;
}

int main(){
    string input;
    string style;
    string insert = "";

    cout << "Hello, welcome to the CopyPasta Machine." << endl;
    cout << "Please select the style: " << endl; 
    cout << "Spaced" << endl << "Backwards" << endl <<  "Insert" << endl;
    
    cin >> style;
    if(style == "Insert"){
        cout << "Input what character/string you want to be inserted: ";
        cin >> insert;
    }
    cout << "Please input what you want to be CopyPastafied: ";
    cin >> input;

    cout << "Running... " << endl;

    copyPasta(input, style, insert);
    return 0;

}