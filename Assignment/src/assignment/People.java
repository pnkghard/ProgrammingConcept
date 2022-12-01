/*Assignments – Lab 
	Create Emp class with its suitable data members. Inherit People class and derive its properties in emp class. 
 * */
package assignment;

class People {
	long empid;
	String name;
	long cotc;
	public People(long empid, String name, long cotc) {
		super();
		this.empid = empid;
		this.name = name;
		this.cotc = cotc;
	}
	public void print() {
		System.out.format("%5s%22s%15s",empid, name, cotc);
	}
}