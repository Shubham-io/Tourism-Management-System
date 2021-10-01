#include <stdio.h>
#include <stdlib.h>
int choice; // global varible to get details of country
int pNum;   // global varible to get details of numbers of Passengers

void Welcome()
{
    printf("\n********** || Welcome to Tourism Management System || **********\n\n");
    printf("Note: 1.Vaccination Certificate required for travel and tourism\n");
    printf("      2.To select anything enter your choice in terms of numbers as given in options\n\n");
}

int TourType()
{
    printf("What would you like to choose ?\n\n1.India Tour\n2.International Tour\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("You have choose an Indian Tour\n\n");
        break;
    case 2:
        printf("You have choose an International Tour\n\n");
        break;
    default:
        printf("Opps!! Probably you have entered an invalid input");
        exit(0);
        break;
    }
    if (choice == 1)
    {
        return 1;
    }
    else if (choice == 2)
    {
        return 2;
    }
}

void India()
{
    int choose_city;
India:
    printf("Where would you like to go in India !!\n");
    printf("1.New Delhi\n2.Mumbai\n3.Kolkata\n4.Bangalore\n5.Chennai\n6.Hyderabad\n7.Lucknow\n\n");
    scanf("%d", &choose_city);
    switch (choose_city)
    {
    case 1:
        printf("New Delhi - The Capital of India\n");
        break;
    case 2:
        printf("Let's ready to explore Mumbai - The City of Dreams\n");
        break;
    case 3:
        printf("Be Ready to go Kolkata - The City of Joy\n");
        break;
    case 4:
        printf("You have choose Bangalore - IT hub of India\n");
        break;
    case 5:
        printf("You have choose Chennai\n");

        break;
    case 6:
        printf("Ready to go Hyderabad - The City of Pearls\n");
        break;
    case 7:
        printf("Get Ready to explore Lucknow - The Ciy of Nawabs\n");
        break;
    default:
        printf("Invalid input\n");
        printf("Please choose a right option\n\n");
        goto India;
        break;
    }
}
void international()
{
    int choose_country;
inter:
    printf("Where would you like to go !\n");
    printf("1.New York\n2.London\n3.Paris\n4.Singapore\n5.Thailand\n6.Brazil\n7.Dubai\n\n");
    scanf("%d", &choose_country);
    switch (choose_country)
    {
    case 1:
        printf("You have selected New York\n");
        break;
    case 2:
        printf("You have selected London\n");
        break;
    case 3:
        printf("You have selected Paris\n");
        break;
    case 4:
        printf("You have selected Singapore\n");
        break;
    case 5:
        printf("You have selected New Thailand\n");
        break;
    case 6:
        printf("You have selected Brazil\n");
        break;
    case 7:
        printf("You have selected Dubai\n");
        break;
    default:
        printf("Invalid input\n");
        printf("Please choose a right option\n\n");
        goto inter;
        break;
    }
}

