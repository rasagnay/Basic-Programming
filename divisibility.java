// PROBLEM //
Given a number n, the task is to check if a number is divisible by 4 or not.
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
BigInteger number = sc.nextBigInteger();
BigInteger num = new BigInteger("4");
BigInteger rema;
rema = number.mod(num);
BigInteger num1 = new BigInteger("0");
int m = rema.compareTo(num1);
if(m==0)
System.out.println("1");
if(m != 0)
System.out.println("0");
}
}
}

