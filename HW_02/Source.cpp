#include <iostream>
#include <math.h>


int main()
{
	int choice = 0;
	std::cout << "HW_02. Enter number to choose task:\n1. Horizontal/Vertical line of symbols\n2. Sum of all odd numbers in specified range\n";
	std::cout << "3. Calculate factorial of \"n\"\n4. Count number of digits in entered number\n5. Invert digits in entered number\n6. Sum of digits in entered number\n";
	
	
	while (true)
	{
		std::cin >> choice;
		switch (choice)
		{
		case 1:
		{
			int dirtn = 0; //1- hor., 2- vert.
			int lenght = 0;
			char smbl = 'h';
			std::cout << "Choose direction:\n1.Horizontal\t\t2.Vertical\n";
			std::cin >> dirtn;
			std::cout << "Enter symbol you wish to apply:\n";
			std::cin >> smbl;
			
			if ((dirtn > 0) && (dirtn < 3))
			{
				std::cout << "Enter lenght:\n";
				std::cin >> lenght;
				for (int i = 0; i < lenght; i++)
				{
					if (dirtn == 1)
					{
						std::cout << smbl;
					}
					else if (dirtn == 2)
					{
						std::cout << smbl << "\n";
					}
				}
			}
			else
			{
				std::cout << "Wrong direction!";
			}
		}
		break;

		case 2:
		{
			int min = 0;
			int max = 0;
			int sum = 0;
			std::cout << "Calculate sum of all odd numbers in specified renge.\nEnter minimal number in range:\n";
			std::cin >> min;
			std::cout << "Enter maximal number in range:\n";
			std::cin >> max;

			if (min % 2 == 0)
			{
				min = min + 1;
			}
			if (max % 2 == 0)
			{
				max = max - 1;
			}

			//Solution 1
			//for (int i = min; i <= max; i = i + 2) 
			//{
			//	sum = sum + i;
			//}

			//Solution 2
			while (min <= max)
			{
				sum = sum + min;
				min = min + 2;
			}

			std::cout << "Sum of odd numbers is: " << sum;
			break;
		}

		case 3:
		{
			int n = 0;
			int fctr = 1;
			std::cout << "Enter random integer value you want to calculate:\n";
			std::cin >> n;

			if (n >= 0)
			{
				for (int i = 1; i <= n; i++)
				{
					fctr = fctr * i;
				}
			}
			else
			{
				std::cout << "You've entered wrong value!=(";
			}
			std::cout << "Factorial of " << n << " = " << fctr;
		}
		break;

		case 4:
		{
			int val = 0;
			std::cout << "Enter random integer number, which digits you want to count:\n";
			std::cin >> val;
			if ((val > -100000000) && (val < 100000000))
			{
				int i;
				for (i = 0; val > 0; i++)
				{
					val /= 10;
				}
				std::cout << "Number of digits in Entered value = " << i;
			}
			else
				std::cout << "You've entered wrong value!=(";
		}
		break;

		case 5:
		{
			int val = 0;
			int inv = 0;
			std::cout << "Enter random integer number, which digits you want to invert:\n";
			std::cin >> val;
			if ((val > -100000000) && (val < 100000000))
			{
				while (val > 0)
				{
					inv = inv * 10 + val % 10;
					val /= 10;
					if (val == 0)
						break;
				}
				std::cout << "Your inverted number = " << inv;
			}
			else
				std::cout << "You've entered wrong value!=(";
		}
		break;

		case 6:
		{
			int val = 0;
			int sum = 0;
			std::cout << "Enter random integer number, which digits you want to sum:\n";
			std::cin >> val;
			if ((val > -100000000) && (val < 100000000))
			{
				for (; val > 0;)
				{
					sum = sum + val % 10;
					val /= 10;
					if (val == 0)
						break;
				}
				std::cout << "Sum of digits in your number = " << sum;
			}
			else
				std::cout << "You've entered wrong value!=(";
		}
		break;

		}
	}
	std::cout << "\n";
	system("pause");
	return 0;
}