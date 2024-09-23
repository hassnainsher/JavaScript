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




//9/19/2024

//rhombus shape
 
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1;i <= n;i++) {
//		for (int j = 1;j <= n - i;j++) {
//			cout << " ";
//		}
//		for (int j = 1; j <= n; j++) {
//			cout << "#";
//		}
//		cout << endl;
//	}
//}

//number pattren

//int main() {
//	int n;
//	cin >>n;
//	for (int i = 1;i <= n;i++) {
//		for (int j = 1;j <= n - i;j++) {
//			cout << " ";
//		}
//		for (int j = 1;j <= i;j++) {
//			cout << j << " ";
//		}
//		cout << endl;
//	}
//	
//
//}

//palindromic pattren

//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1;i <= n;i++) {
//		int j;
//		for (j = 1;j <= n - i;j++) {
//			cout << "  ";
//		}
//		int k = i;
//		for (;j <= n;j++) {
//			cout << k-- << " ";
//		}
//		k = 2;
//		for (;j <= n + i - 1;j++) {
//			cout << k++ << " ";
//		}
//		cout << endl;
//	}
//}


//stars pattren

/*
int main() {
	int n=5;
	//cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = 1; j <= n-i; j++) {
			cout << " ";

		}

		//cout<<"g";
		//cout << i << endl;
		for (int j = 1; j <= 2 * i - 1;j++) {
			cout << "%";
		}
		cout << endl;
	}

	// i'm not nested

	for (int i = n;i >=1;i--) {
		for (int j = 1; j <= n - i; j++) {
			cout << " ";

		}

		//cout<<"g";
		//cout << i << endl;
		for (int j = 1; j <= 2 * i - 1;j++) {
			cout << "*";
		}
		cout << endl;
	}
}
*/


//zigzag pattren

//int main() {
//int n; 
//cin >> n;
//for (int c = 1;c <= 3;c++) {
//	for (int r = 1;r <= n;r++) {
//		if (((c + r) % 4 == 0) || (c == 2 && r % 4 == 0)) {
//			cout << "*";
//		}
//		else {
//			cout << " ";
//		}
//	}
//	cout << endl;
//}
//}


//functions methods 
//chack the factorial of a number

//int fact(int n) {
//	int factorial = 1;
//	for (int i = 2;i <= n;i++) {
//		factorial *= i;
//	}
//	return factorial;
//}
//
//int main() {
//	int n;
//	cin >> n;
//
//	int ans = fact(n);
//	cout << ans << endl;
//	return 0;
//}

//arry
//#include<vector>
//int main() {
//	int n;
//	cin >> n;
//	vector<int> array(n)
//	int array[n];
//	for (int i = 0; i < n;i++) {
//		cin >> array[i];
//	}
//	for (int i = 0;i < n;i++) {
//		cout << array[i] << " ";
//	}
//}


//array and leangth featch from user

//#include <vector>
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> array(n);  
//	for (int i = 0; i < n; i++) {
//		cin >> array[i];
//	}
//	for (int i = 0; i < n; i++) {
//		cout << array[i] << " ";
//	}
//	cout << endl;
//}





// #include <vector>
// #include<climits>
// int main() {
// 	int n;
// 	cin >> n;
// 	vector<int> arr(n);
// 	//int arr[n];
// 	for (int i = 0;i < n;i++) {
// 		cin >> arr[i];
// 	}
// 	int maxNo = INT_MIN;
// 	int minNo = INT_MAX;

// 	for (int i = 0;i < n;i++) {
// 		if (arr[i] > maxNo) {
// 			maxNo = arr[i];
// 		}
// 		if (arr[i] < minNo) {
// 			minNo = arr[i];
// 		}
// 	}
// }





//9/23/2024

//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0;i< n;i++) {
//		char word+1;
//		for (int j = 0;j < i+1;j++) { 
//			cout << word;
//		}
//
//		
//		cout << endl;
//	}
//}


//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		for (int j = n;j > 0;j--) {
//			cout << j;
//		}
//		cout<<endl;
//	}
//}

//int main() {
//	int n = 4;
//	for (int i = 0;i < n; i++) {
//		for (int j = i + 1;j > 0;j--) {
//			cout << j;
//		}
//		cout << endl;
//	}
//}

//int main() {
//	int n;
//	cin >> n;
//	char num = 'A';
//	for (int i = 0;i < n;i++) {
//		for (int j = i + 1; j > 0;j--) {
//			cout << num << " ";
//			num++;
//		}
//		cout << endl;
//	}
//}

//int main() {
//	int n = 6;
//	
//	for (int i = 0;i < n;i++){ 
//		for (int j = 0;j < i;j++) {
//			cout << " ";
//		}
//		for (int a = 0; a < n - i;a++) {
//			cout << (i + 1);
//		}
//		cout << endl;
//	}
//	
//}

//pick up a smaller number from array

//int main() {
//	int nums[] = { 4,6,5,7,9,1 };
//	int size = 6;
//	int smallest = INT_MAX;
//	for (int i = 0;i < size;i++) {
//		if (nums[i] < smallest) {
//			smallest = nums[i];
//		}
//	}
//	cout << "smallest = " << smallest << endl;
//	return 0;
//}



//void changArr(int arr[], int size) {
//	cout << "in function\n";
//	for (int i = 0; i < size;i++) {
//		arr[i] = 2 + arr[i];
//	}
//}
//int main() {
//	int arr[] = { 1,2,3 };
//	changArr(arr, 3);
//	cout << "in main \n";
//	for (int i = 0; i < 3; i++) {
//		cout << arr[i] << "";
//	}
//	cout << endl;
//	return 0;
//}



