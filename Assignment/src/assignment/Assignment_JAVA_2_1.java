/*Assignments – Lab                                                                      
	Find square root of a number without sqrt method 
	Check Armstrong number 
	Calculate grades of students using their marks 
	Use switch case, recursion, print patterns, etc.
	Reverse a array without using predefined function.
	Sort an integer array.
*/


package assignment;

import java.util.Scanner;
import java.lang.Math.*;

class Assignment_JAVA_2_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number : ");
		double sqrt = Math.sqrt(sc.nextInt());
		System.out.println("Square root of number : "+sqrt);
	}

}
