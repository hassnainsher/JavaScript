#include <iostream>
using namespace std;

//int main()
//{
//    int a;
//    int b=9;
//    int c;
//    cin >> a, b;
//    if(a%2==0){
//        cout << "it's even ";
//    }
//    else {
//        cout << "it's odd";
//    }
//}


//check a greater number from all numbers
/*int main() {
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	if (a>b) {
		//cout << "a is greater then b\n";
		if (a > c) {
			cout << " a is greater then c\n";
			cout << " a is topper number";
		}
		else if(c>b)
		{
			cout << " c is topper";
		}
		else {
			cout << "dummy";
		}
	} 
	else if (b > c) {
		cout << "b is topper";
	}
	else
	{
		cout << "c is topper";
	}
	return NULL;
}
*/


/*
int main() {
	int a;
	cin >> a;
	int sum{};
	for (int i = 1; i <= a; i++) {
		 sum +=  i;
		cout <<sum<<endl;
	}
	//i use this for final input
	cout << sum << endl;
}*/


int main() {

}



















#include <iostream>
using namespace std;

//int main()
//{
//    int a;
//    int b=9;
//    int c;
//    cin >> a, b;
//    if(a%2==0){
//        cout << "it's even ";
//    }
//    else {
//        cout << "it's odd";
//    }
//}


//check a greater number from all numbers
/*int main() {
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	if (a>b) {
		//cout << "a is greater then b\n";
		if (a > c) {
			cout << " a is greater then c\n";
			cout << " a is topper number";
		}
		else if(c>b)
		{
			cout << " c is topper";
		}
		else {
			cout << "dummy";
		}
	} 
	else if (b > c) {
		cout << "b is topper";
	}
	else
	{
		cout << "c is topper";
	}
	return NULL;
}
*/


/*
int main() {
	int a;
	cin >> a;
	int sum{};
	for (int i = 1; i <= a; i++) {
		 sum +=  i;
		cout <<sum<<endl;
	}
	//i use this for final input
	cout << sum << endl;
}*/



//a small logic
/*
int main() {
	int m = 3000;
	for (int date = 1; date < 30; date++) {
		if (date % 2 != 0) {
			continue;
		}
		if (m == 0) {
			break;
		}

		
		m = m - 300;
		cout<<m;
		cout << "you can go out side today"<<date<<"\n";
	}
}
*/


//int main(){
//	for (int i = 0; i <= 100; i++) {
//		if (i % 3 == 0) {
//			continue;
//		}
//		cout << i << endl;
//	}
//}



//check aprime number
//int main() {
//	int n;
//	cin >> n;
//	int i;
//	for ( i = 2; i < n; i++) {
//		if (n % i == 0) {
//			cout << "none prim" << endl;
//			break;
//		}
//	}
//	if (i == n) {
//		cout << "prime" << endl;
//	}
//	return 0;
//	
//}
 //cheack prime numbers between your two numbers;
//int main() {
//	int a, b;
//	cin >> a >> b;
//	for (int num = a;num <= b;num++) {
//		int i;
//		for (i = 2;i < num;i++) {
//			if (num % i == 0) {
//				break;
//			}
//		}
//		if (i == num) {
//			cout << num << endl;
//		}
//	}
//}




//9/16/2024



/*
//give to number's and print your rectangle
int main() {
	int row,col;
	cin >> col,
	cin >> row;
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			cout << "*";
		}
		cout << endl;

	}

}
*/










/*
int main() {
	int row, col;
	cin >> row >> col;
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			if (i == 1 || i == row || j == 1 || j == col) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}
*/

//int main() {
//	int n = 5;
//	for (int i = n; i >= 1; i--) {
//		for (int j = 1; j <= i; j++) {
//			cout << j;
//		}
//		cout<<endl;
//	}
//}


//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n;i++) {
//		for (int j = 1; j <= n;j++) {
//			if (j <= n - i) {
//				cout << " ";
//			}
//			else
//			{
//				cout << "*";
//			}
//		}
//		cout << endl;
//	}
//}



//int main() {
//	int n = 5;
//	for (int i = 1;i <= n;i++) {
//		for (int j = 1; j <= i;j++) {
//			cout << i;
//		}
//		cout << endl;
//	}
//}



int main() {
	int n = 5;
	int count = 1;
	for (int i = 1;i <= n;i++) {
		for (int j = 1; j <= i;j++) {
			cout << count<<" ";
			count++;
		}
		cout << endl;
	}
}


//9/18/2024


//int main() {
//	for (int i = 1; i <= 5; i++){
//		for (int j = 1;j <= 6-i; j++) {
//			cout <<j;
//
//		cout << endl;
//	}	}
//}

//find a prime number 

//int main() {
//	int n;
//	bool flag = 0;
//	cin >> n;
//	for (int i = 1; i <=n;i++) {
//		if(n%i==0){
//			cout << "Non-prime" << endl;
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0) {
//		cout << "prime" << endl;
//	}
//}


//enter your number and print in reverse

//int main() {
//	int n;
//	cin >> n;
//	int reverse = 0;
//	while (n > 0) {
//		int lastdigit = n % 10;
//		reverse = reverse * 10 + lastdigit;
//		n = n / 10;
//	}
//	cout << reverse << endl;
//}

//find a armstrong number

//#include <math.h>
//
//int main() {
//	int n;
//	cin >> n;
//	int sum = 0;
//	int original = n;
//	while (n > 0) {
//		int lastdigit = n % 10;
//		sum += pow(lastdigit, 3);
//		n = n / 10; 
//	}
//	if (sum == original) {
//		cout << "armstrong number"<< endl; 
//	}
//	else { cout << "not armstrong"; }
//}


//fibonacci sequence

//void fib(int n) {
//	int t1 = 0;
//	int t2 = 1;
//	int nextTerm;
//	for (int i = 1;i <= n;i++) {
//		cout << t1 << endl;
//		nextTerm = t1 + t2;
//		t1 = t2;
//		t2 = nextTerm;
//	}
//	return;
//}
//
//int main() {
//	int n; 
//	cin >> n;
//	fib(n);
//	return 0;
//}


