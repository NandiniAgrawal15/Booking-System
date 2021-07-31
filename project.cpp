#include <iostream>
#include<vector>
#include<map>
#include<string.h>
using namespace std;
class Booking
{
 protected:
 string name;
 string address;
 int age,choiceH,nights;
 long long int phoneNumber;
 string paymentMode="cash";
 float Cost;
public:
 void paymentModeA();
 int menuDriven();
};
int Booking::menuDriven()
{
 cout<<"******************WELCOME TO THE BOOKING SYSTEM MINIATURE**************"<<endl;
 cout<<"******************WE PROVIDE THE FOLLOWING SERVICES********************"<<endl;
 cout<<"1. HOTEL BOOKING"<<endl;
 cout<<"2. CAB BOOKING "<<endl;
 cout<<"3. FLIGHT BOOKING "<<endl;
 cout<<"ENTER YOUR CHOICE "<<endl;
 cin>>choiceH;
 return choiceH;
}
class Hotel:public Booking
{
 int numberOfOcupants;
 int roomBooked;
 string roomType[100];
 static int bookRoom;
 string typesOfRoom[4]={"Deluxe","super Deluxe","Family suit","couple suit"};
 int costOfRoom[4]={3000,5000,7000,3500};
 int totalNumberofRooms=100;
 int costType[100];
 int OccupiedRooms[4];
 int roomNumber;
 float payment;
 char checkIn[10],checkOut[10];
 vector<string>hotelName;
 vector<string>cityName;
public:
 int choice;void cityOfTravel();
 void billCalculator();
 int intialRoomBooked[100]={0};
 void checkPayment();
 int uniqueCode();
 void TypeOfroom();
 void roomBook();
 void recordFeedback();
 bool roomAvailable();
 void roomType1();
 int getCostAndType(int roomNum);
 int menuDriven();
 void Confirmation(int m);
 void getDetails();
 void addCity();
 void greetings();
 void choosen(int s);
};
void Hotel::billCalculator(){
 cout<<"you reservation has been confirmed!"<<endl;
 cout<<"check-in date:";
 for(int i=0;i<sizeof(checkIn);++i){
 cout<<checkIn[i];
 }
 cout<<endl;
 cout<<"check-out date:";
 for(int i=0;i<sizeof(checkOut);++i){
 cout<<checkOut[i];
 }
 cout<<endl;
 switch(choiceH){
 case 1:
 cout<<"Cost to be Paid:"<<6000*nights<<endl;
 cout<<endl;
 cout<<"Thanks for booking"<<endl;
 break;
 case 2:
 cout<<"Cost to be Paid:"<<5500*nights<<endl;
 cout<<endl;
 cout<<"Thanks for booking"<<endl;
 break;
 case 3:
 cout<<"Cost to be Paid:"<<4300*nights<<endl;
 cout<<endl;
 cout<<"Thanks for booking"<<endl;
 break;
 case 4:
 cout<<"Cost to be Paid:"<<5200*nights<<endl;
 cout<<endl;
 cout<<"Thanks for booking!"<<endl;
 break;
 case 5:
 cout<<"Cost to be Paid:"<<8700*nights<<endl;
 cout<<endl;
 cout<<"Thanks for booking!"<<endl;
 break;
 case 6:
 cout<<"Cost to be Paid:"<<6500*nights<<endl;
 cout<<endl;
 cout<<"Thanks for booking!"<<endl;
 break;
 }
}
void Hotel::choosen(int s){
 switch(s){
 case (1):
 cout<<"1.raddison blue-6000/-"<<endl;
 cout<<"2.The Grand Heritage-5500/-"<<endl;
 cout<<"3.Crown Plaza-4300/-"<<endl;
 cout<<"4.ITC maurya-5200/-"<<endl;
 cout<<"5.Whitepod Suites-8700/-"<<endl;
 cout<<"6.The Caves Resort-6500/-"<<endl;
 break;
 case (2):
 cout<<"1.Whitepod Hotel-6000/-"<<endl;
 cout<<"2.The Caves Resort-5500/-"<<endl;
 cout<<"3.Hotel de Glace-4300/-"<<endl; cout<<"4.The Oberoi-5200/-"<<endl;
 break;
 case (3):
 cout<<"1.Ice Hotel-6000/-"<<endl;
 cout<<"2.Juvet Landscape Hotel-5500/-"<<endl;
 cout<<"3.Amangiri Resort-4300/-"<<endl;
 cout<<"4.Viceroy Hotel-5200/-"<<endl;
 cout<<"5.The Royal Retreat Resort and spa-8700/-"<<endl;
 cout<<"6.The Raddison Era-6500/-"<<endl;
 break;
 case (4):
 cout<<"1.Sorrisniva Iglo Hotel-6000/-"<<endl;
 cout<<"2. Ubud Hanging Gardens Hotel-5500/-"<<endl;
 cout<<"3The Mirrorcube Tree House Hotel-4300/-"<<endl;
 cout<<"4. Hotel Villa Honegg-5200/-"<<endl;
 break;
 case (5):
 cout<<"1.Fairy Chimney Hotel-6000/-"<<endl;
 cout<<"2.Atholl Palace Hotel-5500/-"<<endl;
 cout<<"3.Barin Ski Resort-4300/-"<<endl;
 cout<<"4.Air Hotel-5200/-"<<endl;
 break;
 case (6):
 cout<<"1.Jade Screen Hotel-6000/-"<<endl;
 cout<<"2.Orient Express Safari Camp-5500/-"<<endl;
 cout<<"3.Hotel Endemico-4300/-"<<endl;
 cout<<"4.Hotel Jested-5200/-"<<endl;
 cout<<"5. The Hertiage- 8700/-"<<endl;
 break;
 }
 cout<<endl;
 cout<<endl;
 cout<<"please enter your choice of hotel:";
 cin>>choiceH;
 cout<<endl;
 cout<<"please enter the number of nights:";
 cin>>nights;
 cout<<endl;
 cout<<endl;
 }
