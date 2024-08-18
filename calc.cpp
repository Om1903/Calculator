
#include<iostream>
using namespace std;

int main(){
   double num1,num2;
   char op;
   cout<<"Enter the operator"<<endl;
   cin>>op;
   cout<<"enter both numbers"<<endl;
   cin>>num1>>num2;
    int p1=1;
     int p2=1;
     int sum1=0;
     int sum2=0;
   switch(op){
    case'+':
    cout<<num1+num2<<endl;
    break;
    case'-':
    cout<<num1-num2<<endl;
    break;
    case'*':
    cout<<num1*num2<<endl;
    break;
    case'/':
    if(num2==0){
    cout<<"num2 can't be zero";
    }
     else{
    cout<<num1/num2<<""<<endl;
    }
    break;
      case'#':

        
       
   
    
    for(int i=1;i<=num1;i++){
        
        sum1=sum1+i;
        
    }
     cout<<sum1<<""<<endl;
     

     
    
    for(int q=1;q<=num2;q++){
        
        sum2=sum2+q;
        
    }
     cout<<sum2<<""<<endl;
     break;
    case'&':

   

   
     for(int k=1;k<=num1;k++){
        if((k*k)==num1){
            cout<<k<<""<<endl;

           break;
        }
        
            if(k==num1){
                cout<<"The number(num1) doesn't have perfect root"<<endl;
            }
        }
         for(int i=1;i<=num2;i++){
        if((i*i)==num2){
            cout<<i<<""<<endl;

           break;
        }
        
            if(i==num2){
                cout<<"The number(num2) doesn't have perfect root";
            }
        }
        break;
         case'!':
    

   
    for(int i=1;i<=num1;i++){
        p1=p1*i;
        }
        cout<<p1<<""<<endl;

    
    

    
    
    for(int j=1;j<=num2;j++){
        p2=p2*j;

    }
    cout<<p2<<""<<endl;
    break;

       


    
       



    



   

    
    



    
   }

    return 0;
}
