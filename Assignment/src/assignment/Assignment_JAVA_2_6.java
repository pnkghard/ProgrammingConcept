/*Assignments – Lab 2
 * Sort an integer array. 
*/

package assignment;

class Assignment_JAVA_2_6 {
	static int[] swap(int arr[], int i, int e) {
		int temp = arr[i];
		arr[i] = arr[e];
		arr[e] = temp;
		return arr;
	}

	public static void main(String[] args) {
		int[] arr = {3, 5, 1, 2, 7, 6};
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i]+"->");
		}
		System.out.println();
		for (int i = 0; i < arr.length-1; i++) {
			int temp = i;
			for (int j = i+1; j < arr.length; j++) {
				if(arr[temp]>arr[j]) {
					temp = j;
				}
			}
			arr = swap(arr, i, temp);
		}
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i]+"->");
		}
	}
}
