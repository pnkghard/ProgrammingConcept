/*Assignments – Lab 2
	Calculate grades of students using their marks 
*/

package assignment;

import java.util.Scanner;

class Asignment_JAVA_2_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter marks : ");
		int marks = sc.nextInt();
		System.out.println("Grade : ");
		if(marks<40) {
			System.out.println("Fail");
		} else if(marks>=40 && marks<60) {
			System.out.println("Second");
		} else if (marks>=60 && marks<80) {
			System.out.println("First");
		} else {
			System.out.println("First class with distinction");
		}
	}
}
