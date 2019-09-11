//Quinton Negron
//This program takes a file and reads the content ,namely numbers,
//and reports a sum
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	//Declare what our sums will be
	//newsum is 0 to start our computations
    //seperate sum so as to not confuse the program
    int newsum = 0;
    int sum;
    {
        //Allows us to take inputs and put them into the sum
        while (cin >> sum)
        {
            //Sum is redelacred to have be easier to compute
            //Newsum is 0, then the value of sum is added continously
            //This allows the program to gather the sum of the numbers
            int x = sum;
            newsum = x + newsum;
        }
        cout << newsum << endl;
    }
return 0;
}
