// PROBLEM //
Given a temperature in celsius C. The task is to convert and print in farenheit.

// CODE //

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
public static void main (String[] args) {
Scanner sc=new Scanner(System.in);
int t=sc.nextInt();
while(t-->0)
{
int c=sc.nextInt();
System.out.println((int)(c*1.8)+32);
}
}
}
