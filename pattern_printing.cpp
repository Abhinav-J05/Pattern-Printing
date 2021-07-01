
#include <iostream>
using namespacce std;

int main(){

	int choice;

	cout<<" Choose from options below. ";
	cout<<" ";

	cout<<" Enter your Choice : ";
	cin>>choice;

	switch(choice){

		case  '1' : Left_Right_Triangle();
			break;
		case  '2' : Inverted_Triangle();
			break;
		case  '3' : Hollow_Triangle();
			break;
		case  '4' : Hollow_Rectangle();
			break;
		case  '5' : Half_Pyramid_with_Numbers();
			break;
		case  '6' : Floyd's_Triangle_pattern();
			break;
		case  '7' : Butterfly_Pattern();
			break;
		case  '8' : 0-1_Pattern();
			break;
		case  '9' : Rhombus_Pattern();
			break;
		case  '10': Number_Pattern();
			break;
		case  '11': Palindromic_Pattern();
			break;
		case  '12': Diamond_Pattern();
			break;



	default:
	cout<<"Enter Different Choice";

	return 0;

}

void Staircase(){
	for(int i=row;i>=1;i--){
		for(int j=0; j<=row-i; j++){
			for(int z=0; z<=row ;z++){
				cout<<"* ";
			}
		cout<<"||";
		}
	cout<<endl;
	}
}


void Left_Right_Triangle(){

	int r,c;
	cout<<"\n Left and Right Triangle Pattern \n\n";
	for(int i=1; i<=row;i++){
		for(int j=1; j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}

	cout<<endl;

	for(int i=1; i<=row;i++){
		for(int j=1; j<=row;j++){
				if(j<=row-i){
					cout<<" ";
				}
				else{
					cout<<"*";
				}
		}


		cout<<endl;
	}

}


void Hollow_Triangle(){


}


void Half_Pyramid_using_Number(){

	for(int i=1; i<=row;i++){
		for(int j=1;j<=i;j++){
			cout<<i;
		}
		cout<<endl;
	}


}


void Floyd's_Triangle_pattern(){
	int count=1;
	for(int i=1; i<=row;i++){
		for(int j=1;j<=i;j++){
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}

}


void Butterfly_Pattern(){

	for(int i=1;i<=row;i++){
		for(int j=1;j<=i; j++){
			cout<<"x";
		}
		int space=2*row-2*i;
		for(int j=1;j<space;j++){
			cout<<" ";
		}
		for(int j=1;j<=i; j++){
			cout<<"x";
		}
		cout<<endl;

	}


	for(int i=row;i>=1;i--){
		for(int j=1;j<=i; j++){
			cout<<"x";
		}
		int space=2*row-2*i;
		for(int j=1;j<space;j++){
			cout<<" ";
		}
		for(int j=1;j<=i; j++){
			cout<<"x";
		}
		cout<<endl;

	}

}



void  0-1_Pattern(){
	for(int i=1; i<=row;i++){
		for(int j=1; j<=1;j++){
			if((i+j)%2==0){
				cout<<" 1"<<endl;
			}
			else{
				cout<<" 0";
			}
		}
	}
	cout<<endl;


}


void Rhombus_Pattern(){
	for(int i=1;i<=row;i++){
		for(int j=1;j<row-1;j++){
			cout<<" ";
		}
		for(int j=1;j<=row;j++){
			cout<<"*";
		}
		cout<<endl;
	}


}


void Number_Pattern(){
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}

		cout<<endl;
	}


}


void Palindromic_Pattern(){
	for(int i=1;i<=row;i++){
		int j;
		for(j=1;j<=row-i;j++){
			cout<<" ";
		}
		int k=1;
		for(;j<=row;j++){
			cout<<k--<<" ";
		}
		k=2;
		for(;j<=row+i-1;j++){
			cout<<k++<<" ";
		}
	cout<<endl;

	}

}

void Diamond_Pattern(){
	int space=(2*n-1)/2;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++){
			cout<<"*";
		}
		cout<< endl;
		space--;
	}

	space=0;
	for(int i=row; i>=1;i--){
		for(int j=1; j<=space;j++){
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++){
			cout<<"*";
		}
		cout<<endl;
		space++;
		}
