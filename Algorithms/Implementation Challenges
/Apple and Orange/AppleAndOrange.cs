using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {
	public static bool InHouse(int f_pos, int t_pos, int h_left, int h_right){
    	int p = t_pos + f_pos;
    	return (p >= h_left && p <= h_right);
	}

    static void Main(String[] args) {
        string[] tokens_s = Console.ReadLine().Split(' ');
        int s = Convert.ToInt32(tokens_s[0]);
        int t = Convert.ToInt32(tokens_s[1]);
        string[] tokens_a = Console.ReadLine().Split(' ');
        int a = Convert.ToInt32(tokens_a[0]);
        int b = Convert.ToInt32(tokens_a[1]);
        string[] tokens_m = Console.ReadLine().Split(' ');
        int m = Convert.ToInt32(tokens_m[0]);
        int n = Convert.ToInt32(tokens_m[1]);
        string[] apple_temp = Console.ReadLine().Split(' ');
        int[] apple = Array.ConvertAll(apple_temp,Int32.Parse);
        string[] orange_temp = Console.ReadLine().Split(' ');
        int[] orange = Array.ConvertAll(orange_temp,Int32.Parse);
        
        int n_a = 0, n_o = 0;
        foreach(var x in apple){
			if(InHouse(x, a, s, t))	
				n_a++;
        }
        
        foreach(var x in orange){
			if(InHouse(x, b, s, t))	
				n_o++;
        }
        
        Console.WriteLine(n_a);
        Console.WriteLine(n_o);
    }
}