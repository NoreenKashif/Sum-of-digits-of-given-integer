#include<iostream>

using namespace std;

int main()
{
	int num,sum=0,temp, num1;
	cout << "Enter an integer: ";//getting an integer
	cin >> num;
	num1 = num;
	while (num != 0)
	{
		temp = num % 10;//getting the right most digit
		sum = sum + temp;
		num = num / 10;//updating the number
	}
	cout << endl;
	cout << "Sum of digits of a " << num1 << " is : " << sum;

	return 0;
}
