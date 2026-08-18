#include <iostream>
#include <string>
using namespace std;

class TicketChecker;  

class TrainSeat
{
private:
    int SeatNumber;
    string PassengerName;
    bool BookingStatus;

public:
    TrainSeat(int seat, string name, bool status)
    {
        SeatNumber = seat;
        PassengerName = name;
        BookingStatus = status;
    }

    // Declare TicketChecker as a friend class
    friend class TicketChecker;
};

class TicketChecker
{
public:
    void displaySeatDetails(TrainSeat s)
    {
        cout << "\n--- Train Seat Details ---" << endl;
        cout << "Seat Number: " << s.SeatNumber << endl;

        if (s.BookingStatus)
        {
            cout << "Booking Status: Booked" << endl;
            cout << "Passenger Name: " << s.PassengerName << endl;
        }
        else
        {
            cout << "Booking Status: Available" << endl;
        }
    }
};

int main()
{
    int seat;
    string name;
    bool status;

    cout << "Enter Seat Number: ";
    cin >> seat;

    cout << "Enter Passenger Name: ";
    cin >> name;

    cout << "Enter Booking Status (1 for Booked, 0 for Available): ";
    cin >> status;

    TrainSeat s(seat, name, status);

    TicketChecker checker;
    checker.displaySeatDetails(s);

    return 0;
}