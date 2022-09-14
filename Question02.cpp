//Muhammad Mubbashir
//SP20-BSCS-0084
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Value1[40];
    char Value2[40];
    char n1 = '0';
    char n2 = '1';
    char Result[40];
    int Value_lenght;
    
	printf("\n Enter Bitwise Value 1: ");    
    scanf("%s",&Value1);
	Value_lenght=strlen(Value1);            
   	printf("\n Enter Bitwise Value 2: ");
    scanf("%s",&Value2);
	printf("\n");
     //---------------------------XOR------------------
    for (int i = 0; i < Value_lenght; i++) 
        { 
            
            if (Value1[i] == Value2[i]) 
            {
            	Result[i] = n1; 
			}
                
            else
            {
            	Result[i] = n2; 
                
			}
               
        } 
        printf("bitwise XOR is: %s\n", Result); 
            //---------------------------AND------------------
       for (int i = 0; i < Value_lenght; i++) 
        { 
            
            if (Value1[i]=='1'  &&  Value2[i]=='1') 
		    {
            	Result[i] = n2; 
			}
                
            else
            {
            	Result[i] = n1; 
                
			}
               
        } 
        printf("Biwise AND is: %s\n", Result);  
    
            //---------------------------OR------------------
        for (int i = 0; i < Value_lenght; i++) 
        { 
            
            if (Value1[i]=='0'  &&  Value2[i]=='0') 
		    {
            	Result[i] = n1; 
			}
            else
            {
            	Result[i] = n2; 
                
			}
               
        } 
        printf("Biwise OR is: %s\n", Result);  
}
