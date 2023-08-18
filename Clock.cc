#include <iostream>
#include <windows.h>

int main(){
    int hour, minute, second, a, err;
    err = a = 0;
    while(err == 0){
        std::cout << "Enter hour : ";
        std::cin >> hour;
        std::cout << std::endl;
        std::cout << "Enter minute : ";
        std::cin >> minute;
        std::cout << std::endl;
        std::cout << "Enter second : ";
        std::cin >> second;
        if(hour<24 && minute<60 && second<60){
            err ++;
        }
        else{
            system("cls");
        }
    }
    while(a == 0){
        system("cls");
        std::cout << hour << " : " << minute << " : " << second << std::endl;
        Sleep(1000);
        second ++;
        if(second > 59){
            minute ++;
        }
        if(minute > 59){
            minute = 0;
            hour ++;
        }
        if(hour > 24){
            hour = 0;
        }
    }
    return 0;
}