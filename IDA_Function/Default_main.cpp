#include <iostream>
#include <algorithm>
#include <ctime>;


int Get_Int();
int Get_Dbl();

// void Function without return
void Print_in_console() 
{
	std::cout << "\nHello hello";
	std::cout << "\nIt was a nice trip\n";
}
void Print_Summ(int num1, int num2)
{
	std::cout << "\n" << num1 << " + " << num2 << " = " << num1 + num2;
}
// This function returns summ of 2 integer parameters
int Integer_Summ(int num1, int num2)
{
	//int tmp1 = num1 + num2;
	return num1 + num2;
}
void Print_Array(int Size, int Array_for_Print[])
{
	std::cout << "[";
	for (int i = 0; i < Size; i++)
		std::cout << Array_for_Print[i] << ", ";
	std::cout << "\b\b]\n";
}
double Sqr_Average(int const Size, int Array[])
{
	double Average1 =0;
	for (int i = 0; i < Size; i++)
		Average1 += pow(Array[i], 2);

			return sqrt(Average1);
}
double long X_in_power_Y(double X, double Y)
{
	double long base = 1;
	for (int i = 0; i < Y; i++)
		base *= X;

	return base;
 }
void x2(int x2)
{
	x2 *= 2;
}

void x2_arr(int arr[])
{
	arr[1] *= 2;
}

int Random_Number_Int(int Range_min, int Range_max) 
{
	return Range_min + rand() % (Range_max - Range_min + 1); 
}


int main()
{
	
	std::cout << "\nEnter N ";
	int N = Get_Int();
	std::cout << "\nEnter M ";
	int M = Get_Int();
	

	const int Size = 20;
	int Test_Array[Size];
	int Summ = 0;
	
	srand(time(NULL));	
	for (int i = 0; i < Size; i++)
	{
		Test_Array[i] = Random_Number_Int(0, 100);		
	}
	

	//Print_in_console(); // void without parameters
	//Print_Summ(N, M); // void with 2 parameters
	//Print_Summ(5, 99);
	//int Result= Integer_Summ(N,M); //Initialasation of Result with return of function Integer_Summ
	//std::cout << "\nSumm " << Result;

	//Print_Array(Size, Test_Array);
	
	//std::cout << "\n\nSqr_Average " << Sqr_Average(Size, Test_Array);


	//std::cout << "\n\nN in power M " << X_in_power_Y(N, M);
	std::cout << "\n\nbefore " << Test_Array[1];
	x2(Test_Array[1]);
	std::cout << "\n\nvoid X2 " << Test_Array[1];

	std::cout << "\n\nbefore " << Test_Array[1];
	x2_arr(Test_Array);
	std::cout << "\n\n X2_arr " << Test_Array[1];







	std::cout << "\n\n";
	system("pause");
	return 0;
}

int Get_Int()
{
	int a;
	while (!(std::cin >> a) || (std::cin.peek() != '\n'))
	{
		std::cin.clear();
		while (std::cin.get() != '\n');
		std::cout << "[Input error! Integer expected]\n";
	}
	return a;
}
int Get_Dbl()
{
	double a;
	while (!(std::cin >> a) || (std::cin.peek() != '\n'))
	{
		std::cin.clear();
		while (std::cin.get() != '\n');
		std::cout << "[Input error! Integer expected]\n";
	}
	return a;
}