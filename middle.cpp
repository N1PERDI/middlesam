#include <iostream>
using namespace std;
long long itc_sum(long long a) {
	if (a == 0) { return 0; }
	if (a < 0) { a = a * -1; }
	long long b = a;
    int sum = 0;
    while (a != 0) 
    {
        int d = a % 10;
        if (d % 2 != 0) 
        {
            sum += d;
        }
        a /= 10;
    }
    return sum;
}
long long itc_max(long long num)
{
    if (num < 0) { num *= -1; }
    if (num == 0) { return 0; }
    int max = -1;
    int sum = 0;
    long long num2 = num;
    while (num > 0)
    {
        int d = num % 10;
        if (d > max) { max = d; }
        num /= 10;
    }
    for (int i = num2; i!=0; i/=10 ) 
    {
        if (num2 % 10 == 0) 
        {
            sum++;
            num2 /= 10;
        }
    }
    return max*sum;
}
long long itc_max2(long long num)
{
    if (num < 10 && num>0) { return 0; }

}
long long  itc_5(long long num)
{
    int end = 0;
    int b = 1;

    while (num > 0) {
        int c = num % 10;
        end += c * b;
        num /= 10;
        b *= 5;
    }

    return end;
}
long long itc_9(long long num) {
    long long num2 = num;
    if (num >= 0)
    {
        int end = 0;
        int b = 1;

        while (num > 0) {
            int c = num % 9;
            end += c * b;
            num /= 9;
            b *= 10;
        }
        return end;
    }
    long long b = num2;
    int sum = 0;
    while (num2 != 0)
    {
        int d = num2 % 10;
        if (d % 2 != 0)
        {
            sum ++;
        }
        num2 /= 10;
    }
    return sum;
}