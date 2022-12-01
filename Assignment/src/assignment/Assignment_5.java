/*Assignments – Lab                                                                      
	Apply multi-threading techniques to File handling & ensure thread safety. 
	Using thread safe vs thread unsafe collections.  
 * */

package assignment;

class Assignment_5 {
	    public static void main(String[] args) {
	        B b = new B();
	        Thread t1 = new Thread(b);
	        Thread t2 = new Thread(b);
	        t1.setName("Thread A");
	        t2.setName("Thread B");
	        t1.start();
	        t2.start();
	    }	
}
class A {
    synchronized void sum(int n){
        Thread t = Thread.currentThread();
        for (int i = 1; i <= 5; i++) {
            System.out.println(
                t.getName() + " : " + (n + i));
        }
    }
}
class B extends Thread {
    A a = new A();
    public void run() {
        a.sum(10);
    }
}
