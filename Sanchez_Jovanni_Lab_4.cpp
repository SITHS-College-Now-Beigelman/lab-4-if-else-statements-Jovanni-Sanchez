// Jovanni Sanchez
// October 1, 2024
// Lab 4

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string fruitName; // The name of the user's fruit
    string request2Stop;
    double sugarContentPerCup; // In grams :)

    while (numOfLoops <= LOOP_LIMIT)
    {
        cout << "Please enter a fruit name: ";
        cin >> fruitName; // Get the name of the fruit, usefull for statements

        cout << "Please enter the grams of sugar in 1 cup of " << fruitName << ": ";
        cin >> sugarContentPerCup;

        if (sugarContentPerCup < 10)
        {
            cout << fruitName << " is a LOW SUGAR FRUIT." << endl;
            // If its less than 10, its a LOW SUGAR FRUIT
        }
        else if (sugarContentPerCup <= 10 || sugarContentPerCup <= 14)
        {
            cout << fruitName << " is a MEDIUM SUGAR FRUIT." << endl; 
            // if its between 10 and 14 grams, its a MEDIUM SUGAR FRUIT
        }
        else cout << fruitName << " is a HIGH SUGAR FRUIT." << endl; // If its neither its a HIGH SUGAR FRUIT

        numOfLoops++;
    }

    cout << "This program is done :)";

    return 0;
}