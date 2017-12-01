import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

	public static boolean InHouse(int f_pos, int t_pos, int h_left, int h_right){
    	int p = t_pos + f_pos;
    	return (p >= h_left && p <= h_right);
	}
        
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int t = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int m = in.nextInt();
        int n = in.nextInt();
        int[] apple = new int[m];
        int n_a = 0, n_o = 0;
        for(int apple_i=0; apple_i < m; apple_i++){
            apple[apple_i] = in.nextInt();
            if(InHouse(apple[apple_i], a, s, t))	
				n_a++;

        }
        int[] orange = new int[n];
        for(int orange_i=0; orange_i < n; orange_i++){
            orange[orange_i] = in.nextInt();
            if(InHouse(orange[orange_i], b, s, t))	
				n_o++;
        }
        System.out.println(n_a);
        System.out.println(n_o);
    }
}
