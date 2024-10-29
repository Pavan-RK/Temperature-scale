# include <iostream>


int main(){

    int temp;
    
    int result;
    char opraction;

    std::cout<< "enter which opraction you want."<<'\n'<<"if you are converting cleciaus to farenheat the put-- C "<<'\n'<<"else put-- F "<<'\n';
    std::cin>> opraction;

   

        if(opraction == 'C' || opraction == 'c') {
            std::cout<<" enter the temprature in dgree celcius ";
            std::cin>> temp;
            
            temp = (1.8* temp)+32;
            std:: cout<<" result ="<< temp;
            }
            
            else if( opraction =='F'|| opraction == 'f'){
            std::cout<<"enter the temprature in farenheat ";
            std:: cin>> temp;

            temp= (temp - 32)/1.8 ;
            std:: cout<<" result ="<< temp;
            }

            else{
                std::cout<<" pleases enter valead input ";
            }
            
            
      
    
   
    
return 0;
}
   