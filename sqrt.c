/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//tested on Dev-C++ 5.11 on windows machine
//remove the comments to use scanf statement

int main(int argc, char* argv[]) {
	
	if (argc > 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	//int input = atoi(argv[0]);
	
	int input;
	scanf("%d",&input);
	
	if(input<0) {
		//printf("can't find square root of negative number\n");
		//modifications to find square root of negative numbers have been added
	}
	if(input<0){
		printf("NEG : Sqrt of %d is %fi\n",input,sqrt(-input));
	}
	else
	printf("NEG : Sqrt of %d is %f\n",input,sqrt(input));
	printf("NEG : End of program...Exiting...\n");
	return(0);

} // end main

