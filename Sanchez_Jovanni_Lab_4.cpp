// Jovanni Sanchez
// October 1, 2024
// Lab 4

#include <iostream>
#include <string>
using namespace std;

/* if Statements and Loops */

int main(){
    
    string fruitName; // The name of the user's fruit
    char request2Stop; // A character to control the loop
    double sugarContentPerCup; // In grams :)

    while (request2Stop != 'Y') // While request2Stop is NOT 'Y'
    { 
        cout << "Please enter a fruit name: ";
        cin >> fruitName; // Get the name of the fruit, usefull for statements

        cout << "Please enter the grams of sugar in 1 cup of " << fruitName << ": ";
        cin >> sugarContentPerCup; // Get the Sugar content

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

        cout << "Do you want to stop? (Y/N): ";
        cin >> request2Stop; // This controls the entire loop, if 'Y' the loop is over, else it keeps going
    }

    cout << "This program is done :D"; // Just to make sure its over

    return 0;
}

/* OUTPUT BELOW */

/*
Please enter a fruit name: Grapes
Please enter the grams of sugar in 1 cup of Grapes: 23.27
Grapes is a HIGH SUGAR FRUIT.
Do you want to stop? (Y/N): N
Please enter a fruit name: Avocado
Please enter the grams of sugar in 1 cup of Avocado: 0.99
Avocado is a LOW SUGAR FRUIT.
Do you want to stop? (Y/N): N
Please enter a fruit name: Strawberries
Please enter the grams of sugar in 1 cup of Strawberries: 7
Strawberries is a LOW SUGAR FRUIT.
Do you want to stop? (Y/N): N
Please enter a fruit name: Grapefruit
Please enter the grams of sugar in 1 cup of Grapefruit: 10.6
Grapefruit is a MEDIUM SUGAR FRUIT.
Do you want to stop? (Y/N): N
Please enter a fruit name: Orange
Please enter the grams of sugar in 1 cup of Orange: 14
Orange is a MEDIUM SUGAR FRUIT.
Do you want to stop? (Y/N): Y
This program is done :)
*/