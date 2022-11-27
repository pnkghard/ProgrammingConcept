/*Assignments – Lab 2
 * Use switch case, recursion, print patterns, etc. 
*/

package assignment;

import java.util.Scanner;

public class Asignment_JAVA_2_4 {
	static void pattern_1(int n) {
		for(int i=0; i<n; i++) {
			for(int j=n-i; j>=0; j--) {
				System.out.print(" ");
			}
			for(int j=0; j<=i; j++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}
	static void pattern_2(int n) {
		for(int i=0; i<n; i++) {
			for(int j=n-i; j>0; j--) {
				System.out.print("*");
			}		
			System.out.println();
		}
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter choice : ");
		int ch = sc.nextInt();
		switch(ch) {
			case 1:	pattern_1(5);
					break;
			case 2: pattern_2(5);
					break;
			case 3: pattern_1(5);
					pattern_2(5);
					break;
			case 4: pattern_2(5);
					pattern_1(5);
					break;
			default: System.out.println("no pattern to print.");
					break;
			
		}
	}
}
