/*Assignments – Lab 2
 * Check Armstrong number 
*/


package assignment;
import java.lang.Math.*;
import java.util.Scanner;
class Assignment_JAVA_2_2 {
	
	static int amgNumber(int num, int rem) {
		if(num==0) {
			return rem;
		}
		rem = (int)Math.pow((num%10),3);
		num = num/10;
		return rem + amgNumber(num, rem);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Number : ");
		int num = sc.nextInt();
		int n = amgNumber(num, 0)-1;
		System.out.println(n);
		if(num==n) {			
			System.out.println("Amngstringm Number");
		} else {
			System.out.println("No amngstrong number");
		}
	}

}
