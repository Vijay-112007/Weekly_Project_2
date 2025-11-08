#include<iostream>
using namespace std;
void displayOptions(int (&layout)[10][10]);
char* bookTicket(int (&layout)[10][10],int number);
char* bookRow(int (&layout)[10][10],int row_number);
void availableSeats(int (&layout)[10][10]);
int main(){
    //this is a project whihc is cinema booking system
    //first we will display options for the user
    /*
    The options are
    1. View Seat Layout
    2. Book Single Seat
    3. Book Entire Row
    4. Display Available Seats
    5. Exit
    Note : Cancelling of seats wont be there in cinema tickets thing so we will ig that
    */
   int rows  = 10,columns = 10;
   //we had declared the number of seats in terms of rows and columns
   int arr[10][10];
   int choice;
   //upto here we had declared the seat lay out
   //now we will provide the options for the user
   cout << "1. View Seat Layout \n2. Book Single Seat\n3. Book Multiple Seats\n4. Display Available Seats\n5. Exit\nEnter Your Choice:" << " ";
   cin >> choice;
   while(choice != 5){
    switch (choice)
    {
        case 1:
        {
            displayOptions(arr);
            cout << "1. View Seat Layout \n2. Book Single Seat\n3. Book Multiple Seats\n4. Display Available Seats\n5. Exit\nEnter Your Choice:" << " ";
            cin >> choice;
            break;
        }
        case 2:
        {//first display the avaiable seats before booking
            availableSeats(arr);
            cout << "Enter Your Seat Number:" << " ";
            int seat;
            cin >> seat;
            char* message = bookTicket(arr,seat);
            cout << (message) << endl;
            cout << "1. View Seat Layout \n2. Book Single Seat\n3. Book Multiple Seats\n4. Display Available Seats\n5. Exit\nEnter Your Choice:" << " ";
            cin >> choice;
            break;
        }
        case 3:
        {//first display the avaiable seats before booking
            availableSeats(arr);
            int row_number;
            cout << "Enter the Row Number to Book:" << " ";
            cin >> row_number;
            char*message = bookRow(arr,row_number);
            cout << (message) << endl;
            cout << "1. View Seat Layout \n2. Book Single Seat\n3. Book Multiple Seats\n4. Display Available Seats\n5. Exit\nEnter Your Choice:" << " ";
            cin >> choice;
            break;
        }
        case 4:
        //displaying the available seats
        {
            displayOptions(arr);
            cout << "1. View Seat Layout \n2. Book Single Seat\n3. Book Multiple Seats\n4. Display Available Seats\n5. Exit\nEnter Your Choice:" << " ";
            cin >> choice;
            break;
        }
        case 5:
        {
            cout << "Thank You for Utilizing the Services" << endl;
            break;
        }
        default:
        {
            cout << "Enter a Valid Choice" << endl;
            cout << "1. View Seat Layout \n2. Book Single Seat\n3. Book Multiple Seats\n4. Display Available Seats\n5. Exit\nEnter Your Choice:" << " ";
            cin >> choice;
            break;
        }
    }
    if(choice == 5){
        break;
    }
   }
   //this is upto the designing
   return 0;
}