#include <iostream>
using namespace std;

int fibonacci_swap(int&, int&, int);

int main(){
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
}

int fibonacci_swap(int& n1, int& n2, int temp){
	n1 = n2;
	n2 = temp;
	return n1;
	return n2;
}

/*	0 	1 	1	2	3
	n1	n2	t
		n1	n2	t	
			n1	n2	t
				n1  n2	*/
