using System;
using System.Linq;
class Solution
{
    static void Main(String[] args)
    {
        //no need of the element count as I use LINQ to create the sum instead of iterating the array explicitly in my code.
        Console.ReadLine();
        var ar_temp = Console.ReadLine().Split(' ');
        var ar = Array.ConvertAll(ar_temp, Int32.Parse);
        Console.WriteLine(ar.Sum()); //LINQ's sum method has O(n) time complexity.
    }
}