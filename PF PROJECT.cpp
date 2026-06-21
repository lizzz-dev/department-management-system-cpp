#include <iostream>
#include <Windows.h>
using namespace std;


string Products[100]={"lays","slanty","Chocolate","Sneakers","Toblerone"};
int price[100]={20,10,30,200,1000};
int a=5;

void display(){
	cout<<"\n*PRODUCTS AND THEIR PRICE*\n";
	cout<<"Products\t\tPrice\n";
	for(int i=0;i<a;i++){
		cout<<Products[i]<<"    \t\t"<<price[i]<<endl;
	}
}

void ModifyDetails(){
	int choice;
	while(choice!=3){
	cout<<"\nEnter 1 to enter more Products ";
	cout<<"\nEnter 2 to modify Product's price ";
	cout<<"\nEnter 3 to exit \n";
	cin>>choice;
	if(choice == 1){
		cout<<"How many products you want to add : ";
		int c;  cin>>c;
		int b;  
		b = a + c;
		cout<<"Enter Product : ";
		for(int i=a;i<b;i++){
			cin>>Products[i];
			cout<<"Enter price for "<<Products[i]<<" : ";
			cin>>price[i];
		}
		a+=c;
	}
	else if (choice == 2){
		display();
		cout<<"Which product's price you want to change : ";
		string p;
		cin>>p;
		int index = -1;
		for(int i = 0; i < a; i++){
			if(p==Products[i]){
				index = i;
				break;
			}
		}
		if(index != -1){
		int NewPrice;
		cout<<"Enter New Price : ";
		cin>>NewPrice;
		price[index]=NewPrice;
	}
	}
	else if(choice == 3){
		cout<<"You exit!!!"<<endl;
		break;
		Sleep(1000);
		system("cls");
	}
	else{
		cout<<"Invalid Choice!!!";
		Sleep(1000);
		system("cls");
	}
	
}
}

void Purchaser(){
	cout<<"\n\nThese are Products";
	display();
	int c,p = 0;
	cout<<"\nEnter 1 to add things to cart ";
	cout<<"\nEnter 3 to exit ";
	while(c!=3){	
	cin>>c;
	if(c==1){
	cout<<"What you want to buy : ";
	string buy;
	cin>>buy;
	int buyindex = -1;
	for(int i=0;i<a;i++){
		if(buy==Products[i]){
			buyindex=i;
			break;
		}
	}
	if(buyindex != -1){
		p = p + price[buyindex];
		cout<<"\nEnter 1 to continue to add things to cart ";
        cout<<"\nEnter 2 if you finished purchasing \n";
        
	}
}
else if(c==2){
	cout<<"Total Price : "<<p;
	break;
}
else if(c==3){
	cout<<"You exit!!!";
	break;
	Sleep(1000);
	system("cls");
}
else{
	cout<<"Invalid Parameters!!!";
}	
}
}

int main(){
	system("color 80");
	char arr[]={'D','E','P','A','R','T','M','E','N','T',' ','S','T','O','R','E'};
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t";
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		cout<<arr[i];
		Sleep(30);
	}
	Sleep(1000);
	system("cls");
	int pass;
	int a;
	while(a!=5){
	cout<<"\nEnter 1 for admin control ";
	cout<<"\nEnter 2 for customer    ";
	cout<<"\nEnter 3 to see Products    ";
	cout<<"\nEnter 4 to exit    "<<endl;
	cin>>a;
	if(a == 1){
		Sleep(500);
	    system("cls");
		cout<<"\n\n*ADMIN PANEL*"<<endl;
	    cout<<"Enter Admin Password : ";
	    cin>>pass;
	    if(pass==786){
	     	ModifyDetails();
	     	Sleep(1000);
	        system("cls");
    	}
    	else{
    		cout<<"Wrong Password!!!\n";
    		Sleep(2000);
	        system("cls");
		}
    }
    else if(a==2){
    	Sleep(500);
	    system("cls");
    	cout<<"\n\n*CUSTOMER PANEL*"<<endl;
    	Purchaser();
	}
	else if(a==3){
		display();	
	}
	else if(a==4){
		Sleep(1000);
		system("cls");
		cout<<"\n\n**\n"<<endl;
		cout<<"\t\t\t\t\tYou exit sucessfully!!!";
		cout<<"\n\n**"<<endl;
		break;
	}
    else {
    	cout<<"Selected Wrong Choice!!!"<<endl;
    	Sleep(1000);
	    system("cls");
	}
}
	return 0;
}
