#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GetRandomNum(int* NumArray , int Size)
{
	for (int i = 0; i < Size; i++)
	{
		int RandomNum = rand() % Size + 1;

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

	//const = 상수 정의
	int Size = 45;
	int CollectSize = 6;

	int* Number = new int[Size];
	int* Answer = new int[CollectSize];

	for (int i = 0; i < Size; i++)
	{
		Number[i] = 0;
	}

	for (int i = 0; i < CollectSize; i++)
	{
		Answer[i] = GetRandomNum(Number, Size);
		cout << Answer[i] << endl;
	}

	return 0;
}