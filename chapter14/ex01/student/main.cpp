#include <iostream>
#include <iomanip> // For setprecision
#include <limits>  // For numeric_limits
using namespace std;

// Function to convert feet and inches to centimeters
double convertToCentimeters(double feet, double inches) {
    const double INCHES_TO_CM = 2.54;
    const double FEET_TO_INCHES = 12.0;
    double totalInches = feet * FEET_TO_INCHES + inches;
    return totalInches * INCHES_TO_CM;
}

int main() {
    double feet, inches;
    bool validInput = false;

    while (!validInput) {
        try {
            // Prompt for feet
            cout << "Enter length in feet: ";
            cin >> feet;

            // Check for invalid input (non-digit or negative)
            if (cin.fail() || feet < 0) {
                cin.clear(); // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                throw runtime_error("A non positive number is entered");
            }

            // Prompt for inches
            cout << "Enter length in inches: ";
            cin >> inches;

            // Check for invalid input (non-digit or negative)
            if (cin.fail() || inches < 0) {
                cin.clear(); // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                throw runtime_error("A non positive number is entered");
            }

            // If input is valid, calculate and display the result
            double centimeters = convertToCentimeters(feet, inches);
            cout << fixed << setprecision(2); // Format output to 2 decimal places
            cout << "The equivalent length in centimeters is: " << centimeters << " cm" << endl;

            validInput = true; // Exit the loop
        } catch (const runtime_error& e) {
            // Handle the exception and display the error message
            cout << e.what() << ". Please try again." << endl;
        }
    }

    return 0;
}