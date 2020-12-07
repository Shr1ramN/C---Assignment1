#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "How many small rooms would you like cleaned? : ";
   int small_rooms_to_be_cleaned; //number
    cin >> small_rooms_to_be_cleaned;
    cout << "How many large rooms would you like cleaned? : ";
   int large_rooms_to_be_cleaned; //number
    cin >> large_rooms_to_be_cleaned;

    cout << "----------------------------------------------" << endl;

    
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms_to_be_cleaned << endl;
    cout << "Number of large rooms: " << large_rooms_to_be_cleaned << endl;
    
    int price_small_Room (25);
    cout << "Price per small rooms: $" << price_small_Room << endl;

    int price_large_Room (35);
    cout << "Price per large rooms: $" <<price_large_Room << endl;
    
    cout << "Cost: $" << (small_rooms_to_be_cleaned * 25) + (large_rooms_to_be_cleaned * 35) <<endl;
    
    double sales_tax (0.06);
    cout << "Tax: $" << sales_tax << endl;

    cout << "==============================================" << endl;
    
    cout << "Total Estimate: $" << ( (small_rooms_to_be_cleaned * 25)+(large_rooms_to_be_cleaned * 35) ) + ( (small_rooms_to_be_cleaned * price_small_Room + large_rooms_to_be_cleaned * price_large_Room) * sales_tax  ) << endl; //formula must be made small


    cout << "This Estimate is valid for 30 days." << endl;
    cout << "Thank you! Visit Again." <<endl;
    
    return 0;


}