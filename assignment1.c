1.WAP to input two numbers from the keyboard and print their sum.

#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    
    return 0;
}

In this program, we declare three variables: 
num1, num2, and sum. We use the printf() function to prompt the user to enter the first and second numbers. 
We use the scanf() function to read in the values entered by the user and store them in num1 and num2. 
We then calculate the sum of the two numbers by adding num1 and num2 together and store it in the sum variable.
 Finally, we use the printf() function to print out the sum of the two numbers to the console.

2.WAP to input two numbers from the keyboard and print their average.

#include <stdio.h>

int main() {
   int num1, num2;
   float avg;

   printf("Enter the first number: ");
   scanf("%d", &num1);

   printf("Enter the second number: ");
   scanf("%d", &num2);

   avg = (float)(num1 + num2) / 2;

   printf("The average of %d and %d is %.2f\n", num1, num2, avg);

   return 0;
}

In this program, we declare three variables: num1, num2, and avg. We then prompt the user to enter the first number using 
printf read the input using scanf.We repeat the same process for the second number.We calculate the average of the two numbers by adding them together and dividing by 2.
 We cast the sum to a float so that the result is also a float. We then print the result using printf,
 formatting the output to show the original numbers and the calculated average.Finally, we return 0 to indicate that the program has executed successfully.

3.Finally, we return 0 to indicate that the program has executed successfully.


#include <stdio.h>

#define PI 3.14159

int main() {
   float radius, area;

   printf("Enter the radius of the circle: ");
   scanf("%f", &radius);

   area = PI * radius * radius;

   printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

   return 0;
}
 
In this program, we declare two variables: radius and area. We prompt the user to enter the radius of the circle using printf and read the input using scanf.
We then calculate the area of the circle using the formula area = PI * radius * radius, where PI is a constant defined using the #define preprocessor directive.
Finally, we print the result using printf, formatting the output to show the radius and calculated area of the circle.
Note that we have used %.2f format specifier to print the area of the circle with two decimal places.
Finally, we return 0 to indicate that the program has executed successfully.

4.WAP to print the total seconds in a given time (hrs, min, sec’s).

#include <stdio.h>

int main() {
    int hours, minutes, seconds, total_seconds;

    printf("Enter time in hh:mm:ss format: ");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);

    total_seconds = hours * 3600 + minutes * 60 + seconds;

    printf("Total seconds = %d\n", total_seconds);

    return 0;
} 


In this program, we first declare four integer variables: hours, minutes, seconds, and total_seconds.
Then we prompt the user to enter the time in the format hh:mm:ss using printf() and scanf() functions.
We then calculate the total number of seconds by multiplying the number of hours by 3600, the number of minutes by 60, and adding the number of seconds.
Finally, we print the total number of seconds using printf() function.
Note that this program assumes that the user inputs the time in the correct format, and does not include any error handling for invalid inputs.

5.WAP to convert temp. From Fahrenheit to centigrade. C=(F-32) * 5/9 

#include <stdio.h>

int main() {
    float fahrenheit, centigrade;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    centigrade = (fahrenheit - 32) * 5 / 9;

    printf("%.2f Fahrenheit = %.2f Centigrade\n", fahrenheit, centigrade);

    return 0;
}


In this program, we first declare two float variables: fahrenheit and centigrade.
Then we prompt the user to enter the temperature in Fahrenheit using printf() and scanf() functions.
We then calculate the temperature in Centigrade by subtracting 32 from the Fahrenheit temperature and multiplying the result by 5/9.
Finally, we print both the Fahrenheit and Centigrade temperatures using printf() function.
Note that we use the %.2f format specifier to print the temperature values with two decimal places.

6.WAP to SWAP (interchange) two numbers.

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the values of a and b
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

The program first asks the user to enter two integers, a and b. Then, it prints out the values of a and b before swapping them.To swap the values, we use a temporary
 variable temp to store the value of a, then set a equal to b and b equal to temp(which now holds the original value of a).Finally, the program prints out the new values
 of a and b.Note that this program assumes that the user enters valid integer when prompted.If the user enters a non-integer value, the program will behave unexpectedly.
 To handle such cases, you may want to add error checking or use a different input method.

7.WAP to SWAP (interchange) 2 numbers without using third variable.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the values of a and b without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

This program works by using mathematical operations to swap the values of a and b, without using a temporary variable. Here's how it works:

Add a and b and store the result in a. Now a contains the sum of the original values of a and b.

Subtract the original value of b from the new value of a, and store the result in b. Now b contains the original value of a.

Finally, subtract the original value of a from the new value of a, and store the result in a. Now a contains the original value of b.

After these three steps, the values of a and b have been swapped without using a third variable. The program then prints out the new values of a and b.

8.WAP to SWAP (interchange) three numbers.

#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);

    // Swap the values of a, b, and c
    temp = a;
    a = b;
    b = c;
    c = temp;

    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}

The program first asks the user to enter three integers, a, b, and c. Then, it prints out the values of a, b, and c before swapping them.
To swap the values, we use a temporary variable temp to store the value of a, then set a equal to b, b equal to c, and c equal to temp 
(which now holds the original value of a). Finally, the program prints out the new values of a, b, and c.
Note that this program assumes that the user enters valid integers when prompted. If the user enters 
a non-integer value,the program will behave unexpectedly. To handle such cases, you may want to add error checking or use a different input method.

9.WAP to SWAP three numbers without using fourth variable.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);

    // Swap the values of a, b, and c without using a fourth variable
    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);

    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}


This program works by using mathematical operations to swap the values of a, b, and c, without using a fourth variable. Here's how it works:

Add a, b, and c, and store the result in a. Now a contains the sum of the original values of a, b, and c.

Subtract the sum of b and c from the new value of a, and store the result in b. Now b contains the original value of a.

Subtract the sum of the original values of b and c from the new value of a, and store the result in c. Now c contains the original value of b.

Finally, subtract the sum of the original values of a, b, and c from the new value of a, and store the result in a. Now a contains the original value of c.

After these four steps, the values of a, b, and c have been swapped without using a fourth variable. The program then prints out the new values of a, b, and c.

10.WAP to calculate the remainder of 2 numbers without using % operator. 

#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Calculate the quotient
    quotient = dividend / divisor;

    // Calculate the remainder
    remainder = dividend - (divisor * quotient);

    printf("The remainder is %d\n", remainder);

    return 0;
}

This program works by first asking the user to enter the dividend and divisor. It then calculates the quotient of the two numbers using integer division
 (i.e., discarding the fractional part). Finally, it calculates the remainder by subtracting the product of the divisor and quotient from the dividend.
Note that this method only works for positive integers. If you need to calculate the remainder of negative integers or floating-point numbers,
 you may need to use a different approach.














