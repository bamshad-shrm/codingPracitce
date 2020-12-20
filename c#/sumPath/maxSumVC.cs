using System;
using System.IO;

namespace maxSumApplication {

	class maxSum {

		static void Main(string[] args) {

			int[,] input = readInput();

			//Print the input
			for (int row=0; row<4 ; row++) {
				for (int clmn=0; clmn<4 ; clmn++) {
					Console.Write(input[row,clmn]);
					Console.Write(" ");
				}
				Console.Write("\n");
			}

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

			//Print the new metrix wich the rime numbers are replaced 
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

		// Get the input 
		public static int[,] readInput() {
			string input = @"1 
	                         8 4
	                         2 6 9
	                         8 5 9 3";
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

		// Identify the prime numbers
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

	}

}

