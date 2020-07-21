// PROBLEM //
Write a program to check whether a number is strong or not. 
A number is called strong number if sum of the factorial of its digit is equal to number itself. 
For example: 145 as 1! + 4! + 5! = 1 + 24 + 120 = 145

// CODE //

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static int fact(int a){
        
        
        if(a==0)
            return 1;
        else
            return(a*fact(a-1));
        
    }
	public static void main (String[] args) {
	    Scanner sc= new Scanner(System.in);
	    int t= sc.nextInt();
	    while(t>0){
	        int n= sc.nextInt();
	        int temp= n;
	        int strongsum=0;
	        while(temp>0){
	            int a=temp%10;
	            strongsum += fact(a); 
	            temp=temp/10;
	        }
	        System.out.println(strongsum==n?"Strong":"Not Strong");
	        
	        
	        
	        t--;
	    }
		
	}
}
