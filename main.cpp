#include <iostream>
#include <string>
#include <array>
//split array in to sepearte maybe char? 
int main() {
    //use array because the size is known and fixed and takes up less memory than a vector
    std::array<std::string, 5> operators = {
        " + ", " - ", " * ", " / ", 
    };
    
    std::cout<< "please pick an operator from the following list: \n"<< std::endl;
    for(int i =0; i < 4; i++){
        std::cout<< 1+i<<"."<< operators[0+i]<<std::endl;
        
    };

    int choice;
    std::cin >> choice;

    

    //happens after select




    switch (choice)
    {
    case 1:
        /* code */
        if(choice == 1){

            std::cout << "You selected addition. Please input two numbers to add: \n"<<std::endl;
            double num1, num2;
            std::cin >> num1 >> num2;
            double sum = num1 + num2;
            std::cout << num1 << "+" << num2<< sum<<std::endl;   
        }
        break;

    case 2:
        if(choice == 2){
            std::cout << "You selected subtraction. Please input two numbers to subtract: \n"<<std::endl;
            double num1, num2;
            std::cin >> num1 >> num2;
            double difference = num1 - num2;
            std::cout << num1 << "-" << num2 <<difference<<std::endl;
        }
        break;
        case 3: 
            if(choice == 3){
                std::cout << "you selected multiplaction" << std::endl;
                double num1, num2;
                std::cin>> num1 >>num2;
                double product = num1 * num2;
                std::cout<< num1<< "*"<< num2<< product <<std::endl;
                }
                break;

        case 4: 
            if(choice == 4){
                std::cout << "you selected division please input 2 numbers"<< std::endl;
                double num1, num2; 
                std::cin >> num1 >> num2;
                double answer = num1 / num2;
                std::cout<<num1 << "/"<< num2 << std::endl;
                std::cout<<answer;
            } 
    
    default:
        break;
    }
    

    


    
    return 0;
}