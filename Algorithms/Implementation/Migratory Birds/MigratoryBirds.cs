using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static int migratoryBirds(int n, int[] ar) {
        // Complete this function
       int [] t = new int[5];
        for(int i = 0; i < ar.Length; i++) {
            t[ar[i] - 1]++;
        }
        int count = t[0];
        int commBird = 0;
        for(int i = 1; i < t.Length; i++)
        {
            if (count < t[i]) {
                count = t[i];
                commBird = i;
            }
        }
        return commBird+1;
    }

    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        string[] ar_temp = Console.ReadLine().Split(' ');
        int[] ar = Array.ConvertAll(ar_temp,Int32.Parse);
        int result = migratoryBirds(n, ar);
        Console.WriteLine(result);
    }
}
