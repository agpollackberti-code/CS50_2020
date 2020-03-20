#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //get and shape user input
    float changeOwed;
    do
    {
        changeOwed = get_float("Change owed: ");
    }
    while(changeOwed <= 0 || changeOwed > 99);    
    
    int intOwed = round(changeOwed * 100);

    //initialize counters
    int remainingAmount = intOwed; 
    int coinCounter = 0;

    if(remainingAmount >=25)
        {
        do
        {
            remainingAmount = (remainingAmount-25);
            coinCounter++;
        }   
        while  (remainingAmount >=25);
        }

    if(remainingAmount >=10)
        {
        do
        {
            remainingAmount = (remainingAmount-10);
            coinCounter++;
        }
        while  (remainingAmount >=10);
        }
    
    if(remainingAmount >= 5)
    {
        do
        {
            remainingAmount = (remainingAmount-5);
            coinCounter++;
        }
        while  (remainingAmount >=5);
    }

    if(remainingAmount >=1 )
    {
        do
        {
            remainingAmount = (remainingAmount-1);
            coinCounter++;
        }
        while  (remainingAmount >=1);
    }

    printf("%i \n", coinCounter);

    

    
    //is it greater than 25?  Then subtract 25 and increment counter up by 1
    //is it less than 25, then do 10
    //is it less then 10?, then do 5
    //is it less than 5, then do 1 until it = 0
    //return counter value 

    //printf to output answer
    //output should be total # of coins, in an int followed by \n

}
