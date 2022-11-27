/*Assignments – Lab 2
 * Reverse a array without using predefined function. 
*/


package assignment;

import java.util.Iterator;

class Assignment_JAVA_2_5 {

	public static void main(String[] args) {
		int[] arr = {1, 2, 3, 4, 5, 6, 7};
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i]+"->");
		}
		int mid = arr.length/2;
		for (int i = 0; i < mid; i++) {
			int temp = arr[i];
			arr[i] = arr[6-i];
			arr[6-i] = temp;
		}
		System.out.println();
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i]+"->");
		}
	}

}
