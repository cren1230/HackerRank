using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

	static int gcd(int a, int b) {
		while(b > 0){
			int temp = b;
			b = a % b;
			a = temp;
		}
		return a;
	}
	
	static int gcd(vector<int> a) {
		int result = a[0];
		for(int i = 1; i < a.size(); i++) {
			result = gcd(result, a[i]);
		}
		return result;
	}
	
	static int lcm(int a, int b) {
		return a * b / gcd(a, b);
	}
	
	static int(vector<int> a) {
		int result = a[0];
		for(int i = 1; i < a.size(); ++i) {
			result = lcm(result, a[i];)
		}
		return result;
	}
	
    static int getTotalX(int[] a, int[] b) {
        // Complete this function
    	int f = gcd(a);
    	int t = lcm(b);
    	int count = 0;
    	for(int i = f, j = 2; i <= t; i = f*j, i++) {
    		if(l%i == 0) count++;
    	}
    	return count;
    }

    static void Main(String[] args) {
        string[] tokens_n = Console.ReadLine().Split(' ');
        int n = Convert.ToInt32(tokens_n[0]);
        int m = Convert.ToInt32(tokens_n[1]);
        string[] a_temp = Console.ReadLine().Split(' ');
        int[] a = Array.ConvertAll(a_temp,Int32.Parse);
        string[] b_temp = Console.ReadLine().Split(' ');
        int[] b = Array.ConvertAll(b_temp,Int32.Parse);
        int total = getTotalX(a, b);
        Console.WriteLine(total);
    }
}