#include <iostream>
using namespace std;
/*int recursiveProduct(int a,int b) {
    if (b==0) {
        return 0;
    }if (b<0) {
        return -recursiveProduct(a, -b);
    }
    return a+recursiveProduct(a, b-1);
}
int main() {
    int a; int b;
    cin>>a>>b;
    cout<<recursiveProduct(a, b)<<endl;
}*/
/*int recursiveFactorial(int n) {
    if(n == 0) {
        return 1;
    }
        return n * recursiveFactorial(n - 1);

}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n<0) {
        cout << "The factorial is not defined for negative numbers" << endl;
    }else{
        int result = recursiveFactorial(n);
        cout << result<< endl;
    }
}*/
/*int recursiveFibonacci(int n) {
    if (n == 0 ) {
        return 0;
    }if (n == 1) {
        return 1;
    }
    return recursiveFibonacci(n-1) + recursiveFibonacci(n-2);
}
int main() {
    int n;
    cin >> n;
    int result = recursiveFibonacci(n);
    cout << result << endl;
}*/
/*int recursiveSumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    }
    return n + recursiveSumOfNaturalNumbers(n - 1);
}
int main() {
    int n;
    cin >> n;
    cout << recursiveSumOfNaturalNumbers(n) << endl;
}*/
/*void recursiveDescendingOrder(int n) {
    if (n < 1) {
        return ;
    }
    cout << n << " ";
    return recursiveDescendingOrder(n - 1);
}
int main() {
    int n;
    cin >> n;
    recursiveDescendingOrder(n);
    cout<<endl;
}*/
/*int recursiveNumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }if (n < 0) {
        n=-n;
    }
    return 1 + recursiveNumOfDigits(n / 10);
}
int main() {
    int number;
    cin >> number;
    int result = recursiveNumOfDigits(number);
    cout << result << endl;
}*/
/*int recursiveSumOffDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + recursiveSumOffDigits(n / 10);

}
int main() {
    int n;
    cin >> n;
    cout << recursiveSumOffDigits(n) << endl;
}*/
/*int recursivePowerOfNumber(int n,int m) {
    if (n == 0) return 1;
    return recursivePowerOfNumber(m,n - 1) * m;
}
int main() {
    int a,b;
    cin >> a>>b;
    int result = pow(a,b);
    cout << result << endl;
}*/
/*int recursiveReverseTheDigits(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    return recursiveReverseTheDigits(n / 10, rev * 10+ n % 10);
}
int main() {
    int n;
    cin >> n;
    cout << recursiveReverseTheDigits(n, 0);
}*/
/*int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countDigits(n / 10);
}


int getDigit(int n, int pos) {
    for (int i = 0; i < pos; i++) {
        n /= 10;
    }
    return n % 10;
}

bool isPalindromeHelper(int n, int left, int right) {
    if (left >= right) {
        return true;
    }

    if (getDigit(n, left) != getDigit(n, right)) {
        return false;
    }

    return isPalindromeHelper(n, left + 1, right - 1);
}

bool isPalindrome(int n) {
    if (n < 0) {
        return false;
    }
    int digits = countDigits(n);
    return isPalindromeHelper(n, 0, digits - 1);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}*/

/*bool isPrime(int n, int divisor = 2) {
    if (n <= 1) {
        return false;
    }
    if (divisor > std::sqrt(n)) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }

    return isPrime(n, divisor + 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        std::cout << n << " is a prime number." << std::endl;
    } else {
        std::cout << n << " is not a prime number." << std::endl;
    }

    return 0;
}*/
/*void towerOfHanoi(int N, char source, char destination, char auxiliary) {
    if (N == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(N - 1, source, auxiliary, destination);
    cout << "Move disk " << N << " from " << source << " to " << destination << endl;
    towerOfHanoi(N - 1, auxiliary, destination, source);
}

int main() {
    int N;
    cout << "Enter the number of disks: ";
    cin >> N;
    towerOfHanoi(N, 'A', 'C', 'B');

    return 0;
}*/