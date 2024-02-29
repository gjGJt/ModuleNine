     #include <iostream>
       using namespace std;

// Function declaration

     void discount();
    void noDiscount();

     int main() {
    char preregistered;
    
    cout << "Did you preregister? Enter Y or N: ";
    cin >> preregistered;
    
    if(preregistered == 'Y'  || preregistered == 'y') {
        discount();
    } else if(preregistered == 'N' || preregistered == 'n') {
        noDiscount();
    } else {
        cout << "Invalid input. Please enter Y or N." << endl;
    }
    
    return 0;
    }

// Function definition for discount

               void discount() {
    cout << "You are pre-registered and qualify for a 5% discount." << endl;
    }

// Function definition for noDiscount

     void noDiscount() {
    cout << "Sorry, you did not pre-register and do not qualify for a 5% discount." << endl;
     }

