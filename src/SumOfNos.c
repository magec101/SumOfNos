#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sumOfNosMain(int argc, const char** argv);

int sum_of_digits (int n);
int sum_of_sq_digits (int n);
int sum_of_cube_digits (int n);


int sumOfNosMain(int argc, const char** argv) {
		
		int iOperation;
		int iNos;
		
		if (argc < 2) 
		{
    		scanf("%d", &iOperation);
    		scanf("%d", &iNos);
	    }
    	else
    	{
			iOperation = atoi(argv[1]);
			iNos = atoi(argv[2]);
    	}

        switch(iOperation)
        {
        	case 1:
        	return (sum_of_digits(iNos));
        	break;
        	
        	case 2:
        	return (sum_of_sq_digits(iNos));
        	break;
        	
        	case 3:
        	return (sum_of_cube_digits(iNos));
        	break;
        	
         }

}

int sum_of_digits (int n)
{
	int i;
	int iSum = 0;
	
	for (i =1; i<=n; i++)
		iSum = iSum +i;
	return iSum;
}

int sum_of_sq_digits (int n)
{
	int i;
	int iSum = 0;
	
	for (i =1; i<=n; i++)
		iSum = iSum + (i*i);
	return iSum;
}

int sum_of_cube_digits (int n)
{
	int i;
	int iSum = 0;
	
	for (i =1; i<=n; i++)
		iSum = iSum + (i*i*i);
	return iSum;
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, const char** argv){
    printf("%d", sumOfNosMain(argc, argv));
    return 0;
}

#endif