void reciept(char Name[], int Age, int AirlineType, int ClassType)
{
    /* Reciepts for indian flights
      ****** Airline charges for Domestic flights (in India)******
 1. IndiGo : Business rs. 8000 or Economy rs. 5999    
   2. Air India Express : Business rs. 7000 or Economy rs. 4999
   3.   GoAir : Business rs. 6000 or Economy rs. 3999  */
    printf("You have successfully booked your ticket\n\n*********** Here is your reciept **********\n\n");
    if (AirlineType == 1 && ClassType == 1 && choice == 1)
    {
        printf("Passenger Name: %s\nAge: %d\nJourney for: India\nAirline - IndiGo\tClass: Business\n", Name, Age);
        printf("\033[1;32mTotal Amount: RS. 8000 x %d = RS. %d\033[0m\n", pNum, 8000 * pNum);
    }
    else if (AirlineType == 1 && ClassType == 2 && choice == 1)
    {
        printf("Passenger Name: %s\nAge: %d\nJourney for: India\nAirline - IndiGo\tClass: Economy\n", Name, Age);
        printf("\033[1;32mTotal Amount: RS. 5999 x %d = RS. %d\033[0m\n", pNum, 5999 * pNum);
    }
    else if (AirlineType == 2 && ClassType == 1 && choice == 1)
    {
        printf("Passenger Name: %s\nAge: %d\nJourney for: India\nAirline - Air India Express\tClass: Business\n", Name, Age);
        printf("\033[1;32mTotal Amount: RS. 7000 x %d = RS. %d\033[0m\n", pNum, 7000 * pNum);
    }
    else if (AirlineType == 2 && ClassType == 2 && choice == 1)
    {
        printf("Passenger Name: %s\nAge: %d\nJourney for: India\nAirline - Air India Express\tClass: Economy\n", Name, Age);
        printf("\033[1;32mTotal Amount: RS. 4999 x %d = RS. %d\033[0m\n", pNum, 4999 * pNum);
    }
    else if (AirlineType == 3 && ClassType == 1 && choice == 1)
    {
        printf("Passenger Name: %s\nAge: %d\nJourney for: India\nAirline - GoAir\tClass: Business\n", Name, Age);
        printf("\033[1;32mTotal Amount: RS. 6000 x %d = RS. %d\033[0m\n", pNum, 6000 * pNum);
    }
    else if (AirlineType == 3 && ClassType == 2 && choice == 1)
    {
        printf("Passenger Name: %s\nAge: %d\nJourney for: India\nAirline - GoAir\tClass: Economy\n", Name, Age);
        printf("\033[1;32mTotal Amount: RS. 3999 x %d = RS. %d\033[0m\n", pNum, 3999 * pNum);
    }
    // Reciepts for international flights
    /*  ****** Airline charges for International flights ******
   1. IndiGo : Business rs. 15000 or Economy rs. 9999 
   2. Air India Express : Business rs. 14000 or Economy rs. 8999
   3. GoAir : Business rs. 16000 or Economy rs. 11000 
  */
    if (AirlineType == 1 && ClassType == 1 && choice == 2)
    {
        printf("Passenger Name: %s\nAge: %d\nJourney for: India\nAirline - IndiGo\tClass: Business\n", Name, Age);
        printf("\033[1;32mTotal Amount: RS. 15000 x %d = RS. %d\033[0m\n", pNum, 15000 * pNum);
    }
    else if (AirlineType == 1 && ClassType == 2 && choice == 2)
    {
        printf("Passenger Name: %s\nAge: %d\nJourney for: India\nAirline - IndiGo\tClass: Economy\n", Name, Age);
        printf("\033[1;32mTotal Amount: RS. 9999 x %d = RS. %d\033[0m\n", pNum, 9999 * pNum);
    }
    else if (AirlineType == 2 && ClassType == 1 && choice == 2)
    {
        printf("Passenger Name: %s\nAge: %d\nJourney for: India\nAirline - Air India Express\tClass: Business\n", Name, Age);
        printf("\033[1;32mTotal Amount: RS. 14000 x %d = RS. %d\033[0m\n", pNum, 14000 * pNum);
    }
    else if (AirlineType == 2 && ClassType == 2 && choice == 2)
    {
        printf("Passenger Name: %s\nAge: %d\nJourney for: India\nAirline - Air India Express\tClass: Economy\n", Name, Age);
        printf("\033[1;32mTotal Amount: RS. 8999 x %d = RS. %d\033[0m\n", pNum, 8999 * pNum);
    }
    else if (AirlineType == 3 && ClassType == 1 && choice == 2)
    {
        printf("Passenger Name: %s\nAge: %d\nJourney for: India\nAirline - GoAir\tClass: Business\n", Name, Age);
        printf("\033[1;32mTotal Amount: RS. 16000 x %d = RS. %d\033[0m\n", pNum, 16000 * pNum);
    }
    else if (AirlineType == 3 && ClassType == 2 && choice == 2)
    {
        printf("Passenger Name: %s\nAge: %d\nJourney for: India\nAirline - GoAir\tClass: Economy\n", Name, Age);
        printf("\033[1;32mTotal Amount: RS. 11000 x %d = RS. %d\033[0m\n", pNum, 11000 * pNum);
    }
    printf("\n*********** Wishing you a Happy Journey :) **********\n\n");
}
int details() // funtion
{
    struct TouristsDetails
    {
        char name[50];
        int age;
        int country;
        int passportNO;
        int airline;
        int class;
    } pName, pAge, pCountry, ppNO, pAirline, pClass;
    printf("\n\nPlease submit your details for the further process\n");
    printf("How many peoples are there ?\n");
    scanf("%d", &pNum);
    if (pNum > 10)
    {
        printf("Can't book a ticket for more than %d passengers\n", pNum);
        printf("Only 10 passengers can travel together\n");
        exit(1);
    }

    printf("Enter that name which you want to print on reciept\n");
    scanf("%s", &pName.name);
    age:
    printf("Enter your Age\n");
    scanf("%d", &pAge.age);
    if (pAge.age < 18)
    {
        printf("You are under 18 !!!\n");
        goto age;
    }

pass:
    printf("Enter your Passport NO.\n");
    scanf("%d", &ppNO.passportNO);
    if (ppNO.passportNO < 9999999)
    {
        printf("Invalid Passport Number enterd !\nYOU CAN'T TRAVEL BY USING THIS PASSPORT NO.\n");
        printf("Please enter your valid information !!\n\n");
        goto pass;
    }
    if (choice == 1)
    {
        printf("\n**************************** Packages for INDIA Tour ******************************\n\n");
        printf("IndiGo: Business CL Rs. 8,000\t\t\tIndiGo: Economy CL Rs. 5,999\n");
        printf("GoAir: Business CL Rs. 6,000\t\t\tGoAir: Economy CL Rs. 3,999\n");
        printf("Air India Express: Business CL Rs. 7,000\tAir India Express: Economy CL Rs. 4,999\n\n");
        printf("**************************** Packages for INDIA Tour ******************************\n\n");
    }
    else if (choice == 2)
    {
        printf("\n************************** Packages for International Tour **************************\n\n");
        printf("IndiGo: Business CL Rs. 15,000\tIndiGo: Economy CL Rs. 9,999\n");
        printf("GoAir: Business CL Rs. 1,6000\tGoAir: Economy CL Rs. 11,000\n");
        printf("Air India Express: Business CL Rs. 14,000\tAir India Express: Economy CL Rs. 8,999\n\n");
        printf("************************** Packages for International Tour **************************\n\n");
    }

    printf("Which airline would you like to choose ?\n1. IndiGo\t2. Air India Express\t3. GoAir\n");
    scanf("%d", &pAirline.airline);
    printf("Which Class would you like to choose ?\n1. Business\t2. Economy\n");
    scanf("%d", &pClass.class);
    reciept(pName.name, pAge.age, pAirline.airline, pClass.class);
}

int main()
{
    int result;
    char action;
    Welcome();
    result = TourType();
    if (result == 1)
    {
        India();
    }
    else if (result == 2)
    {
        international();
    }
    details();
    // reciept funtion will be call through details function
    printf("Enter 'q' for quit, and '1' for main menu\n");
    scanf(" %c", &action);
    if (action == 'q')
    {
        printf("Quitting the program.......\n");
    }
    else if (action == '1')
    {
        main();
    }

    return 0;
}

/*  ****** Airline charges for Domestic flights (in India)******

  IndiGo : Business rs. 8000 or Economy rs. 5999  
  Air India Express : Business rs. 7000 or Economy rs. 4999
   GoAir : Business rs. 6000 or Economy rs. 3999 
   Vistara : Business rs. 5000 or Economy rs. 2999 
  

   ****** Airline charges for International flights ******
  IndiGo : Business rs. 15000 or Economy rs. 9999 
  Air India Express : Business rs. 14000 or Economy rs. 8999
   GoAir : Business rs. 16000 or Economy rs. 11000 
   Vistara : Business rs. 14000 or Economy rs. 7999 
*/
