#include<bits/stdc++.h>
using namespace std;
class Item{		//Item
	string itemName;
	string itemDiscription;
	int cost;
	int discount;
	public:
	int count;
		Item(){
		}
		Item(string name, string discription){ 		//item detail
			this->itemName = name;
			this->itemDiscription = discription;
		}
		void setCost(int cost){
			this->cost = cost;
		}
		void setDiscount(int discount){
			this->discount = discount;
		}
		double getPrice(){
//			return cost-discount;
			return cost;
		}
		double getDiscount(){
			return discount;
		}
		void getDetails(){
			cout<<itemName<<endl;
			cout<<itemDiscription<<endl;
			cout<<cost<<endl;
		}
		
};
class Employee{
	int id;
	string name;
	string role;
	int salary;
	public:
	Employee(){
	}
	Employee(string name, string role, int salary, int id){
		this->name = name;
		this->role = role;
		this->salary = salary;
		this->id = id;
	}
};
class VegetableBill{		//vegetable Bill
	public:
	Item item[];
	double totalPrice;
	vector<Item> bills;	//array of item for bills
		VegetableBill(){
		}
		VegetableBill(Employee clerk){
			cout<<"Total Items : "<<bills.size();
			cout<<"Total Price : "<<totalPrice;
		}
		void add(Item i){
			bills.push_back(i);
		}
		double getTotal(){
			double total=0;
			for(int index=0;index<bills.size();index++){
				total+=bills[index].getPrice();
			}
			totalPrice = total;
			return totalPrice;
		}
		void printReceipt(){
			for(int index=0;index<bills.size();index++)
				bills[index].getDetails();
		}
		
};
class DiscountBill : public VegetableBill{		//discountBill
	public:
		double discountPrice;
		DiscountBill(Employee clerk, bool prefered){
			if(prefered){
				cout<<"Total Items : "<<bills.size();
				cout<<"Total Price : "<<totalPrice;
				cout<<"Discounted Price: "<<discountPrice;
			}
			else
			cout<<"No any discount available";	
		}
		int getDiscountCount(){
//			returns the number of items that were discounted, if any
			return 0;
		}
		double getDiscountAmount(){
//			returns the total discount for this list of items, if any
			return 0;
		}
		double getDiscountPercent(){
//			returns the percent of the total discount as a percent of what the total would have been otherwise
			return 0;
		}
		
};
int main(){
	
}
