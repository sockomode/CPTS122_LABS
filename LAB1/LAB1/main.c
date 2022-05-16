#include "equation.h"

int main(void)
{

	/*char str[] = "t,e,,st";
	myStrTok(str, ",,");

	printf("%s", &str);*/

	int test[] = { 1,2,3,4,5 };
	int test2[] = {6,7,8,9};
	int merge_test[100];
	int test3[100];

	//mergeArray(test, 5, test2, 4, merge_test);
	merge_array_1(test, test2, 5, 4, test3);
	for (int i = 0; i < 9; i++)
	{
		printf("%d", test3[i]);
	}

	return 0;
}