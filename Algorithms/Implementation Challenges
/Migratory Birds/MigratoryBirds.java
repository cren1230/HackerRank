import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int migratoryBirds(int n, int[] ar) {
        // Complete this function
        int [] type = new int[5];
        for(int i = 0; i < ar.length; i++) {
            type[ar[i] - 1]++;
        }
        int count = type[0];
        int commBird = 0;
        for(int i = 1; i < type.length; i++)
        {
            if (count < type[i]) {
                count = type[i];
                commBird = i;
            }
        }
        return commBird+1;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int result = migratoryBirds(n, ar);
        System.out.println(result);
    }
}
