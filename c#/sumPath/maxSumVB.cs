using System;

namespace maxSumApplication {

	class maxSum {

		static void Main(string[] args) {

			// Get the input 
			int [,] input = new int [4,4] {
				{1, 0, 0, 0} ,   
				{8, 4, 0, 0} ,   
				{13, 6, 9, 0} ,
				{8, 5, 113, 3}  
			};

			//Print the input
			for (int row=0; row<4 ; row++) {
				for (int clmn=0; clmn<4 ; clmn++) {
					Console.Write(input[row,clmn]);
					Console.Write(" ");
				}
				Console.Write("\n");
			}

			// Tesing the isPrime method
            /*
			bool prime = maxSum.IsPrime(9);

            if (prime) {
                Console.Write("Prime");
            }
			else {
                Console.Write("NOT Prime");			
			}
			*/

			// Replace the prime numbers with a negative number
			for (int row=0; row<4 ; row++) {
				for (int clmn=0; clmn<4 ; clmn++) {
					bool prime = maxSum.IsPrime(input[row,clmn]);
					if (prime) {
                		input[row,clmn] = -9;
            		}
				}
			}

			Console.Write("\n");

			//Print the new metrix wich the mrime numbers are replaced 
			for (int row=0; row<4 ; row++) {
				for (int clmn=0; clmn<4 ; clmn++) {
					Console.Write(input[row,clmn]);
					Console.Write(" ");
				}
				Console.Write("\n");
			}
	
			Console.Write("\n");

			//Impelement the algorithm
			for (int i = 4 - 2 ; i >= 0; i--) {
				for (int j = 0; j <= i ; j++) {
					if (j == 0) {
						input[i, j] += Math.Max(input[i+1,j], input[i+1, j+1]);
					}
					else {
						input[i, j] += Math.Max(input[i+1,j], Math.Max(input[i+1, j+1], input[i+1, j-1]));
					}
				}
			}

			//Print the max sum
			Console.WriteLine(input[0,0]);
		}

		// A method to identify the prime numbers
		public static bool IsPrime(int candidate) {
			// Test whether the parameter is a prime number.
			if ((candidate & 1) == 0) {
				if (candidate == 2) {
					return true;
		        }
		        else {
					return false;
				}
			}
			// Note:
			// ... This version was changed to test the square.
			// ... Original version tested against the square root.
			// ... Also we exclude 1 at the end.
			for (int i = 3; (i * i) <= candidate; i += 2) {
				if ((candidate % i) == 0) {
					return false;
				}
			}
			return candidate != 1;
		}

	}

}

