#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    //You need to set up variables for how many ounces each size cups holds
    //A constant variable is one which will never change throughout a program
    const int smallOunces = 15;
    const int mediumOunces = 12;
    const int largeOunces = 9;

    //You need to set up a Variable for every cup size to hold the cost for each size.
    double small = 1.75;
    double medium = 1.90;
    double large = 2.00;

    //Now you need to set up a Variable for the user to input how many cups of each size they bought
    double countSmall = 0;
    double countMedium = 0;
    double countLarge = 0;

    //We will make variables to do all the math and store the values for totals.
    double totalCupsSold = 0;
    double totalOuncesSold = 0;
    //Total price has to be a double because an integer does not have a decimal EX: 1.111
    double totalPrice = 0;

    //We need to make variables to store the percentages of cups sold for every size
    double smallPercent = 0;
    double mediumPercent = 0;
    double largePercent = 0;


    //Ask the User how many cups of each size they bought
    cout << "\n--------------------------------------------------------\n";
    cout << "Enter the number of Large cups sold: ";
    //This next line will store whatever the user enters into the variable we created
    cin >> countLarge;
    cout << "Enter the number of Medium cups sold: ";
    cin >> countMedium;
    cout << "Enter the number of Small cups sold: ";
    cin >> countSmall;

    //After we have all the counts in, we must do the math to total all the cups sold
    totalCupsSold = countLarge + countMedium + countSmall;

    //Now lets calculate total ounces sold. This is done by cup count for each size multiplied by cup ounce for each size. all added
    totalOuncesSold = (countLarge * largeOunces) + (countMedium * mediumOunces) + (countSmall * smallOunces);

    //Now lets calculate total price for all cups sold. We multiple price for each size cup by how many of each size sup sold. then add
    totalPrice = (countLarge * large) + (countMedium * medium) + (countSmall * small);

    //To find percent of cups sold for each size we divide cups sold for each size by total cups sold then multiple that by 100.
    largePercent = countLarge / totalCupsSold * 100;
    mediumPercent = countMedium / totalCupsSold * 100;
    smallPercent = countSmall / totalCupsSold * 100;

    //Now we output all the information we just calculated to the console. The "\n" just makes a new line at end of sentence.
    cout << "\n--------------------------------------------------------\n";
    cout << "Total cups sold: " << totalCupsSold << "\n";
    cout << "Total ounces sold: " << totalOuncesSold << "\n";
    //The setprecision command makes it so 2 values in a number are shown, the fixed command makes it 2 values after the decimal.
    cout << setprecision(2) << fixed << "Total sales: $" << totalPrice << "\n";

    //Now we must output to the console total percent of cups sold for each size
    cout << "\n--------------------------------------------------------\n";
    cout << "Percent of total cups sold:\n";    //\n Is like hitting enter, it goes to the next line
    cout << setprecision(2) << fixed << "Large: " << largePercent << "%\n";
    cout << setprecision(2) << fixed << "Medium: " << mediumPercent << "%\n";
    cout << setprecision(2) << fixed << "Small: " << smallPercent << "%\n";

    return 0;
}
