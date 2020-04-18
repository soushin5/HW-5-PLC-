public class PLCHw5_1 {
	public String[] bears = new String[4];
	public String[] bare = new String[4];
	
	public void foo() {
		if(bare == bears) {
			bears = bare;
		}
	}
}
