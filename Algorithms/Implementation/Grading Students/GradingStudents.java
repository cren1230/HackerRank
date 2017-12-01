import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int[] solve(int[] grades){
        // Complete this function
    	int n = grades.length;
    	int[] newScores = new int[n];
    	for(int i = 0; i<n; ++i){
    		int diff = 5 - grades[i]%5;
    		diff = (grades[i] >= 38 && diff < 3) ? diff : 0;
    		newScores[i] = grades[i] + diff;
    	}
    	return newScores;	
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] grades = new int[n];
        for(int grades_i=0; grades_i < n; grades_i++){
            grades[grades_i] = in.nextInt();
        }
        int[] result = solve(grades);
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i] + (i != result.length - 1 ? "\n" : ""));
        }
        System.out.println("");
    }
}