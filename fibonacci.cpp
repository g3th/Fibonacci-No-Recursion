#include <iostream>
using namespace std;

int fibonacci_swap (int&, int&, int);
void fibonacci (int);

int main(){
	// comment this out if calling 'fibonacci'.
	int n1 =0;
	int n2 =1;
	int sum;
	int counter;
	int range;
	cout << "Enter fibonacci range: ";
	cin >> range;
	if (n1 == 0 && n2 == 1){
		cout << n1 << " " << n2 << " ";
	}
	while (counter != range){
		sum = n1 + n2;
		cout << sum << " ";
		fibonacci_swap(n1, n2, sum);
		++counter;
	}

	// comment this out if calling 'fibonacci_swap'
	//fibonacci (15);
}

int fibonacci_swap(int& n1, int& n2, int temp){
	n1 = n2;
	n2 = temp;
	return n1;
	return n2;
}

void fibonacci(int ran)
{
    int total;
	int num1 = 0;
	int num2 = 1;
	int ctr;
    while (ctr != ran){
		if (num1 == 0 && num2 == 1){
			cout << num1 << " " << num2 << " ";
		}		
		total = num1 + num2;
		cout << total << " ";
		num1 = num2;
		num2 = total;
		++ ctr;
	}
	cout << "\n";
}


/*	0 	1 	1	2	3
	n1	n2	t
		n1	n2	t	
			n1	n2	t
				n1  n2	*/
