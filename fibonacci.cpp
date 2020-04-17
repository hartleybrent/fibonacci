// Fibonacci by Brent Hartley //
// MIT license //

// Caculates the fibonacci number sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. //
// Or, caculates one single user-defined number (nth term) in the sequence.
// Or, caculates a 'slice' of the sequence. //

#include<iostream>

using namespace std;

void calcFib() // Function does the caculation of the fibonacci sequence up until the user selected limit. //
    {
        long double F1 = 0, F2 = 1, nextNum = 0;
        cout <<"Please enter the number of terms to caculate :";
        cout <<" " <<endl;
        int Limit = 0;
        cin >> Limit;
        cout <<"Fibonacci series up to the " <<Limit <<"th term :" <<endl;
        for (int i = 1; i <= Limit + 1; ++i)
        {
            if(i == 1)
            {
                cout << ", " <<F1;
                continue;
            }
            if(i == 2)
            {
                cout <<F2 << " ,";
                continue;
            }
            nextNum = (F1 + F2);
            F1 = F2;
            F2 = nextNum;
            cout <<nextNum <<" ,";
        }
        cout <<" End." <<endl;
    }
void calcNth() // Function that caculates the nth digit in the sequence. //
    {
        long double F1 = 0, F2 = 1, nextNum = 0;
        cout <<"Enter the digit of the sequence you'd like to caculate :" <<endl;
        int Digit = 0;
        cin >> Digit;
        for (int i = 1; i <= Digit-1; ++i)
            {
                nextNum = (F1 + F2);
                F1 = F2;
                F2 = nextNum;
            }
        cout <<"The " <<Digit <<"th digit of the sequence is : " <<nextNum <<endl;
    }
void calcSlice() // Function that caculates a slice of the sequence. //
    {
        long double F1 = 0, F2 = 1, nextNum = 0;
        cout<<"Enter the range of the sequence you'd like to caculate. e.g. 1-5 outputs 1,1,2,3,5." <<endl;
        int low;
        int high;
        cin >> low;
        cin >> high;
        cout <<"The sequence slice between " <<low <<" and " <<high <<" is: " <<endl;
        if (low ==1)
        {
            cout <<"1, ";
        }
        for (int i = low; i <= high; ++i)
            {
                nextNum =(F1 + F2);
                F1 = F2;
                F2 = nextNum;
                cout <<nextNum <<" ,";
            }
    }
int main() // Program main function. //
    {
        char Repeat = 'y';
        int UserSelection = 0;
            do
            {
                if (UserSelection == 0)
                {
                    cout <<"You can caculate the fibonacci sequence to the nth digit(1), you can caculate the nth number of the sequence(2)" <<endl;
                    cout <<"or you can calculate a specific slice of the sequence(3)." <<endl;
                    cout<<" " <<endl;
                    cout <<"Please make your selection. 1, 2, or 3 :" <<endl;
                    cin >> UserSelection;
                }
                if (UserSelection == 1)
                {   
                    calcFib();
                }
                if (UserSelection == 2)
                {
                    calcNth();
                }
                if (UserSelection ==3)
                {
                    calcSlice();
                }
                cout <<"Would you like to run the program again? (y) or (n) :";
                cin >> Repeat;
                UserSelection = 0;
            }
            while (Repeat == 'y');
        cout <<"Exiting..." <<endl;
        return 0;
    }

