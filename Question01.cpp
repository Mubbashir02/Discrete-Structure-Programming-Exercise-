//Muhammad Mubbashir
//SP20-BSCS-0084
#include <stdio.h>


int main()
{  
   int input1,input2;
   printf("Enter value of p in binary: ");   
    scanf("%d", &input1);
    printf("Enter value of q in binary: ");  
    scanf("%d", &input2);
    printf("-----------------------");
    if((input1==0||input1==1)||(input2==1||input2==0))
	{
	
     
   printf("\n The conjuction of p and q is: %d",(input1&&input2));   
   printf("\n The disjuction of p or q is: %d",(input1||input2));    
   printf("\n The Exclusive of p or q is: %d",(input1^input2));    
    
    	if(input1==1 && input2==0)
		{
     	 printf("\n The conditional of p and q is: 0");    
	    }
		else{
	     	 printf("\n The conditional of p and q is: 1");
		  }
	  
	  
		 if((input1==1 && input2==1)||(input1==0 && input2==0)){                  
	     	 printf("\n The biconditional of p and q is: 1");    
		 }
	     else {
	     	 printf("\n The biconditional of p and q is: 0");      
		 }
		}
	      else{
		printf("Please Input 0 and 1");
	     }
	 
	 
}
