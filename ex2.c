/******************
Name:
ID:
Assignment: ex2
*******************/

#include <stdbool.h>
#include <stdio.h>

int main() {
  int option;//will be also used
  do {
  	printf("Choose an option:\n");
  	printf("	1. Happy Face\n"
"	  2. Balanced Number\n"
"	  3. Generous Number\n"
"	  4. Circle Of Joy\n"
"	  5. Happy Numbers\n"
"	  6. Festival Of Laughter\n"
"	  7. Exit\n");
  	scanf("%d", &option);
    switch (option){
    default:
    	printf("This option is not available, please try again.\n");
    	break;
    case 1:
    	char eyes, nose, mouth;
    	int size;
    	printf("Enter symbols for the eyes, nose, and mouth:\n");
    	scanf(" %c %c %c", &eyes, &nose, &mouth);
    	do
    	{
    		printf("Enter face size:\n");
    		scanf("%d", &size);
    		if ((size < 1) || (size % 2 == 0))
    			printf("The face's size must be an odd and positive number, please try again:)\n");

    	} while ((size < 1) || (size % 2 == 0));
    	//print eyes
    	printf("%c", eyes);
    	//print space between the eyes
    	for (int i = 0; i < size; i++)
    		printf(" ");
    	printf("%c\n", eyes);
    	//print spaces before the nose
    	for (int i = 0; i < size/2+1; i++)
    		printf(" ");
    	printf("%c\n", nose);
    	printf("\\");
    	//print mouth chars
    	for (int i = 0; i < size; i++)
    		printf("%c",mouth);
    	printf("/\n");
    	break;
    case 2:
    	int num, NumToCheck, sum1 = 0,sum2 = 0;
    	int length = 0;
    	int temp = 0;

    	do
    	{
    		printf("Enter a number: \n");
    		scanf("%d", &num);
    		if (num < 1)
    			printf("Only positive number is allowed, please try again:\n");
    		else
    			break;
    	}while (1);
    	if (num < 10)
    		NumToCheck = 1;
    	else
    	{
    		temp = num;
    		for (length; temp!=0; length++)
    			temp = temp / 10;
    		NumToCheck = length/2;
    	}
    	temp = num;
    	for (int i = 0; i < NumToCheck; i++){
    		sum1 += temp%10;
    		temp = temp/10;
    	}
    	temp = num;
    	for (int i = 0; i <length - NumToCheck; i++)
    		temp = temp/10;
    	for (int i = 0; i < NumToCheck; i++)
    	{
    		sum2 += temp%10;
    		temp = temp/10;
    	}
    	if (sum1==sum2)
    		printf("This number is balanced and brings harmony!\n");
    	else
    		printf("This number isn't balanced and destroys harmony.");
		break;

	case 3:
		int sum = 0;
		do
		{
			printf("Enter a number: \n");
			scanf("%d", &num);
			if (num < 1)
				printf("Only positive number is allowed, please try again:\n");
			else
				break;
		}while (1);
    	for (int i = 1; i <= num/2; i++)
    		if (((double)num / i) - (num / i) == 0)
    			sum += i;
    	if (sum > num)
    		printf("This number is generous!\n");
    	else
    		printf("This number does not share.\n");
    	break;
    case 4:
		int reverse = 0;
    	do
    	{
    		printf("Enter a number: \n");
    		scanf("%d", &num);
    		if (num < 1)
    			printf("Only positive number is allowed, please try again:\n");
    		else
    			break;
    	}while (1);
    	temp = num;
    	for (int i = 1;  temp != 0; i++)
    	{
    		reverse += temp%10;
    		temp /= 10;
    		if (temp != 0)
    			reverse *=10;
    	}
    	temp = 0;//Will be used as a boolean value to see if they're prime by the end of the loop
    	for (int i = 2; (i <= num/2) || (i <= reverse/2); i++)
    	{
    		for (int j = 2; (j <= reverse/2 || j <= num/2); j++)
    		{
    			if (j*i == reverse || j*i == num)
    				temp++;
    		}
    	}
    	if (temp == 0)
    		printf("This number completes the circle of joy!\n");
    	else
    		printf("The circle remains incomplete.\n");
    	break;
    case 5:
    	int Num = 0;
    	do
    	{
    		printf("Enter a number: \n");
    		scanf("%d", &num);
    		if (num < 1)
    			printf("Only positive number is allowed, please try again:\n");
    		else
    			break;
    	}while (1);
		printf("Between 1 and %d only these numbers bring happiness:", num);
    	for (int i = 1; i <= num; i++)
    	{
    		temp = i;
    		while (temp != 1 && temp != 4)
    		{
    			Num = 0;
    			while (temp > 0){
    				Num += (temp%10)*(temp%10);
    				temp /= 10;
    			}
    			temp = Num;
    		}
    		if (temp == 1)
    			printf(" %d", i);
    	}
    	printf("\n");
    	break;
    case 6:
    	int smileNumber, cheerNumber;
    	int verification = 0;
    	char smile[7] = {'s','m','i','l','e',':','\0'};
    	char cheer[9] = {',',' ','c','h','e','e','r',':','\0'};
    	char var;
    	printf("Enter a smile and cheer number:\n");

    	while (1)
    	{
    		if (verification)
    		{
			    scanf("%*[^\n]%*c");
			    printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:\n");
			    verification = 0;
    		}
    		for (int i = 0; i < 6; i++)
    		{
    			scanf("%c",&var);
    			if (var != smile[i])
    			{
    				verification = 1;
    				break;
    			}
    		}
    		if (verification)
    			continue;
			if (scanf(" %d", &smileNumber) != 1)
			{
				verification = 1;
				continue;
			}
    		for (int i = 0; i < 8; i++)
    		{
    			scanf("%c",&var);
    			if (var != cheer[i])
    			{
    				verification = 1;
    				break;
    			}
    		}
    		if (verification)
    			continue;
    		if (scanf(" %d", &cheerNumber) != 1)
    		{
				verification = 1;
    			continue;
    		}
    		if (smileNumber < 1 || cheerNumber < 1 || cheerNumber == smileNumber)
    		{
    			verification = 1;
    			continue;
    		}
    		break;
    	}
    	printf("Enter maximum number for the festival: ");
    	scanf("%d", &num);
    	for (int i = 1; i <= num; i++)
    	{
    		if ((i % smileNumber == 0) && (i % cheerNumber == 0))
    		{
    			printf("Festival!\n");
    			continue;
    		}
    		if (i % smileNumber == 0)
    		{
    			printf("Smile!\n");
    			continue;
    		}
    		if (i % cheerNumber == 0)
    			printf("Cheer!\n");
    		else
    			printf("%d\n",i);
    	}
    	break;
    case 7:
    	break;
	}
  } while(option != 7);
  printf("Thank you for your journey through Numeria!");
	// Festival of Laughter: Prints all the numbers between 1 the given number:
	// and replace with "Smile!" every number that divided by the given smile number
	// and replace with "Cheer!" every number that divided by the given cheer number
	// and replace with "Festival!" every number that divided by both of them
	/* Example:
	6, smile: 2, cheer: 3 : 1, Smile!, Cheer!, Smile!, 5, Festival!
	*/
	return 0;
}
