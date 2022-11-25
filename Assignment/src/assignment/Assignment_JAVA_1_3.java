/*
Assignments – Lab 1                                                                      
	Calculate compound interest
*/

package assignment;

import java.util.Scanner;
import java.lang.Math;

class Assignment_JAVA_1_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Entre principle amount : ");
		int p = sc.nextInt();
		System.out.println("Entre rate interest : ");
		int r = sc.nextInt();
		System.out.println("Entre time : ");
		int t = sc.nextInt();
		
		double cr = (1 + (r/100));
		
		double ci = p*Math.pow(cr, t);
		
		System.out.println("Comppund Interse : " + ci);
	}
}
