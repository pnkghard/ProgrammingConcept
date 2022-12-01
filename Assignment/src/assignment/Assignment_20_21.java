/*Assignments – Lab 
  	Create Java Program for simple calculator, compile & test it. 
 * */

package assignment;

import java.util.Scanner;

class Assignment_20_21 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int ch = 0;
		System.out.println("=========== Calculator Main Menu ===========");
		while (ch!=5) {
			System.out.println("""
			================ 1. Additions =================
			================ 2. Subtraction ===============
			================ 3. Multiplication ============
			================ 4. Division ==================
			================ 5. Exit ======================
						Enter Choice as list : """);
			ch = sc.nextInt();
			System.out.println("Enter values : ");
			int a = sc.nextInt();
			int b = sc.nextInt();
			if(ch==1) {
				System.out.println(a+" + "+b+" = "+(a+b));
			} else if(ch==2) {
				System.out.println(a+" - "+b+" = "+(a-b));
			} else if(ch==3) {
				System.out.println(a+" x "+b+" = "+(a*b));
			} else if(ch==4) {
				System.out.println(a+" / "+b+" = "+(float)(a/b));
			} if(ch==5) {
				System.out.println("Thanks you! ...... Visit Again.......");
				break;
			} else {
				System.out.println("Enter choice is wrong....");
			}
		}
	}

}