void Hotel::cityOfTravel()
{
 cout<<"Please choose the city of your Stay"<<endl;
 for(auto it=cityName.begin();it!=cityName.end();it++)
 cout<<*it<<endl;
 cout<<endl<<"Please enter your choice(numeric only):";
 cin>>choice;
 cout<<"Here are the list of hotels for the choosen state"<<endl<<endl;;
}
void Hotel::greetings(){
 cout<<"<WELCOME TO HOTEL BOOKING SYSTEM>"<<endl;
 cout<<"please enter date of check in(DD/MM/YYYY):";
 cin>>checkIn;
 cout<<"please enter date of check out(DD/MM/YYYY):";
 cin>>checkOut; // delay(5*1000);
 }
void Hotel::addCity(){
 cityName.push_back("1.Delhi");
 cityName.push_back("2.Mumbai");
 cityName.push_back("3.Banglore");
 cityName.push_back("4.Agra");
 cityName.push_back("5.Goa");
 cityName.push_back("6.Jaipur");
 }
void Hotel::getDetails()
{
 cout<<"enter NAME : "<<endl;
 cin>>name;
 cin.ignore();
 cout<<" ENTER ADDRESS : "<<endl;
 cin>>address;
 cin.ignore();
 cout<<"enter phone number : "<<endl;
 cin>>phoneNumber;
 cout<<" enter AGE : "<<endl;
 cin>>age;
}
int Hotel::menuDriven()
{
 int m;
 cout<<"PRESS 1 FOR PAYMENT "<<endl;
 cout<<"PRESS 2 FOR EXIT"<<endl;
 cin>>m;
 switch(m)
 {
 case 1: checkPayment();
 case 2: exit(0);
 }
}
void Hotel::checkPayment()
{
 getDetails();
 cout<<"ENTER THE ROOM NUMBER FOR WHICH YOU WANT TO PAY"<<endl;
 cin>>roomNumber;
 cout<<"Pay the price "<<endl;
 int costM;
 if((roomNumber>=0)&&(roomNumber<5))
 {
 cout<<costOfRoom[0]<<endl;
 costM=costOfRoom[0];
 }
 else if((roomNumber>=5)&&(roomNumber<10))
 {
 cout<<costOfRoom[1]<<endl;
 costM=costOfRoom[1];
 }
 if((roomNumber>=10)&&(roomNumber<15))
 {
 cout<<costOfRoom[2]<<endl;
 costM=costOfRoom[2];
 }
 if((roomNumber>=15)&&(roomNumber<20))
 {
 cout<<costOfRoom[3]<<endl;
 costM=costOfRoom[3];
 }
 cout<<"SELECT PAYMENT MODE :"<<endl;
 cout<<"1. CASH 2. CREDIT CARD 3. DEBIT CARD 4.PAYTM 5.BHIM UPI"<<endl; cout<<"*write the type"<<endl;
 cin>>paymentMode;
 cout<<"enter the amount"<<endl;
 int amount ;
 cin>>amount;
 intialRoomBooked[roomNumber-1]=1;
 if(amount==costM)
 {
 Confirmation(1);
 }
 else
 {
 Confirmation(0);
 }
}
void Hotel::Confirmation(int r)
{
 if(r==1)
 {
 cout<<"Payment Received "<<endl;
 }
 else
 {
 cout<<"OOPS! YOU DIDN'T PAID"<<endl;
 }
}
int Hotel::getCostAndType(int Roomnum)
{
 cout<<"Type "<<roomType[Roomnum-1]<<endl;
 cout<<"Cost "<<costType[Roomnum-1]<<endl;
}
void Hotel::roomType1()
{
 int i;
 for(i=0;i<5;i++)
 {
 roomType[i]=typesOfRoom[0];
 costType[i]=costOfRoom[0];
 }
 for(i=5;i<10;i++)
 {
 roomType[i]=typesOfRoom[1];
 costType[i]=costOfRoom[1];
 }
 for(i=10;i<15;i++)
 {
 roomType[i]=typesOfRoom[2];
 costType[i]=costOfRoom[2];
 }
 for(i=15;i<20;i++)
 {
 roomType[i]=typesOfRoom[3];
 costType[i]=costOfRoom[0];
 }
}
int Hotel::bookRoom=0;
bool Hotel::roomAvailable()
{
 cout<<"FOLLOWING ROOMS ARE AVAILABLE"<<endl;
 int i;
 for(i=0;i<20;i++)
 {
 if(intialRoomBooked[i]==0)
 {
 cout<<i+1<<" "<<roomType[i]<<endl;
 } }
 cout<<"PRESS NUMBER WHICH YOU ROOM YOU WANT TO BOOK"<<endl;
 cin>>roomBooked;
 getCostAndType(roomBooked);
 menuDriven();
}
void Hotel::TypeOfroom()
{
 cout<<"We have 4 type of rooms"<<endl;
 int i;
 for(i=0;i<4;i++)
 {
 cout<<typesOfRoom[i]<<" : "<<costOfRoom[i]<<endl;
 }
}
class Room:public Hotel
{
 int roomNumber;
 string checkIn;
 string checkOut;
public:
 void roomConfirmation();
 void checkIncheckOutDate();
};
class Flight
{
private:
 vector<string>cityName;
 vector<float>CostOfTravel;
 vector<string>typeOfFlight;
 vector<string>TypeOfMeal;
 vector<string>SeatType;
 float PaymentAmount;
 float Discount;
 int flightType,flightCity,flightMeal;
public:
 void addCity();
 void addCostOfTravel();
 void addtypeOfFlight();
 void addTypeOfMeal();
 void addSeatType();
 void Payment();
 void Confirmation(int z);
 void DiscountOffered();
 void add();
 void ChooseFlightType();
};
void Flight::Payment()
{
 cout<<"AMOUNT TO BE PAID "<<endl;
 int x=(CostOfTravel[flightCity]) +1500;
 cout<<x<<endl;
 cout<<"1. pay "<<endl;
 cout<<"2. exit"<<endl;
 int m;
 cin>>m;
 switch(m)
 {
 case 1: Confirmation(x);
 default: exit(0);
 }
}
void Flight::Confirmation(int p)
{
 cout<<"enter amount you paid"<<endl;
 int amount; cin>>amount;
 if(amount==p)
 {
 cout<<"BOOKING SUCCESSFUL"<<endl;
 }
 else
 {
 cout<<"BOOKING NOT CONFIRMED "<<endl;
 }
}
void Flight::addCity()
{
 cityName.push_back("Delhi");
 cityName.push_back("Mumbai");
 cityName.push_back("Banglore");
 cityName.push_back("Agra");
 cityName.push_back("Goa");
 cityName.push_back("Jaipur");
}
void Flight::addCostOfTravel()
{
 for(auto itr=0;itr<6;itr++)
 {
 int m=rand()%5000+1100;
 CostOfTravel.push_back(m);
 }
}
void Flight::addtypeOfFlight()
{
 typeOfFlight.push_back("Spicejet");
 typeOfFlight.push_back("Indigo");
 typeOfFlight.push_back("Air India");
 typeOfFlight.push_back("Trujet");
 typeOfFlight.push_back("Go air");
}
void Flight::addTypeOfMeal()
{
 TypeOfMeal.push_back("NorthIndian");
 TypeOfMeal.push_back("SouthIndian");
 TypeOfMeal.push_back("Chinese");
 TypeOfMeal.push_back("Japanese");
 TypeOfMeal.push_back("Italian");
 TypeOfMeal.push_back("Mexican");
}
void Flight::addSeatType()
{
 SeatType.push_back("Business class");
 SeatType.push_back("Economic class");
}
void Flight::add()
{
 addCity();
 addCostOfTravel();
 addSeatType();
 addTypeOfMeal();
 addtypeOfFlight();
}
void Flight::ChooseFlightType()
{
 vector<string>::iterator i;
 int x=0;
 for(i=cityName.begin();i<cityName.end();i++)
 {
 cout<< x<<" "<<*i<<endl;
 x++;
 } x=0;
 cout<<"***********CHOOSE CITY***************"<<endl;
 cin>>flightCity;
 for(i=typeOfFlight.begin();i<typeOfFlight.end();i++)
 {
 cout<<x<<" "<<*i<<endl;
 x++;
 }
 x=0;
 cout<<"************ENTER FLIGHT TYPE********"<<endl;
 cin>>flightType;
 for(i=TypeOfMeal.begin();i<TypeOfMeal.end();i++)
 {
 cout<<x<<" "<<*i<<endl;
 }
 cout<<"************ENTER Meal TYPE********"<<endl;
 cin>>flightMeal;
}
class Cab
{
 string city[10]={"1.Delhi","2.Mumbai","3.Bangalore","4.Chennai","5.Hyderabad","6.Kolkata","7.Ahmedabad",
"8.Jodhpur","9.Visakhapatnam","10.Srinagar"};
 string hb[3]={"\t\t1.Wagon R\t\t\t","\t\t2.Celerio\t\t\t"};
 int rhb[3]={10,12};
 string sedan[3]={"\t\t1.Swift Dzire\t\t","\t\t2.Hyundai Xcent\t\t"};
 int rsedan[3]={12,13};
 string suv[3]={"\t\tErtiga\t\t\t","\t\tInnova\t\t\t"};
 int rsuv[3]={16,14};
 int st_city;
 int end_city;
 int car_type;
 int car;
public:
 void Payment(int ch);
 bool chooseCity();
 void chooseCabType();
};
void Cab::chooseCabType()
{
 cout<<"\n\t\tChoose from the following car types:"<<endl;
 cout<<"\t\t1.Hatchback"<<endl;
 cout<<"\t\t2.Sedan"<<endl;
 cout<<"\t\t3.SUV"<<endl;
 cout<<"\t\tEnter the serial number of your choice: ";
 cin>>car_type;
 Payment(car_type);
}
void Cab::Payment(int car_type)
{
 int distance;
 int cost;
 if (car_type==1)
 {
 cout<<"\n\t\tName\t\t\t"<<"Cost per km"<<endl;
 for (int i=0;i<2;i++)
 {
 cout<<hb[i];
 cout<<rhb[i]<<endl;
 }
 cout << "\n\tChoose the number belonging to the name of the car: ";
 cin>>car;
 cout<<"\n\t\tEnter total number of kms you want to travel:";
 cin>>distance;
 if(car==1){
 if(distance>=70)
 cost=3000+(distance-70)*10; else
 cost=3000;
 }
 else{
 if(distance>=70)
 cost=3000+(distance-70)*12;
 else
 cost=3000;
 }
 cout<<"\n\t\tYour total cost for the trip will be:"<<cost;
 }
 if (car_type==2)
 {
 cout<<"\n\t\tName\t\t\t"<<"Cost per km"<<endl;
 for (int i=0;i<2;i++)
 {
 cout<<sedan[i];
 cout<<rsedan[i]<<endl;
 }
 cout << "\n\tChoose the number belonging to the name of the car: ";
 cin>>car;
 cout<<"\n\t\tEnter total number of kms you want to travel:";
 cin>>distance;
 if(car==1){
 if(distance>=70)
 cost=7000+(distance-70)*12;
 else
 cost=7000;
 }
 else{
 if(distance>=70)
 cost=10000+(distance-70)*13;
 else
 cost=7000;
 }
 cout<<"\n\t\tYour total cost for the trip will be:"<<cost;
 }
 if (car_type==3)
 {
 cout<<"\n\t\tName\t\t\t"<<"Cost per km"<<endl;
 for (int i=0;i<2;i++)
 {
 cout<<suv[i];
 cout<<rsuv[i]<<endl;
 }
 cout << "\n\tChoose the number belonging to the name of the car: ";
 cin>>car;
 cout<<"\n\t\tEnter total number of kms you want to travel:";
 cin>>distance;
 if(car==1){
 if(distance>=70)
 cost=10000+(distance-70)*16;
 else
 cost=10000;
 }
 else{
 if(distance>=70)
 cost=10000+(distance-70)*14;
 else
 cost=10000;
 }
 cout<<"\t\tYour total cost for the trip will be:"<<cost;
 }
}bool Cab::chooseCity()
{
 int i;
 cout<<"*****************SELECT YOUR CITY************"<<endl;
 for(i=0;i<10;i++)
 {
 cout<<" "<<city[i]<<endl;
 }
 cout<<"\t\tEnter starting city(numeric): ";
 cin>>st_city;
 cout<<"\t\tEnter destination city: ";
 cin>>end_city;
 if(st_city<0 ||st_city>10)
 {
 cout<<"WRONG INPUT"<<endl;
 return false;
 }
 if(end_city<0 ||end_city>10)
 {
 cout<<"WRONG INPUT"<<endl;
 return false;
 }
 return true;
}
int main()
{
 Booking b1;
 int choice = b1.menuDriven();
 if(choice==1)
 {
 Hotel h1;
 h1.addCity();
 h1.greetings();
 h1.cityOfTravel();
 h1.choosen(h1.choice);
 h1.TypeOfroom();
 h1.roomType1();
 h1.roomAvailable();
 }
 else if(choice==3)
 {
 Flight f1;
 f1.add();
 f1.ChooseFlightType();
 f1.Payment();
 }
 else if(choice==2)
 {
 Cab c1;
 if(c1.chooseCity())
 {
 c1.chooseCabType();
 }
 else
 {
 exit(0);
 }
 }
 else {
 exit(0);
 }
 return 0;
}
