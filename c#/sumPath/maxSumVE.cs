using System;
using System.IO;

namespace maxSumApplication {

	class maxSum {

		// METHOD: main.
		static void Main(string[] args) {

			// Get the input.
			int[,] input = readInput();

			// Replace the prime numbers with a negative number.
			int[,] nonPrimeInput = replacePrime(input);

			// Impelement the algorithm (bottom to top path).
			int[,] maxSumResult = maxSumAlgo(nonPrimeInput);

			// Print the max sum.
			Console.WriteLine(maxSumResult[0,0]);
		}

		// METHOD: Get the input. 
		public static int[,] readInput() {

			string input = @"1 
	                         8 4
	                         2 6 9
	                         35 5 9 15";
			int[,] list = new int[4,4];
			var charArray = input.Split ('\n');
 
			for (int i=0; i < charArray.Length; i++) {
				var numArr = charArray[i].Trim().Split(' ');
 
				for (int j = 0; j<numArr.Length; j++)
				{
					int number = Convert.ToInt32 (numArr[j]);
					list [i, j] = number;
				}
			}

			return list;
		}

		// METHOD: Identify the prime numbers.
		public static bool IsPrime(int candidate) {

			if ((candidate & 1) == 0) {
				if (candidate == 2) {
					return true;
		        }
		        else {
					return false;
				}
			}

			for (int i = 3; (i * i) <= candidate; i += 2) {
				if ((candidate % i) == 0) {
					return false;
				}
			}

			return candidate != 1;
		}

		// METHOD: Replace the prime numbers with a negative number.
		public static int [,] replacePrime(int [,] input) {

			for (int row=0; row<4 ; row++) {
				for (int clmn=0; clmn<4 ; clmn++) {
					bool prime = maxSum.IsPrime(input[row,clmn]);
					if (prime) {
                		input[row,clmn] = -999;
            		}
				}
			}

			return input;
		}

		// METHOD: RImpelement the algorithm (bottom to top path).
		public static int [,] maxSumAlgo(int [,] nonPrimeInput) {

			for (int i = 4 - 2 ; i >= 0; i--) {
				for (int j = 0; j <= i ; j++) {
					if (j == 0) {
						nonPrimeInput[i, j] += Math.Max(nonPrimeInput[i+1,j], nonPrimeInput[i+1, j+1]);
					}
					else {
						nonPrimeInput[i, j] += Math.Max(nonPrimeInput[i+1,j], Math.Max(nonPrimeInput[i+1, j+1], nonPrimeInput[i+1, j-1]));
					}
				}
			}

			return nonPrimeInput;
		}

	}

}

