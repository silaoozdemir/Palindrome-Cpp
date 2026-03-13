#include<iostream>
using namespace std;
bool isPalindrome(int num){
	int original=num, reversed=0;
	while(num>0){
		reversed=reversed*10+num%10;
		num/=10;
	}
	return original==reversed;
}
int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout<<(isPalindrome(num) ? "The number is a palindrome." : "The number is not a palindrome.")<<endl;
	return 0;
}