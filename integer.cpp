#include<iostream>
using namespace std;
void take(int a[], int n);
void summation(int x, int a[], int n);
int main()
{
	int N = 10, integer=0;
	cout << "Enter aray size : ";
	cin >> N;
	int array[100];
	take(array, N);
	cout << "Enter an integer number : ";
	cin >> integer;
	summation(integer, array, N);
	system("pause");
	return 0;
}
void take(int a[], int n)     //takes the array elements as input
{
	cout << "Enter the elements :" << endl; 
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void summation(int x, int a[], int n)	//basically finds three terms such as 
{										//x+y+z = a->(input)
	bool repeated[100] = { false };		//made to avoid repetition
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (x == (a[i] + a[j] + a[k]))
				{
					if (repeated[i] == false && repeated[j] == false && repeated[k] == false)
					{	//here, as it is initialized as false, it will run at first but later in line 42, we make the array equal to true
						// at those indexes, so when these indexes appear again, they will be true, thus this if statement will not
						// work and hence, no repetition	
						cout << a[i] << " + " << a[j] << " + " << a[k] << " = " << x << endl;
						repeated[i] = repeated[j] = repeated[k] = true;
					}
				}
			}
		}
	}
}
