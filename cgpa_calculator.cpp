#include <iostream>

using namespace std;

// Function to calculate CGPA from grades
float calculateCgpa() {
	cout<<"enter the no. of subjects : \n";
	int n;
	cin>>n;
	float grade[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the grade for subject "<<(i+1)<<"out of 10 : ";
		cin>>grade[i];
	}
   float sum=0.0;
   for(int i=0;i<n;i++)
   {
   	sum=sum+grade[i];
   }
   float cgpa=sum/n;
   return cgpa;
   
}

// Function to convert CGPA to Percentage
float cgpaToPercentage(float cgpa) {
    return cgpa * 9.5; // Assuming CGPA is out of 10
}

// Function to convert Percentage to CGPA
float percentageToCgpa(float percentage) {
    return percentage / 9.5; // Assuming CGPA is out of 10
}

int main() {
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Calculate CGPA\n";
        cout << "2. Convert CGPA to Percentage\n";
        cout << "3. Convert Percentage to CGPA\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Your CGPA: " << calculateCgpa() << endl;
        } else if (choice == 2) {
            float cgpa;
            cout << "Enter CGPA: ";
            cin >> cgpa;
            cout << "Percentage: " << cgpaToPercentage(cgpa) << "%" << endl;
        } else if (choice == 3) {
            float percentage;
            cout << "Enter Percentage: ";
            cin >> percentage;
            cout << "CGPA: " << percentageToCgpa(percentage) << endl;
        } else if (choice == 4) {
            cout << "Exiting program." << endl;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
