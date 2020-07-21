// PROGRAM //
Given a number, the task is to check if number is divisible by 5. 
The input number may be large and it may not be possible to store even if we use long long int.

// CODE //


import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

class GFG {
public static void main (String[] args) {

Scanner sc = new Scanner(System.in);
int t = sc.nextInt();
while(t--!=0)
{
BigInteger n = sc.nextBigInteger();
        if(n % 5 = 0 || n % 5 = 5)
        {
            System.out.println("1");
        }
        else
        {
            System.out.println("0" );
        }
    }
}
}

