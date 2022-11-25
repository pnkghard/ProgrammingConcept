/* Assignments – Lab 1
 * 		Swap two numbers 
*/

package assignment;

import java.util.Scanner;
import java.util.*;

public class Assignment_JAVA_1_5 {
	
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter number 1 : ");
	int x = sc.nextInt();
	System.out.println("Enter number 2 :");
	int y =sc.nextInt();
	int temp = x;
	x = y;
	y = temp;
	System.out.println(x+":"+y);
	
}