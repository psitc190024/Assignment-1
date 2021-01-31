#include <iostream>

using namespace std;//IN DING HEADER FILES
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;


/*
 	Name: Prince Charles
 	Copyright:@2020
 	Author: Prince Charles
 	Date: 31/01/21 09:51
 	Description: This code works for INF SUPERMARKET
*/



int main()
{
 	//VARIABLE DECLARATION/INITIALIZATION

 	string customer_name;  	int customer_id;
 	int quantity;
string buy_item; double customer_money; double balance; const double vat=0.12; double printer_price = 650; double phone_price = 350; double table_price = 95; string item1="Printer"; string item2="Phone"; string item3="Table";
 	double total_cost;  	double total_amount_paid;

 	//END OF VARIABLE DECLARATION



 	//SERVICES OFFERED IN THE COMPANY
 	cout << "We offer two services in our company\n"<<endl;  	cout << "1.Purchasing an item\n"<<endl;  	cout << "2.Making Enquiries\n"<<endl;  	cout << "But for Now, you can only purchase an item\n"<<endl;


 	//CUSTOMER'S NAME

 	cout << "Please what is your Full Name:\n"<<endl;  	getline(cin, customer_name);   	cout <<endl;


 	//CUSTOMER'S UNIQUE ID

cout <<"Please Kindly enter your ID in number\n"<<endl; cin >> customer_id; cout <<endl;
//WHAT CUSTOMER WANTS TO BUY AND LISTING THE PRODUCTS AVAILABLE cout << "Please what do you want to buy\n"<<endl; cout << "We have the following products in stock\n"<<endl; cout << "1.Printer = 650\n"<<endl;
 cout << "2.Phone   = 350\n"<<endl;  cout << "3.Table   = 95\n"<<endl;


 	// MONEY THE CUSTOMER HAS
 	cout << "Please how much do you have now?\n"<<endl;  	cin >> customer_money;  	cout <<endl;

 	//CUSTOMER SELECTS ITEMS TO BUY
 	cout << "Please which item do you want to buy\n"<<endl;  	cin >>buy_item;  	cout<<endl;


 	//QUANTITY OF ITEM THE CUSTOMER WANTS TO BUY  	cout << "Please how many of the item do you want to buy"<<endl;
 	cin >> quantity;  	cout<<endl;


 	//USING IF ELSE IF TO CALCULATE FOR THE CUSTOMER'S DEMAND
if(customer_money < printer_price || customer_money < phone_price || customer_money < table_price)
{
	 	cout <<"Please your money is insufficient to buy this item. Please Try Another Time!\n"<<endl;

}else if(buy_item=="printer" || buy_item=="Printer" || buy_item=="PRINTER"){

	 	total_cost = (printer_price *quantity);
	 	cout <<endl;

	 	cout << "Total cost is: GHc"<< total_cost<<endl;
 	 	cout <<endl;

 	 	total_amount_paid = (total_cost + vat);
 	 	cout <<endl;

 	 	cout <<"Total Amount Paid is: GHc "<<total_amount_paid<<endl;
 	 	cout <<endl;

 	 	balance = customer_money - total_amount_paid;
 	 	cout <<endl;

 	 	cout <<"Balance is: GHc "<<balance<<endl;
 	 	cout <<endl;

 	 	//RECEIPT TO BE ISSUED TO THE CUSTOMER

 	 	cout <<"***CUSTOMER RECEIPT***\n"<<endl;
 	 	cout << "Name of Customer   :    " << customer_name <<endl;  	 	cout << "Customer ID        :    " << customer_id <<endl;  	 	cout << "Item Bought        :    " << item1 <<endl;  	 	cout << "Vat Amount         :    " << vat <<endl;
 	 	cout << "Total Cost         :    " << total_cost <<endl;
cout << "Total Amount Paid  :    " << total_amount_paid <<endl; cout << "Balance            :    " << balance <<endl;
cout<<endl; cout << "THANK YOU FOR TRANSACTING WITH US"<<endl; }else if(buy_item=="phone" || buy_item=="Phone" || buy_item=="PHONE"){

	 	total_cost = (phone_price *quantity);
	 	cout <<endl;

 	 	cout << "Total cost is: GHc"<< total_cost<<endl;
 	 	cout <<endl;

 	 	total_amount_paid = (total_cost + vat);
 	 	cout <<endl;

 	 	cout <<"Total Amount Paid is: GHc "<<total_amount_paid<<endl;
 	 	cout <<endl;

 	 	balance = customer_money - total_amount_paid;
 	 	cout <<endl;

 	 	cout <<"Balance is: GHc "<<balance<<endl;
 	 	cout <<endl;

 	 	//RECEIPT TO BE ISSUED TO THE CUSTOMER

 	 	cout <<"***CUSTOMER RECEIPT***\n"<<endl;
 	 	cout << "Name of Customer   :    " << customer_name <<endl;  	 	cout << "Customer ID        :    " << customer_id <<endl;
 	 	cout << "Item Bought        :    " << item2 <<endl;
cout << "Vat Amount         :    " << vat <<endl; cout << "Total Cost         :    " << total_cost <<endl;
cout << "Total Amount Paid  :    " << total_amount_paid <<endl; cout << "Balance            :    " << balance <<endl;
cout<<endl;
cout << "THANK YOU FOR TRANSACTING WITH US"<<endl;


   }else if(buy_item=="table" || buy_item=="Table" || buy_item=="TABLE"){

 	 	total_cost = (table_price *quantity);
 	 	cout <<endl;

 	 	cout << "Total cost is: GHc"<< total_cost<<endl;
 	 	cout <<endl;

 	 	total_amount_paid = (total_cost + vat);
 	 	cout <<endl;

 	 	cout <<"Total Amount Paid is: GHc "<<total_amount_paid<<endl;
 	 	cout <<endl;

 	 	balance = customer_money - total_amount_paid;
 	 	cout <<endl;

 	 	cout <<"Balance is: GHc "<<balance<<endl;
 	 	cout <<endl;

 	 	//RECEIPT TO BE ISSUED TO THE CUSTOMER

 	 	cout <<"***CUSTOMER RECEIPT***\n"<<endl;
 	 	cout << "Name of Customer   :    " << customer_name <<endl;
cout << "Customer ID        :    " << customer_id <<endl; cout << "Item Bought        :    " << item1 <<endl; cout << "Vat Amount         :    " << vat <<endl; cout << "Total Cost         :    " << total_cost <<endl;
cout << "Total Amount Paid  :    " << total_amount_paid <<endl;
cout << "Balance            :    " << balance <<endl;
 	cout<<endl;  	 	cout << "THANK YOU FOR TRANSACTING WITH US"<<endl;

   }else {

    	    cout << "Invalid Input??????? TRY AGAIN "<<endl;
   }



 	return 0;
}
