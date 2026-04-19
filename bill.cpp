#include <iostream>
using namespace std;

// prototype for bill calculator functions 
void displayOptions();
float member_billCalc(float a, float b);  
float non_billCalc2(float a, float b, float c);


int main()
{
    int memberVerif; // variable member verification
    
    
    do {
        
        displayOptions();
        cin >> memberVerif; 
        float service, test, medicine;
        
        switch (memberVerif) {
            
            case 1:
                member_billCalc(service, test);
                break;
            case 2: 
                non_billCalc2(service, test, medicine);
                break;
            case 0:
                cout << "\nFarewell\n" << endl;
                break;
            default:
                cout << "\nInvalid try again\n" << endl;
                continue;
        }
    }while(memberVerif > 0 || memberVerif >= 2 || memberVerif < 0);
    
}

void displayOptions(){
    cout << "Please select one of the following ootions\n";
    cout << "---------------------------------------\n";
    cout << "1 - Calculate the bill for members of Dental Plan" << endl;
    cout << "2 - Calculate the bill for non-members of Dental Plan" << endl;
    cout << "0 - Exit." << endl;
    cout << "Your Selection: ";
    
}
// display/input of the charges and total calculations for members 

float member_billCalc(float a, float b)
{
    float total;
    cout << "Please input the service charges\n";
    cin >> a; 
    cout << "Please input the test charges\n";
    cin >> b;
    total = a + b;
    cout << "The total bill is $" << total << endl;
    return 0;
    
}

// display/input of the charges and total calculations for non-members

float non_billCalc2(float a, float b, float c)
{
    float total;
    cout << "Please input the service charges\n";
    cin >> a; 
    cout << "Please input the test charges\n";
    cin >> b;
    cout << "Please input the medicine charges\n";
    cin >> c;
    total = a + b + c;
    cout << "The total bill is $" << total << endl;
    return 0;
}
