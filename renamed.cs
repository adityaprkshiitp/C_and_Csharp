using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HackerRank {
    class Program {
        public static void fizzBuzz (int n){
            if(n%3==0 && n%5==0){
                Console.WriteLine("FizzBuzz");
            } else if(n%3==0 && n%5!=0) {
                Console.WriteLine("Fizz");
            } else if(n%3!=0 && n%5==0) {
                Console.WriteLine("Buzz");
            } else if(n%3!=0 && n%5!=0) {
                Console.WriteLine(n);
            }
        }
        static void Main(string[] args) {
            int n = Convert.ToInt32(Console.ReadLine());
            for(int i = 1; i < n;i++){
                fizzBuzz(i);
            }
        }
    }
}