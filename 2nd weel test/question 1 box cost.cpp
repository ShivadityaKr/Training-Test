#include<iostream>
using namespace std;
class Flute{		//flute
	public:
		int GSM;	//assigning it default value 
		int extraGSM;
		Flute(){
			GSM = 10;  //assigned a default value 10
		}
};
class FluteA : public Flute{ 	//A
	public:
		FluteA(){
			this->extraGSM = 10;
		}
};
class FluteB : public Flute{	//B
	public:
		FluteB(){
			this->extraGSM = 30;
		}
};
class FluteC : public Flute{	//C
	public:
		FluteC(){
			this->extraGSM = 20;
		}
};
class FluteE : public Flute{	//E
	public:
		FluteE(){
			this->extraGSM = 40;
		}
};
class FluteF : public Flute{	//F
	public:
		FluteF(){
			this->extraGSM = 50;
		}
};
class FluteG : public Flute{	//G
	public:
		FluteG(){
			this->extraGSM = 20;
		}
};
class Pin{			//pin
	int cost;
	public:
		int getCost(int amount){
			cost = amount*10;
			return cost;
		}
};
class Paste{		//paste
	int cost;
	public:
		int getCost(string type){
			if(type == "Universal")
			cost = 20;
			else if(type == "AllFlapMeeting")
			cost = 30;
			else if(type == "HoneyComb")
			cost = 40;
			else if(type == "ReverseTuckIn")
			cost = 40;
			else if(type == "TopOpeningSnapLock")
			cost = 50;	
			return cost;
		}
		
};
class Box{			//box
	int length;
	int height;
	int width;
	int area;
	Flute flutE;
	int totalGSM;
	int stitchingCost;
	int part; 	//1 : single part, 2 : Double part
	
		
	public:
	string type;
		Box(){
		}
		void setBox(int length, int width, int height, int part){
			this->length = length;
			this->width = width;
			this->height = height;
			this->part = part;
		}
		int calculateCost(Flute flute){
			area = length*height*width;
			totalGSM = (flute.extraGSM+flute.GSM)*100;
			
			int totalCost;
			totalCost = area*totalGSM*flute.extraGSM*stitchingCost;
			return totalCost;
		}
		join(Pin pin){
			int amount;
			cout<<endl<<"Enter Required pin : ";
			cin>>amount;
			stitchingCost = pin.getCost(amount);
			if(part==2) stitchingCost*=3;
		}
		join(Paste paste){
			stitchingCost = paste.getCost(type);
			if(part==2) stitchingCost*=3;
		}
};
class Universal : public Box{ 	//Universal
	public:
		Universal(){
			type = "Universal";
		}
};
class AllFlapMeeting : public Box{		 //AllFlapMeeting
	public:
		AllFlapMeeting(){
			type = "AllFlapMeeting";
		}
};
class HoneyComb : public Box{		//HoneyComb
	public:
		HoneyComb(){
			type = "HoneyComb";
		}
};
class ReverseTuckIn : public Box{		//ReverseTuckIn
	public:
		ReverseTuckIn(){
			type = "ReverseTuckIn";
		}
};
class TopOpeningSnapLock : public Box{ 	//TopOpeningSnapLock
	public:
		TopOpeningSnapLock(){
			type = "TopOpeningSnapLock";
		}
};

int main(){
	FluteA fluteA;
	Pin pin;
	Universal universal;
	int part = 1;
	universal.setBox(10,10,10,part);
	
	universal.join(pin);
	
	cout<<universal.calculateCost(fluteA);
}
