#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GetRandomNum(int* NumArray)
{
	int RandomNum = rand() % 45 + 1;

	for (int i = 0; i < 45; i++)
	{
		if (NumArray[RandomNum - 1] == 0)
			{
				NumArray[RandomNum - 1] = 1;
				return RandomNum;
			}
	}
	return -1;

}

int main()
{
	// 1~45
	srand(static_cast<unsigned int>(std::time(0)));

	//int Number[45];
	int* Number = new int[45];
	int Answer[6];

	for (int i = 0; i < 45; i++)
	{
		Number[i] = 0;
	}

	for (int i = 0; i < 6; i++)
	{
		Answer[i] = GetRandomNum(Number);
		cout << Answer[i] << endl;
	}
	return 0;
}