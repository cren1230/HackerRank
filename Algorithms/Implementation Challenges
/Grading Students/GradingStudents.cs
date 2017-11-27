using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Solution {
	static int[] Solve(int[] grades){
		int num = grades.Length;
		int [] newScores = new int[num];
		for(int i = 0; i < num; ++i) {
			int diff = 5 -grades[i]%5;
			diff = (grades[i] >= 38 && diff < 3) ? diff : 0;
			newScores[i] = grades[i] + diff;
		}
		return newScores;
	}
	
	static void Main(String[] args) {
		int n = Convert.ToInt32(Console.ReadLine());
		int[] grades = new int[n];
		for(int i = 0; i < n; ++i) {
			grades[i] = Convert.ToInt32(Console.ReadLine());
		}
		int[] result = Solve(grades);
		Console.WriteLine(String.Join("\n", result));
	}
}