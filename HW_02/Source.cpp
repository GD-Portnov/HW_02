#include <iostream>
#include <math.h>


int main()
{
	int choice = 0;
	std::cout << "HW_02. Enter number to choose task:\n1. Horizontal/Vertical line of symbols\n2. Sum of all odd numbers in specified range\n";
	std::cout << "3. Calculate factorial of \"n\"\n4. Count number of digits in entered value\n5. Invert digits in entered number\n6.Sum of digits in entered number\n";
	
	std::cin >> choice;
	switch (choice)
	{
	case 1:
	{
		int direction = 0; //1- hor., 2- vert.
		int lenght = 0;
		std::cout << "Choose direction:\n1.Horizontal\t\t2.Vertical\n";
		std::cin >> direction;
		
		if ((direction > 0) && (direction < 3))
		{
			std::cout << "Enter lenght:";
			std::cin >> lenght;
			for (int i = 0; i < lenght; i++)
			{
				if (direction == 1)
				{
					std::cout << "*";
				}
				else if (direction == 2)
				{
					std::cout << "*\n";
				}
			}
		}
		else
		{
			std::cout << "Wrong direction!";
		}
		break;
	}

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

		for (int i = min; i <= max; i=i+2)
		{
			sum = sum + i ;
		}

		std::cout <<"Sum of odd numbers is: "<< sum;
		break;
	}

	case 3:
	{
		int n = 0;
		int fctr = 1;
		std::cout << "Enter value you want to calculate:\n";
		std::cin >> n;

			if (n > 0)
			{
				for (int i = 1; i <= n; i++)
				{
					fctr = fctr*i;
				}
			}
			else
			{
				std::cout << "You've entered wrong value!=(";
			}
			std::cout <<"Factorial of "<< n << " = "<< fctr;
	}
	break;

	}
		
			
	
	std::cout << "\n";



	system("pause");
}