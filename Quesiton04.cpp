//Muhammad Mubbashir
//SP20-BSCS-0084
#include <stdio.h>  
#include <stdlib.h> 
int main()  
{  
    
    int Domain_Range=0 ,Co_Domain_Range=0,count1=0, count2=0; 
    int Domain[Domain_Range],Co_Domain[Co_Domain_Range]; 
    printf("Enter Range for Domain: "); 
    scanf("%d",&Domain_Range); 
    printf("\n Input elements for domain([1,2,,...,n]): \n"); 
    for(int i=0;i<Domain_Range;i++){ 
        scanf("%d",&Domain[i]); 
        if(Domain[i]>=0){
    		count1++;
        }
        else{
	           
	        printf("\nplx enter positive number");
    	    exit(0);
        }
    } 
    printf("Enter Range for Co_domain: "); 
    scanf("%d",&Co_Domain_Range); 
    printf("\n Input elements for codomain(set of integers): \n "); 
    for(int i=0;i<Co_Domain_Range;i++){ 
        scanf("%d",&Co_Domain[i]); 
        count2++;
    } 
    
	//--------------print------------
	printf("\n Domain "); 
    for(int i=0;i<Domain_Range;i++){ 
        printf("\n %d",Domain[i]); 
    } 
	     
    printf("\n Co_domain "); 
    for(int i=0;i<Co_Domain_Range;i++){ 
        printf("\n %d",Co_Domain[i]); 
        
    }
	
	if(count1>=count2){
	   	 printf("\n\nIt is onto function ");
	   }
	   else{
	   	printf("\n\nIt is not onto function ");
	   }

}
