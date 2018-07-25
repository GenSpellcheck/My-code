using System;

namespace ConsoleApp8
{
    class Program
    {
        static void Main(string[] args)
        {
            DecimalToBinary();
        }

        static void DecimalToBinary()
        {
            int n;
            int a;
            int c;
            int i;
            int[] digits;
            string d;

            Console.Write("Enter a number: ");
            n = Convert.ToInt32(Console.ReadLine());

            a = (int)MathF.Truncate(MathF.Log(n, 2));

            digits = new int[a + 1];

            c = 0;
            for (int b = a; b >= 0; b--)
            {
                if (n - (int)MathF.Pow(2, b) >= 0)
                {
                    n -= (int)MathF.Pow(2, b);
                    digits[c] = 1;
                }
                else
                {
                    digits[c] = 0;
                }
                c++;
            }

            i = 0;
            foreach (int b in digits)
            {
                if (i == a)
                {
                    Console.WriteLine(b);
                }
                else
                {
                    Console.Write(b);
                }
                i++;
            }

            Console.WriteLine("Convert another number? y/n");

            d = Convert.ToString(Console.ReadLine());

            if (d ==  "y")
            {
                DecimalToBinary();
            }
        }
    }
}
