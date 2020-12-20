using System;
using System.IO;

namespace maxSumApplication {

	class maxSum {

		// METHOD: main.
		static void Main(string[] args) {

			// Get the input.
			int[,] input = readInput();

			// Print the input
			for (int row=0; row<15 ; row++) {
				for (int clmn=0; clmn<15 ; clmn++) {
					Console.Write(input[row,clmn]);
					Console.Write(" ");
				}
				Console.Write("\n");
			}
			Console.Write("\n");

			// Replace the prime numbers with a negative number.
			int[,] nonPrimeInput = replacePrime(input);

			// Print the new metrix wich the prime numbers are replaced 
			for (int row=0; row<15 ; row++) {
				for (int clmn=0; clmn<15 ; clmn++) {
					Console.Write(nonPrimeInput[row,clmn]);
					Console.Write(" ");
				}
				Console.Write("\n");
			}
			Console.Write("\n");

			// Impelement the algorithm (bottom to top path).
			int[,] maxSumResult = maxSumAlgo(nonPrimeInput);

			// Print the max sum.
			Console.WriteLine(maxSumResult[0,0]);
		}

		// METHOD: Get the input. 
		public static int[,] readInput() {

			string input = @"215
							 193 124
							 117 237 442
							 218 935 347 235
							 320 804 522 417 345
							 229 601 723 835 133 124
							 248 202 277 433 207 263 257
							 359 464 504 528 516 716 871 182
							 461 441 426 656 863 560 380 171 923
							 381 348 573 533 447 632 387 176 975 449
							 223 711 445 645 245 543 931 532 937 541 444
							 330 131 333 928 377 733 017 778 839 168 197 197
							 131 171 522 137 217 224 291 413 528 520 227 229 928
							 223 626 034 683 839 053 627 310 713 999 629 817 410 121
							 924 622 911 233 325 139 721 218 253 223 107 233 230 124 233";

			int[,] list = new int[15,15];
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

			for (int row=0; row<15 ; row++) {
				for (int clmn=0; clmn<15 ; clmn++) {
					bool prime = maxSum.IsPrime(input[row,clmn]);
					if (prime) {
                		input[row,clmn] = -9999;
            		}
				}
			}

			return input;
		}

		// METHOD: RImpelement the algorithm (bottom to top path).
		public static int [,] maxSumAlgo(int [,] nonPrimeInput) {

			for (int i = 15 - 2 ; i >= 0; i--) {
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

