#include "equation.h"

char myStrTok(char* str, const char *delim)
{	
	/*static char* pToken = "";
	int i = 0;
	int j = 0;
	int found = 0;

	if (str != NULL)
	{
		str = pToken;

	}
	while (pToken[i] != '\0')
	{
		found = 1;
		for (j = 0; delim[j] != '\0'; j++)
		{
			if (pToken[i] == delim[j])
			{
				found = 0;
				break;
			}
		}
		if (found)
		{
			break;
		}
		i++;
	}
	if(pToken )*/

	int index = 0;
	int success = 0;
	int i = 0;
	int len = strlen(delim);
	static char* pToken;
	char* returnval;

	if (str == NULL)
	{
		while (*pToken != '\0' && !success)
		{
			if (*(pToken + i) == *delim)
			{
				success = 1;
				while (index < len && success)
				{
					if (*(pToken + i + index) != *(delim + index))
					{
						success = 0;
					}
					index++;
				}
			}
			i++;
		}
		if (success == 0)
		{
			returnval = NULL;
		}
		else
		{
			*(pToken + i - 1) = '\0';
			returnval = pToken;
			pToken = pToken + i + len - 1;
		}
	}
	else
	{
		while (*str != '\0' && !success)
		{
			if (*(str + i) == *delim)
			{
				success = 1;
				while (index < len && success)
				{
					if (*(str + i + index) != *(delim + index))
					{
						success = 0;
					}
					index++;
				}
			}
			i++;
		}
		if (success == 0)
		{
			returnval = NULL;
		}
		else
		{
			*(str + i - 1) = '\0';
			pToken = str + i + len - 1;
			returnval = str;
		}
	}

	return returnval;
}

void merge_array_1(int arr[], int arr2[], int arr1_len, int arr2_len, int merge[])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < arr1_len; i++)
	{
		merge[i] = arr[i];
	}

	for (j = 0; j < arr2_len; j++)
	{
		merge[j + arr1_len] = arr2[j];
	}

}

void merge_array_2(int arr[], int arr2[], int arr1_len, int arr2_len, int merge[])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < arr1_len; i++)
	{
		merge[i] = arr[i];
	}

	for (j = 0; j < arr2_len; j++)
	{
		merge[j + arr1_len] = arr2[j];
	}

	
}

//void mergeArray(int a[], int n1, int b[], int n2, int mer[])    
//{
//	int i, j, k, n3;
//	j = k = 0;
//	n3 = n1 + n2;
//	for (i = 0; i < n3;)
//	{
//		if (j < n1 && k < n2)
//		{
//			if (a[j] < b[k])
//			{
//				mer[i] = a[j];
//				j++;
//			}
//			else
//			{
//				mer[i] = b[k];
//				k++;
//			}
//			i++;
//		}
//		else if (j == n1)
//		{
//			while (i < n3)
//			{
//				mer[i] = b[k];
//				k++;
//				i++;
//			}
//		}
//		else
//		{
//			while (i < n3)
//			{
//				mer[i] = a[j];
//				j++;
//				i++;
//			}
//		}
//	}
//}