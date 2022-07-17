#include <iostream>

int main()
{
	char myString[255];
	char extra[255]{};
	int n{ 2 };

	std::cout << "Input word: ";
	std::cin >> myString;

	for (int i = 0; i < 255; i++)
	{
		for (int j = 0; j < 254; j++)
		{
			extra[j] = myString[j];
			myString[j] = myString[j + 1];
			myString[j + 1] = extra[j];

			if (myString[j + n] == '\0')
			{
				break;
			}
		}
		n++;
		
		if (myString[n - 1] == '\0')
		{
			break;
		}
	}

	std::cout << myString << std::endl;

}