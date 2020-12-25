import java.io.*;
import java.util.*;

public class Main {
	static final Reader in = new Reader();
	static final PrintWriter out = new PrintWriter(System.out);

	public static void main(String[] args) {
//		int t=in.nextInt();
		int t=1;
		for(int i=1; i<=t; ++i)
			new Solver();
		out.close();
	}
	
	static class Solver {
		Solver() {
			int n=in.nextInt(), cnt=0;
			for(int i=1; i<=n; ++i)
				if(!chk(i)&&!chk(octal(i)))
					cnt++;
			out.println(cnt);
		}
		boolean chk(int n) {
			while(n>0) {
				if(n%10==7)
					return true;
				n/=10;
			}
			return false;
		}
		int octal(int n) {
			int d=0;
			while(n>0) {
				d=10*d+(n%8);
				n/=8;
			}
			return d;
 		}
	}
	
	static class Reader {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		String next() {
			while(st==null||!st.hasMoreTokens()) {
				try {
					st=new StringTokenizer(in.readLine());
				} catch(Exception e) {}
			}	
			return st.nextToken();
		}
		int nextInt() {
			return Integer.parseInt(next());
		}
		long nextLong() {
			return Long.parseLong(next());
		}
		double nextDouble() {
			return Double.parseDouble(next());
		}
	}
	
}
