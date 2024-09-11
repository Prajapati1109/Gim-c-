#include<stdio.h>

   int main (){
   	
   	 int score;
   	 char grade;
   	 
   	printf("Enter The Percentage:");
   	scanf("%d",&score);
   	
     grade =(score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';

   
    printf("The grade is: %c\n", grade);
    
     switch(grade){
    	
    	case 'A':
    	printf("Excellent work\n");
    	break;
    	
    	case 'B':
    	printf("Well Done\n");
    	break;
    	
    	case 'C':
    	printf("Good job\n");
    	break;
    	
    	case 'D':
    	printf("You passed,but you could do better\n");
    	break;
    	
    	case 'E':
    	printf("You passed,but,but need improvement\n");
    	break;
    	
    	case 'F':
    	printf("Sorry,you faild\n");
    	break;
    	
    	default:
        printf("Invalid choice");
        break;
        

	}
         if(grade!='F'){
       	printf("Congratulation you are eligible for the level");
		}
		else{
			printf("Please try again next time");
		}

     
}
