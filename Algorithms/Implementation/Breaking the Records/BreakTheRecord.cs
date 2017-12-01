using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static int[] getRecord(int[] s){
        // Complete this function
        int best = s[0];
        int worst = s[0];
        int[] result = new int[2] {0, 0};
        for(int i = 1; i < s.Length; i++) {
            if(s[i] > best) {
                result[0]++;
                best = s[i];
            }
            if(s[i] < worst) {
                result[1]++;
                worst = s[i];
            }
        }
        return result;
    }

    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        string[] s_temp = Console.ReadLine().Split(' ');
        int[] s = Array.ConvertAll(s_temp,Int32.Parse);
        int[] result = getRecord(s);
        Console.WriteLine(String.Join(" ", result));
    }
}
