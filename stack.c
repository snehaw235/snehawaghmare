#include<stdio.h>
#include<stdlib.h>

int main()
{
    int stack[10],n,x,Top=-1;
    printf("Enter the size of a stack:");
    scanf("%d",&n);
    
    while(1)
    {
        printf("\n1.Push:insertion of an element");
        printf("\n2.Pop: deletion  of an element");
        printf("\n3.Underflow");
        printf("\n4.Overflow");
        printf("\n5.Peek");
        printf("\n6.Display");
        printf("\n7.Exit");
        
        
        int choice;
        printf("\nEnter the choice:");
        scanf("%d",&choice);
        
        switch(choice)
        {   
            
            
            case1:
            //push operation
            
            
                if(Top==n-1)
                {
                    printf("\nOverflow!!");
                }
                else
                {
                    printf("\nEnter element to the stack:");
                    scanf("%d",&x);
                    Top=Top+1;
                    stack[Top]=x;
                }
            
            break;
            
            
            
            case2:
            //pop operation
            
                
                if(Top==-1)
                {
                    printf("\n\nstack is empty.Underflow!!");
                    
                }
                else
                {
                    printf("\nThe deleted element is %d",stack[Top]);
                    Top--;
                
                }
            
            break;
          
            
            
            case3:
            //underflow condition
            
                 if(Top==-1)
                 {
                    printf("\nstack is empty. Underflow!!");
                 }
                 else
                 {
                   printf("Not underflow");
                 }    
            
            break;
            
            
            
            case4:
            //overflow condition
            
               if(Top==n-1)
               {
                  printf("\nstack is full. Overflow!!");
               }
               else
               {
                  printf("Not overflow");
               }
            break;
            
            
            
            case5:
            //peek condition
            
                if(Top==-1)
                {
                  printf("Underflow!!");  
                }
               else
                {
                    printf("\nelement at the top of stack:%d\n",stack[Top]);
                }
            break;
            
            
            
            case6:
            //display
            
               if(Top==-1)
               {
                  printf("\nUnderflow!!");
               }
               else
               {
                   printf("\nelements present in the stack are:");
                   for(int i=Top;i>=0;i--)
                   {
                     printf("%d\n",stack[i]);
                   }
                 
               }
            break;
            
            
            
            case7:
                exit(0);
            break;    
            
            default:
                      printf("Invalid choice!!");
            
        
            
        }//switch loop
        
    }//while loop
    return 0;
}//main loop