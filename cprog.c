    #include <stdio.h>
    int main()
    {
        int firstNumber, secondNumber, sumOfTwoNumbers, subOfTwoNumbers;
        
        printf("Enter two integers: ");
        // Two integers entered by user is stored using scanf() function
        scanf("%d %d", &firstNumber, &secondNumber);
        // sum of two numbers in stored in variable sumOfTwoNumbers
        sumOfTwoNumbers = firstNumber + secondNumber;
        // Displays sum      
        printf("%d + %d = %d", firstNumber, secondNumber, sumOfTwoNumbers);

	// sub of two numbers in stored in variable subOfTwoNumbers
        subOfTwoNumbers = firstNumber - secondNumber;
        // Displays sum
        printf("%d - %d = %d", firstNumber, secondNumber, subOfTwoNumbers);

        return 0;
    }
