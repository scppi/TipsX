#include <stdio.h>
#include <iostream>
using namespace std;

	float ConvertToInches(float feet,float inches){
		float returnFloat;
		returnFloat=(feet*12)+inches;
		return returnFloat;
	}
	
int main(){
	float inches;
	float feet;
	float inchesToConvert;
	float bmi;
	float lbs;
	string units;
	startOver:
	printf("Enter units (in/ft-in): ");
	cin>>units;
	if(units=="ft-in"){
		printf("Enter Feet: ");
		scanf("%f",&feet);
		printf("Enter Inches: ");
		scanf("%f",&inchesToConvert);
		inches=ConvertToInches(feet,inchesToConvert);
	}
	else if(units=="in"){
		printf("Enter Inches: ");
		scanf("%f",&inches);
	}
	else{
		printf("Entry Error!\n");
		goto startOver;
	}
	printf("Enter weight in lbs: ");
	scanf("%f",&lbs);
	bmi=lbs/inches/inches*703;
	printf("\nBMI: %f\n",bmi);
	ReadKey();
}