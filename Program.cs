using System;

namespace Counters
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = 9;

            Console.WriteLine($"\nGiven n = {n}");
            Console.Write("\n");

            for (int i = 1; i <= n; i++){
                for (int j = n; j > i; j--)
                {
                    Console.Write($"{j} ");
                }
                Console.Write("\n");
            }
            
        }
    }
}