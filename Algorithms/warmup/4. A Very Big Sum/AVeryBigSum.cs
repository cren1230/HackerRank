using System;
using System.Linq;
class Solution
{
    static void Main(String[] args)
    {
        var finalSum = 0L;
        var n = int.Parse(Console.ReadLine());
        var ar_temp = Console.ReadLine().Split(' ');
        var ar = Array.ConvertAll(ar_temp, int.Parse);
        finalSum = ar.Sum();

        Console.WriteLine(finalSum);
        Console.ReadLine();
    }
}