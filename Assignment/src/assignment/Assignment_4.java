/*Assignments – Lab  
 * Override finalize method to understand the behavior of JVM garbage collector 
 * */

package assignment;

class Assignment_4 {
	protected void finalize() throws Throwable {
        try { 
            System.out.println("start");
        }
        catch (Throwable e) {
            throw e;
        }
        finally { 
            System.out.println("finalize");
            super.finalize();
        }
    }
    public static void main(String[] args) throws Throwable {
    	Assignment_4 d = new Assignment_4();
        d.finalize();
    }

}