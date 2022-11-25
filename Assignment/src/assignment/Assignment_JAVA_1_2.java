/*
Assignments – Lab 1                                                                      
	Add two numbers/binary numbers/characters Calculate compound interest
*/


package assignment;

import java.util.Scanner;

class Assignment_JAVA_1_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter two number : ");
		int num1 = sc.nextInt();
		int num2 = sc.nextInt();
		
		int add = num1 + num2;
		
		System.out.println("Addition of number : " + add);
	}
}
