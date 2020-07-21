// PROBLEM //
Given three distinct numbers, find the number with value in middle (Try to do it with minimum comparisons).

// CODE //

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) 
	{

Scanner sc = new Scanner(System.in);
int t = sc.nextInt();
while(t--!=0)
{
int a = sc.nextInt();
int b = sc.nextInt();
int c = sc.nextInt();
int []z = new int[3];
z[0] = a;
z[1] = b;
z[2] = c;
Arrays.sort(z);
System.out.println(z[1]);
}
}
}
