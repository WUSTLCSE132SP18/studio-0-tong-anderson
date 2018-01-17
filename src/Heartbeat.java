
public class Heartbeat {

	public static void main(String[] args) {
		
		double time = 0;
		
		while(time < 100) {
			try {
				Thread.sleep(1000);
				System.out.println(time);
				time++;
			}
			catch(InterruptedException e) {
				e.printStackTrace();
			}
		}
		
	}

}
