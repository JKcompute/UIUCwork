//
//  primality.c
//  find primes
//
//  Created by Johnathon Karcz on 2/25/14.
//  Copyright (c) 2014 Johnathon Karcz. All rights reserved.
//
// this program was a test question from my Spring 2014
// Midterm 1 exam.  I did not get a chance to get to it on
// the exam.  The timing notes are a refrence to keep track
// of how much time this might take for future exams.

#include <stdio.h>

    int y; // number to be checked
    int x = 2; // starting poing for factors
    int mod; // used to hold modulus value
    int flag = 1; // used to indicate if we have a prime

int main()
{
    do {
    //ask for input
    printf("Enter a number that you would like to check it's primality.\n");
    scanf("%d",&y);
    //check the input for validity.  if bad, let them know and ask again
        if(y<=1)
        {
        printf("sorry that number is invalid.\n\n");
        }
    }
    while(y<=1);

    //here is where we check for the actual prime.
    for(x=2;x<y;x++){
        mod = y%x;
        if(mod == 0){
            flag = 0; //results are stored in a flag.
            break;
        }
    }
    //flag of zero prints factor information
    if(flag==0)
        printf("%d is a factor of %d\n", y, x);
    //flag of one prints prime message.
    else
        printf("%d is a prime\n", y);
    
        return 0;
    }

/*
 This program took me 21 minutes to write after figuring
 out algorithm.  algorithm took about 3-5 min to figure out.
 Then an additional 8 minutes to add scanf user input, and 
 error detection for numbers lower than 1.
 Additional 8 minutes to change the error protection to 
 a do-while loop in order to not kick user out of program 
 for bad input.
 */