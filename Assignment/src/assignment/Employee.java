package assignment;

class Employee {

	public static void main(String[] args) {
		EmployeeTest emp = new EmployeeTest(123, "Pankaj", 1234567891, "HPCAP", 14);
		System.out.printf("%5s%22s%15s%12s%10s\n", "-----", "--------------------", "-----------", "----------", "-----");
		System.out.printf("%5s%22s%15s%12s%10s\n", "EmpID", "Name", "Contact", "Course", "Marks");
		System.out.printf("%5s%22s%15s%12s%10s\n", "-----", "--------------------", "-----------", "----------", "-----");
		emp.print();
		System.out.printf("\n%5s%22s%15s%12s%10s", "-----", "--------------------", "-----------", "----------", "-----");
	}

}

class EmployeeTest extends People {
	String crs;
	int marks;
	public EmployeeTest(long empid, String name, long cotc, String crs, int marks) {
		super(empid, name, cotc);
		this.crs = crs;
		this.marks = marks;
	}
	@Override
	public void print() {
		System.out.println();
		super.print();
		System.out.format("%12s%10s", crs, marks);
	}
	
}
