/*Assignments – Lab  
	Create custom exception class for supporting validation rules in customer scenario. 
 * */

package assignment;

import java.util.Scanner;

class Assignment_3_1 {
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		try {
				int price = sc.nextInt();
				if(price<100) {
					throw LowPriceException("Amount Should be greater than 100");
				}
		}
		catch (LowPriceException ex) {			
		}
	}

	private static Exception LowPriceException(String string) {
		System.out.println(string);
		return null;
	}
}