#include<stdio.h>

int main()
{
	int i=0;
	printf("Switch 1 here break is used  \n");
	switch (i){

		case 0:
			printf("This is case 0 \n" );
			break;
		case 1:
			printf("This is case 1 \n" );
		case 2:
			printf("This is case 2\n" );
		default :
			printf("This is default case mismatch \n" );
			
	}
	printf("\n");
	printf("Switch 2 here initialization done at middle \n");
        switch (i){

                case 0:
                        printf("This is case 0 \n" );
                i=10;//Can be done but not recommended 
		case 1: 
                        printf("This is case 1 \n" );
                case 2:
                        printf("This is case 2\n" );
                default :
                        printf("This is default case mismatch \n" );
                        
        }
	printf("\n");
	printf("Switch 3 done by var or constant expreassion \n");
	printf("Switch 3 done by constant expreassion \n");
        switch (1*1){
                case 0*i:
                        printf("This is case 0 \n" );
		case 1: 
                        printf("This is case 1 \n" );
                case 2:
                        printf("This is case 2\n" );
                default :
                        printf("This is default case mismatch \n" );
	}
	printf("\n");
	i=10;
	printf("Switch 3 done by var expreassion \n");
        switch (i*1){
                case 0:
                        printf("This is case 0 \n" );
		case 1*1: 
                        printf("This is case 1 \n" );
                case 2:
                        printf("This is case 2\n" );
                default :
                        printf("This is default case mismatch \n" );
	}
	
	printf("\n");
	float aa;
	aa=1;
	printf("Switch 4 done by type casting \n");
        switch ((int)aa){
                case 0:
                        printf("This is case 0 \n" );
		case 1*1: 
                        printf("This is case 1 \n" );
                case 2:
                        printf("This is case 2\n" );
                default :
                        printf("This is default case mismatch \n" );
	}

	printf("\n");
	printf("Switch 5 done by float on case \n");
        switch (1){
                case 0:
                        printf("This is case 0 \n" );
		case 1: //case 1.0 creates error here  
                        printf("This is case 1 \n" );
                case 2:
                        printf("This is case 2\n" );
                default :
                        printf("This is default case mismatch \n" );
	}

	return 0;
}
